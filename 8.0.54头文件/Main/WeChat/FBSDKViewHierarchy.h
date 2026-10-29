@interface FBSDKViewHierarchy : NSObject
+ (id)getChildren:(id)arg1;
+ (id)getParent:(id)arg1;
+ (id)getPath:(id)arg1;
+ (id)getPath:(id)arg1 limit:(int)arg2;
+ (id)getAttributesOf:(id)arg1 parent:(id)arg2;
+ (id)getDetailAttributesOf:(id)arg1;
+ (id)getIndexPath:(id)arg1;
+ (id)getText:(id)arg1;
+ (id)getTextStyle:(id)arg1;
+ (id)getHint:(id)arg1;
+ (unsigned long long)getClassBitmask:(id)arg1;
+ (BOOL)isUserInputView:(id)arg1;
+ (BOOL)isRCTButton:(id)arg1;
+ (id)getViewReactTag:(id)arg1;
+ (BOOL)isView:(id)arg1 superViewOfView:(id)arg2;
+ (id)getParentViewController:(id)arg1;
+ (id)getParentTableView:(id)arg1;
+ (id)getParentCollectionView:(id)arg1;
+ (long long)getTag:(id)arg1;
+ (id)getDimensionOf:(id)arg1;
@end

