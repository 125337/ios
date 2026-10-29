@interface BENotificationMsgViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate>
{
    BOOL _isViewDidAppear; // +0x1c8
    unsigned int _lastAutoPlayLocalID; // +0x1cc
    TemplateMsgSearchHelper * _searchHelper; // +0x1d0
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
- (void)onTableEndScroll;
- (void)makeNotifyMsgExpose;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)autoplayVideoProcess;
- (void)throttleScrollProcess;
- (void)autoPauseLatestAutoplayVideo;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (unsigned int)lastAutoPlayLocalID;
- (void)setLastAutoPlayLocalID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

