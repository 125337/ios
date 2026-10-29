@interface WCGeneralMonitorEventCenter : NSObject <WCGeneralMonitorExt, WCAccountSwitchProtocol>
{
    NSMapTable * _monitorTable; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)onInit;
- (void)onClearData;
- (void)addGeneralMonitor:(id)arg1 observerType:(unsigned long long)arg2;
- (void)removeGeneralMonitor:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onEnterForeground2;
- (void)onEnterBackground2;
- (void)onViewDidAppear:(id)arg1;
- (void)onViewDidDisappear:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onReloadData:(id)arg1;
- (void)onReloadRowsAtIndexPaths:(id)arg1;
- (void)onReloadSections:(id)arg1;
- (void)onReloadItemsAtIndexPaths:(id)arg1;
- (void)onInsertSectionsWithRowAnimation:(id)arg1;
- (void)onDeleteSectionsWithRowAnimation:(id)arg1;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(id)arg1;
- (void)onInsertSections:(id)arg1;
- (void)onDeleteSections:(id)arg1;
- (void)onInsertItemsAtIndexPaths:(id)arg1;
- (void)onDeleteItemsAtIndexPaths:(id)arg1;
- (void)onSetHidden:(id)arg1 hidden:(BOOL)arg2;
- (void)onCellForRowAtIndexPath:(id)arg1 indexPath:(id)arg2;
- (void)onDidEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (id)monitorTable;
- (void)setMonitorTable:(id)arg1;
- (void).cxx_destruct;
@end

