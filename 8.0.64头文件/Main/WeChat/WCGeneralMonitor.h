@interface WCGeneralMonitor : NSObject <UIGestureRecognizerDelegate>
{
    UIScrollView * m_scrollView; // +0x8
    UIWindow * m_uiWindow; // +0x10
    NSMutableArray * m_lastVisiableItems; // +0x18
    NSMutableArray * m_lastVisiableIds; // +0x20
    NSMutableDictionary * m_lastVisiableCellBizIds; // +0x28
    NSHashTable * m_lastVisiableCells; // +0x30
    double m_lastOffsetX; // +0x38
    double m_lastOffsetY; // +0x40
    unsigned long long m_lastTimeMS; // +0x48
    CGRect m_statusRect; // +0x50
    double m_statusNavHeight; // +0x70
    BOOL m_isInPage; // +0x78
    BOOL m_isInScreem; // +0x79
    BOOL m_isInitMonitor; // +0x7a
    BOOL m_isCheckItemExposed; // +0x7b
    unsigned long long m_nearbyLiveSubTabIndex; // +0x80
    unsigned long long m_nearbyLiveSubTabScene; // +0x88
    unsigned long long m_totalCostTime; // +0x90
    unsigned long long m_totalCostCount; // +0x98
    BOOL m_isHidden; // +0xa0
    id <WCGeneralMonitorDelegate> _monitorDelegate; // +0xa8
}
- (id)initWithView:(id)arg1 observerType:(unsigned long long)arg2;
- (void)initMonitor;
- (void)dealloc;
- (void)onViewDidAppear:(id)arg1;
- (void)onViewDidDisappear:(id)arg1;
- (void)onNearbySubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbySubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
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
- (void)onDidEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onCellForRowAtIndexPath:(id)arg1 indexPath:(id)arg2;
- (void)checkItemExposed:(id)arg1 unVisibleIndexPaths:(id)arg2;
- (BOOL)isInScreem:(id)arg1;
- (BOOL)isEqualCellBizId:(id)arg1 lastCellBizId:(id)arg2;
- (BOOL)isNeedMonitor:(id)arg1;
- (id)getVisibleIndexPaths;
- (void)triggerCheckIfNeededWithScrollView:(id)arg1;
- (void)triggerCheck:(id)arg1;
- (void)setIsInPage:(BOOL)arg1;
- (void)setNearbyLiveSubTabIndex:(unsigned long long)arg1;
- (void)setNearbyLiveSubTabScene:(unsigned long long)arg1;
- (id)getMonitorCellId:(id)arg1;
- (id)getMonitorCell:(id)arg1 withIndexPath:(id)arg2;
- (id)monitorDelegate;
- (void)setMonitorDelegate:(id)arg1;
- (void).cxx_destruct;
@end
