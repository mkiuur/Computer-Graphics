#include "point_AABBTree_squared_distance.h"
#include <queue> // std::priority_queue
#include <limits>

typedef std::pair<double, std::shared_ptr<AABBTree>> distances;

bool point_AABBTree_squared_distance(
    const Eigen::RowVector3d & query,
    const std::shared_ptr<AABBTree> & root,
    const double min_sqrd,
    const double max_sqrd,
    double & sqrd,
    std::shared_ptr<Object> & descendant)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here
  sqrd = std::numeric_limits<double>::infinity();

  std::priority_queue<distances,std::vector<distances>,
                      std::greater<distances>> Q;
  
  //find distance from query point to root box
  distances pair(point_box_squared_distance(query,root->box),root);
  //push distance from query point to root box into the Q
  Q.push(pair);
  
  
  while (!Q.empty()){
    
    //pop Q
    distances pop_out = Q.top();                   
    std::shared_ptr<AABBTree> subtree = pop_out.second;   
    Q.pop();

    //if box is closer to query point, check it's descendants
    if(pop_out.first<sqrd){
      if((!std::dynamic_pointer_cast<AABBTree>(subtree->left))||
         (!std::dynamic_pointer_cast<AABBTree>(subtree->right))){
        double sub_box_distance;
        std::shared_ptr<Object> left_descendants,right_descendants;

        if(subtree->left){
          if(subtree->left->point_squared_distance(query,min_sqrd,max_sqrd,
                                                   sub_box_distance,left_descendants)){
            if(sub_box_distance<sqrd){
              sqrd = sub_box_distance;
              descendant = subtree->left;
            }
          }
        }
        if(subtree->right){
          if(subtree->right->point_squared_distance(query,min_sqrd,max_sqrd,
                                                    sub_box_distance,right_descendants)){
            if(sub_box_distance<sqrd){
              sqrd = sub_box_distance;
              descendant = subtree->right;
            }
          }
        }
      }
      else{
        //push left and right sub trees
        distances left_node (point_box_squared_distance(query,subtree->left->box),
                                 std::static_pointer_cast<AABBTree>(subtree->left));
        distances right_node (point_box_squared_distance(query,subtree->right->box),
                                 std::static_pointer_cast<AABBTree>(subtree->right));
        Q.push(left_node);
        
        Q.push(right_node);
      }
    }
  }
  return descendant!=NULL;
    ////////////////////////////////////////////////////////////////////////////
}
