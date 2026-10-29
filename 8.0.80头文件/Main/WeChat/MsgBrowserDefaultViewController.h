@interface MsgBrowserDefaultViewController : MsgBrowserBaseViewController <MMRefreshTableFooterDelegate, MMMultiMenuAndMemuTableViewCellDelegate, MsgBrowserCellMenuDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MMTableView * _tableView; // +0x70
    WCTimeLineFooterView * _loadingView; // +0x78
    NSMutableArray * _arrSectionTitle; // +0x80
    NSMutableDictionary * _dicMsgsByTitle; // +0x88
    MMTableView * _sliderGroupedTableView; // +0x90
    CGPoint _savedContentOffsetForSliderTransition; // +0x98
}
- (void)initContentView;
- (void)layoutContentView;
- (void)viewDidLayoutSubviews;
- (id)sliderTargetScrollView;
- (id)activeSliderScrollView;
- (void)sliderFullscreenStateChanged:(BOOL)arg1;
- (id)sliderDateTextForScrollPosition;
- (void)sliderWillEnterFullscreen;
- (void)sliderWillExitFullscreen;
- (void)scrollContentViewToTop;
- (void)updateLoadingState;
- (void)reloadData;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)rebuildMsgData;
- (id)getMsgInSection:(long long)arg1 row:(long long)arg2;
- (id)getArrSectionTitle;
- (BOOL)reloadRowForMessageLocalId:(unsigned int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onMenuOptionsShowOnCell:(id)arg1;
- (void)msgBrowserCellDidClickLocate:(id)arg1;
- (void)msgBrowserCellDidClickForward:(id)arg1;
- (void)msgBrowserCellDidClickFavorite:(id)arg1;
- (void)msgBrowserCellDidClickDelete:(id)arg1;
- (void)msgBrowserCellDidClickMultiSelect:(id)arg1;
- (void)onMenuTransitionToConfirmWithState:(long long)arg1;
- (void)onMemuShowOnCell:(id)arg1;
- (void)onMemuNotFoucusOnCell:(id)arg1;
- (void)showMsgLocationForRowAtIndexPath:(id)arg1;
- (void)delMsgAtIndexPath:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (BOOL)isOnlyMatchMsgFtsContent:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)arrSectionTitle;
- (void)setArrSectionTitle:(id)arg1;
- (id)dicMsgsByTitle;
- (void)setDicMsgsByTitle:(id)arg1;
- (id)sliderGroupedTableView;
- (void)setSliderGroupedTableView:(id)arg1;
- (CGPoint)savedContentOffsetForSliderTransition;
- (void)setSavedContentOffsetForSliderTransition:(CGPoint)arg1;
- (void).cxx_destruct;
@end
