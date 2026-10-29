@interface WCFinderMemberShipHomePageViewController : MMUIViewController <UITableViewDelegate, WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate, WCFinderMeberShipActivityEvent, WCFinderMemberShipHomePageViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderStreamLoadingStateDelegate, WCPlayerConfigViewControllerDelegate, WCFinderMSPostHeaderDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderCommentDetailViewControllerDelegate>
{
    WCFinderMemberShipHomePageViewModel * _viewModel; // +0x70
    WCFinderTabSwitchView * _tabSwitchView; // +0x78
    UITableViewDiffableDataSource * _dataSource; // +0x80
    WCFinderEventDelegate * _delegate; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0x98
    WCFinderReuseQueue * _reuseQueue; // +0xa0
    UIView * _originView; // +0xa8
    WCFinderMSPostHeader * _postHeaderView; // +0xb0
    UILabel * _tipsLabel; // +0xb8
}
- (id)tableView;
- (void)loadView;
- (void)dealloc;
- (void)updateContentInset:(UIEdgeInsets)arg1 minSize:(CGSize)arg2;
- (void)registerCellForTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (id)tableView:(id)arg1 indexPath:(id)arg2 cellForItemIdentifier:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setViewModel:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)selectedPageChanged:(id)arg1;
- (void)onDisplayPageFeedArrayChanged;
- (void)reloadData;
- (void)reloadFooter;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3 enterType:(unsigned long long)arg4;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(BOOL)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (id)zoneViewController;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadingStateChanged:(id)arg1;
- (void)onActivityViewModelPageChanged;
- (void)onActivityChangeStickyTopTo:(BOOL)arg1 contentVM:(id)arg2 success:(BOOL)arg3 errorInfo:(id)arg4;
- (void)onActivityFeedClickComment:(id)arg1 enterType:(unsigned long long)arg2;
- (void)onActivityFeedClickMore:(id)arg1;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(BOOL)arg2;
- (void)onDelete:(id)arg1;
- (void)onRealDelete:(id)arg1;
- (void)onReport:(id)arg1;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(CGRect)arg3 originView:(id)arg4;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onActivityFeed:(id)arg1 clickTextLink:(id)arg2 fromLikeList:(BOOL)arg3;
- (void)showUserProfile:(id)arg1 contactType:(int)arg2 profileRefScene:(unsigned long long)arg3 vc:(id)arg4;
- (void)onActivityFeed:(id)arg1 notifyHeightChanged:(id)arg2;
- (void)onActivityFeedLongPress:(id)arg1;
- (BOOL)isSelfFeed:(id)arg1;
- (void)onActivityFeedClickHeader:(id)arg1;
- (void)onActivityFeed:(id)arg1 turnToLiked:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickInputView;
- (void)impactFeedbackWithStyle:(long long)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (id)viewModel;
- (id)tabSwitchView;
- (void)setTabSwitchView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)lastCommentVC;
- (void)setLastCommentVC:(id)arg1;
- (id)reuseQueue;
- (void)setReuseQueue:(id)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (id)postHeaderView;
- (void)setPostHeaderView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
