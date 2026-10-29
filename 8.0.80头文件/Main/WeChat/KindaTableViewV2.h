@interface KindaTableViewV2 : KindaView <WCFinderRefreshTableFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMTableViewReorderDelegate, MMKTableViewV2>
{
    BOOL _enabledFooterViewRefresh; // +0xa8
    MMTableView * _tableView; // +0xb0
    NSMutableDictionary * _heightAtIndexPath; // +0xb8
    KindaTableViewCellV2 * _measureCell; // +0xc0
    NSMutableArray * _cells; // +0xc8
    MMRefreshTableFooterView * _footerView; // +0xd0
    UILabel * _loadingLabel; // +0xd8
    MMUIActivityIndicatorView * _indicatorView; // +0xe0
    unsigned long long _loadingState; // +0xe8
    MMVoidCallback * _footerRefreshCallback; // +0xf0
    MMVoidCallback * _onScrollCallBack; // +0xf8
    MMVoidCallback * _onScrollBeginBallback; // +0x100
    NSString * _lastTargetCellDescription; // +0x108
    UIImpactFeedbackGenerator * _impactFeedbackGenerator; // +0x110
    UIImpactFeedbackGenerator * _lightImpactFeedbackGenerator; // +0x118
}
- (id)init;
- (void)makeCell:(id)arg1 cellManager:(id)arg2 indexPath:(id)arg3;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (void)setFooterViewNormalState;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOnScrollCallBackImpl:(id)arg1;
- (void)setOnBeginScrollCallbackImpl:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)getView;
- (void)setCells:(id)arg1;
- (void)setEnableFooterRefreshView:(BOOL)arg1;
- (void)setFooterRefreshViewLoadMoreCallbackImpl:(id)arg1;
- (void)setSelection:(int)arg1;
- (void)smoothScrollToPosition:(int)arg1;
- (void)setSelectionFromTop:(int)arg1 y:(int)arg2;
- (void)safeSetContentOffsetY:(double)arg1 position:(int)arg2 animated:(BOOL)arg3;
- (id)getCells;
- (void)setDragEnabled:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 reorderFromIndex:(id)arg2 toIndex:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldStartResortAtPos:(CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 draggingViewForIndexPath:(id)arg2;
- (void)onReorderEnd;
- (void)tableView:(id)arg1 didMoveFromIndex:(id)arg2 toIndex:(id)arg3;
- (id)getAccessibilityDescriptionForCellAtIndex:(long long)arg1;
- (BOOL)isNumericString:(id)arg1;
- (void)findAllTextsInView:(id)arg1 texts:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)heightAtIndexPath;
- (void)setHeightAtIndexPath:(id)arg1;
- (id)measureCell;
- (void)setMeasureCell:(id)arg1;
- (id)cells;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg1;
- (BOOL)enabledFooterViewRefresh;
- (void)setEnabledFooterViewRefresh:(BOOL)arg1;
- (id)footerRefreshCallback;
- (void)setFooterRefreshCallback:(id)arg1;
- (id)onScrollCallBack;
- (void)setOnScrollCallBack:(id)arg1;
- (id)onScrollBeginBallback;
- (void)setOnScrollBeginBallback:(id)arg1;
- (id)lastTargetCellDescription;
- (void)setLastTargetCellDescription:(id)arg1;
- (id)impactFeedbackGenerator;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (id)lightImpactFeedbackGenerator;
- (void)setLightImpactFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
