@interface AmoebaGeneralMonitor : NSObject <UIGestureRecognizerDelegate>
{
    AmoebaGeneralMonitorDelegateProxy * m_monitorDelegateProxy; // +0x8
    UIScrollView * m_scrollView; // +0x10
    UIWindow * m_uiWindow; // +0x18
    NSMutableArray * m_lastVisiableItems; // +0x20
    NSMutableArray * m_lastVisiableIds; // +0x28
    NSMutableDictionary * m_lastVisiableCellBizIds; // +0x30
    NSHashTable * m_lastVisiableCells; // +0x38
    double m_lastOffsetX; // +0x40
    double m_lastOffsetY; // +0x48
    unsigned long long m_lastTimeMS; // +0x50
    CGRect m_statusRect; // +0x58
    double m_statusNavHeight; // +0x78
    BOOL m_isInPage; // +0x80
    BOOL m_isInScreem; // +0x81
    BOOL m_isInitMonitor; // +0x82
    BOOL m_isCheckItemExposed; // +0x83
    unsigned long long m_nearbyLiveSubTabIndex; // +0x88
    unsigned long long m_nearbyLiveSubTabScene; // +0x90
    unsigned long long m_totalCostTime; // +0x98
    unsigned long long m_totalCostCount; // +0xa0
    BOOL m_isHidden; // +0xa8
}
- (id)initWithView:(id)arg1;
- (void)initMonitor;
- (void)setMonitorDelegate:(id)arg1;
- (id)monitorDelegate;
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
- (void).cxx_destruct;
@end
