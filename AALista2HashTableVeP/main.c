#include"red_black_tree.h"
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

#define N (100000)

/*  this file has functions to test a red-black tree of integers */

void IntDest(void* a) {
  free((int*)a);
}



int IntComp(const void* a,const void* b) {
  if( *(int*)a > *(int*)b) return(1);
  if( *(int*)a < *(int*)b) return(-1);
  return(0);
}

void IntPrint(const void* a) {
  printf("%i",*(int*)a);
}

void InfoPrint(void* a) {
  ;
}

void InfoDest(void *a){
  ;
  
}
 
int hashFunction(int Key){
    int f = Key % 9;
    return f;
}


int main() {
  stk_stack* enumResult;
  int option=0;
  int a, i, f = 0;
  int newKey, newKey2, aux;
  int* newInt;
  rb_red_blk_node* newNode;//0, newNode1, newNode2, newNode3, newNode4, newNode5, newNode6, newNode7, newNode8, newNode9;
  rb_red_blk_tree* tree0, tree1, tree2, tree3, tree4, tree5, tree6, tree7, tree8, tree9;
  
  

  tree0 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint); 
  tree1 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree2 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree3 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree4 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  
  tree5 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree6 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree7 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree8 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  tree9 =RBTreeCreate(IntComp,IntDest,InfoDest,IntPrint,InfoPrint);
  
  
  
 
  
  
  while(option!=8) {
    printf("choose one of the following:\n");
    printf("(1) add to tree\n(2) delete from tree\n(3) query\n");
    printf("(4) find predecessor\n(5) find sucessor\n(6) enumerate\n");
    printf("(7) print tree\n(8) quit\n");
    do option=fgetc(stdin); while(-1 != option && isspace(option));
    option-='0';
    switch(option)
      {
      
        
        
        
        
        
        
        
        
        case 1:{
	  printf("type key for new node\n");
	  scanf("%d",&newKey);
          
          f = hashFunction(newKey);
          switch(f)
      {
           case 0:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree0,newInt,0);
            }
	    break;  
            case 1:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree1,newInt,0);
            }
	    break;
            case 2:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree2,newInt,0);
            }
	    break;
            case 3:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree3,newInt,0);
            }
	    break;
            
            case 4:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree4,newInt,0);
            }
	    break;
            
            case 5:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree5,newInt,0);
            }
	    break;
            
            case 6:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree6,newInt,0);
            }
	    break;
            
            case 7:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree7,newInt,0);
            }
	    break;
            
            case 8:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree8,newInt,0);
            }
	    break;
            case 9:{
	      newInt=(int*) malloc(sizeof(int));
	      *newInt=newKey;
	      RBTreeInsert(tree9,newInt,0);
            }
	    break;
            
            default:{
	          printf("Invalid input; Please try again.\n");
            }
	}
	break;
      
      
        
        
        
        
        
        
        
        
        case 2:
	{
	  printf("type key of node to remove\n");
	  scanf("%i",&newKey);
          aux = newKey;
          f = hashFunction(aux);
          switch(f){
              
          case 0:{
	  if ( ( newNode0=RBExactQuery(tree0,&newKey ) ) ) RBDelete(tree0,newNode0);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 1:{
	  if ( ( newNode=RBExactQuery(tree1,&newKey ) ) ) RBDelete(tree1,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 2:{
	  if ( ( newNode=RBExactQuery(tree2,&newKey ) ) ) RBDelete(tree2,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 3:{
	  if ( ( newNode=RBExactQuery(tree3,&newKey ) ) ) RBDelete(tree3,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 4:{
	  if ( ( newNode=RBExactQuery(tree4,&newKey ) ) ) RBDelete(tree4,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 5:{
	  if ( ( newNode=RBExactQuery(tree5,&newKey ) ) ) RBDelete(tree5,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 6:{
	  if ( ( newNode=RBExactQuery(tree6,&newKey ) ) ) RBDelete(tree6,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 7:{
	  if ( ( newNode=RBExactQuery(tree7,&newKey ) ) ) RBDelete(tree7,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 8:{
	  if ( ( newNode=RBExactQuery(tree8,&newKey ) ) ) RBDelete(tree8,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
          
          case 9:{
	  if ( ( newNode=RBExactQuery(tree9,&newKey ) ) ) RBDelete(tree9,newNode);/*assignment*/
	  else printf("key not found in tree, no action taken\n");
          }
          break;
	}
	break;

      
              
        
        case 3:
	{
	  printf("type key of node to query for\n");
	  scanf("%i",&newKey);
          aux = newKey;
          f = hashFunction(aux);
          switch(f){
              case 0:{
	  if ( ( newNode = RBExactQuery(tree0,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 1:{
	  if ( ( newNode = RBExactQuery(tree1,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 2:{
	  if ( ( newNode = RBExactQuery(tree2,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 3:{
	  if ( ( newNode = RBExactQuery(tree3,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 4:{
	  if ( ( newNode = RBExactQuery(tree4,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;      
    
              case 5:{
	  if ( ( newNode = RBExactQuery(tree5,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 6:{
	  if ( ( newNode = RBExactQuery(tree6,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 7:{
	  if ( ( newNode = RBExactQuery(tree7,&newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;    
          
              case 8:{
	  if ( ( newNode = RBExactQuery(tree8, &newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
          
              case 9:{
	  if ( ( newNode = RBExactQuery(tree9, &newKey) ) ) {/*assignment*/
	    printf("data found in tree at location %i\n",(int)newNode);
	  } else {
	    printf("data not in tree\n");
	  }}
          break;
              
      }
	break;
      case 4:
	{
	  printf("type key of node to find predecessor of\n");
	  scanf("%i",&newKey);
	  if ( ( newNode = RBExactQuery(tree,&newKey) ) ) {/*assignment*/
	    newNode=TreePredecessor(tree,newNode);
	    if(tree->nil == newNode) {
	      printf("there is no predecessor for that node (it is a minimum)\n");
	    } else {
	      printf("predecessor has key %i\n",*(int*)newNode->key);
	    }
	  } else {
	    printf("data not in tree\n");
	  }
	}
	break;
      case 5:
	{
	  printf("type key of node to find successor of\n");
	  scanf("%i",&newKey);
	  if ( (newNode = RBExactQuery(tree,&newKey) ) ) {
	    newNode=TreeSuccessor(tree,newNode);
	    if(tree->nil == newNode) {
	      printf("there is no successor for that node (it is a maximum)\n");
	    } else {
	      printf("successor has key %i\n",*(int*)newNode->key);
	    }
	  } else {
	    printf("data not in tree\n");
	  }
	}
	break;
      case 6:
	{
	  printf("type low and high keys to see all keys between them\n");
	  scanf("%i %i",&newKey,&newKey2);
	  enumResult=RBEnumerate(tree,&newKey,&newKey2);	  
	  while ( (newNode = StackPop(enumResult)) ) {
	    tree->PrintKey(newNode->key);
	    printf("\n");
	  }
	  free(enumResult);
	}
	break;
      case 7:
	{
	  RBTreePrint(tree);
	}
	break;
      case 8:
	{
	  RBTreeDestroy(tree);
	  return 0;
	}
	break;
      default:
	printf("Invalid input; Please try again.\n");
      }
  }
    }
    }

  return 0;
}



