@interface TemplateMsgViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate, MessageNodeViewDelegate>
{
    BOOL _isViewDidAppear; // +0x1e0
    unsigned int _lastAutoPlayLocalID; // +0x1e4
    TemplateMsgSearchHelper * _searchHelper; // +0x1e8
}
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reloadTabeView;
- (void)onRightButton:(id)arg1;
- (void)onSearchButton:(id)arg1;
- (void)onTableEndScroll;
- (void)makeNotifyMsgExpose;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (BOOL)isServiceNotificationFirstLevelPage;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)autoplayVideoProcess;
- (void)throttleScrollProcess;
- (void)autoPauseLatestAutoplayVideo;
- (void)registerYReportSdk;
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)arg1 viewModel:(id)arg2 reportModel:(id)arg3;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (unsigned int)lastAutoPlayLocalID;
- (void)setLastAutoPlayLocalID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
