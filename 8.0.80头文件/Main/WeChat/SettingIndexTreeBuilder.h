@interface SettingIndexTreeBuilder : NSObject
{
    NSMutableSet * _visitedControllers; // +0x8
    long long _maxDepth; // +0x10
}
+ (id)buildIndexTreeFromTableViewManager:(id)arg1 rootController:(id)arg2;
- (id)init;
- (id)buildTreeFromTableViewManager:(id)arg1 controller:(id)arg2;
- (void)processSection:(id)arg1 parentNode:(id)arg2 controller:(id)arg3 depth:(long long)arg4;
- (id)processCellInfo:(id)arg1 parentNode:(id)arg2 depth:(long long)arg3;
- (id)titleForSearch:(id)arg1;
- (id)GetChildViewControllerFromPageMapper:(id)arg1 parentNode:(id)arg2;
- (void)triggerDataLoadForViewController:(id)arg1;
- (id)getTableViewManagerFromViewController:(id)arg1;
- (id)visitedControllers;
- (void)setVisitedControllers:(id)arg1;
- (long long)maxDepth;
- (void)setMaxDepth:(long long)arg1;
- (void).cxx_destruct;
@end
