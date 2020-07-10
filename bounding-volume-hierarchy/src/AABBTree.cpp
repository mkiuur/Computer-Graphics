#include "AABBTree.h"
#include "insert_box_into_box.h"

AABBTree::AABBTree(
  const std::vector<std::shared_ptr<Object> > & objects,
  int a_depth): 
  depth(std::move(a_depth)), 
  num_leaves(objects.size())
{
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  
  int objects_size = objects.size();
  
  if(objects_size==0){
    this->left = NULL;
    this->right = NULL;
    return;
  }
  else if (objects_size==1){
    this->left = objects[0];
    this->right = NULL;
    insert_box_into_box(this->left->box, this->box);
    return;
  }
  else if (objects_size ==2){
    this->left = objects[0];
    this->right = objects[1];
    insert_box_into_box(this->left->box, this->box);
    insert_box_into_box(this->right->box, this->box);
    return;
  }
  
  double max[3];
  double min[3];
  double lengths[3];
  
  for(int i=0;i<3;i++){
    max[i] = this->box.max_corner(i);
    min[i] = this->box.min_corner(i);
    for (int j = 0;j<objects_size;j++){
      BoundingBox curr = objects[j]->box;
      max[i] = std::max(max[i],curr.max_corner(i));
      min[i] = std::min(min[i],curr.min_corner(i));
    }
    this->box.max_corner(i) = max[i];
    this->box.min_corner(i) = min[i];
    lengths[i] = max[i]-min[i];
  }

  int longest_id = -1;
  
  if(lengths[0]>lengths[1]){longest_id = 0;}
  else if (lengths[2]>lengths[1]){longest_id = 2;}
  else{longest_id = 1;}
  
  Eigen::RowVector3d this_center = this->box.center();
  std::vector<std::shared_ptr<Object> > left,right;
  
  for(int i=0;i<objects_size;i++){
    if(objects[i]->box.center()(longest_id)>this_center(longest_id)){
      right.push_back(objects[i]);
    }
    else{
      left.push_back(objects[i]);
    }
  }
  if(left.size()==0&&right.size()!=0){
    left.push_back(right.back());
    right.pop_back();
  }
  else if(left.size()!=0&&right.size()==0){
    right.push_back(left.back());
    left.pop_back();
  }
  this->left = std::make_shared<AABBTree>(left,a_depth+1);
  this->right = std::make_shared<AABBTree>(right,a_depth+1);
  
  ////////////////////////////////////////////////////////////////////////////
}
