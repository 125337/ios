@interface WCFinderWechatMentionVC : MMUIViewController <WCFinderWechatMentionVMDelegate, UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderWechatMentionCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedInputViewDelegate, WCFinderFeedInputCommentPostDelegate, WCFinderListLoadingStateModelObserver, WCFinderDataLoadTipsDelegate, WCFinderWechatMentionFollowApplyTableViewCellDelegate, WCGeneralMonitorDelegate>
{
    WCFinderWechatMentionVM * _viewModel; // +0x68
    UIView * _customNavBg; // +0x70
    UITableView * _tableView; // +0x78
    UITableViewDiffableDataSource * _tableViewDataSource; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderDataLoadTips * _dataLoadTips; // +0x90
    WCFinderFeedInputView * _commentInputView; // +0x98
    WCFinderWechatMentionCellViewModel * _currentReplyViewModel; // +0xa0
    NSMutableDictionary * _magicAnimationMetaDict; // +0xa8
    WCFinderMagicAnimationLogic * _magicAnimLogic; // +0xb0
    NSMutableSet * _highlightedExpandedMentionIDSet; // +0xb8
    long long _unreadLikeCount; // +0xc0
    long long _unreadCommentCount; // +0xc8
    long long _unreadNotifyCount; // +0xd0
    double _enterTime; // +0xd8
    WCFinderWechatMentionCellViewModel * _showProfileViewModel; // +0xe0
}
- (id)initWithType:(unsigned long long)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)highlightedExpandedMentionIDSet;
- (void)setupUI;
- (void)setupCustomNavBg;
- (void)layoutCustomNavBg;
- (void)setupLoadingState;
- (void)configureTableView;
- (void)layoutLoadTips;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)onListLoadingStateModified;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryShowThanksMagicEmojiWithInitialDelay:(double)arg1;
- (void)tryShowMagicEmojiWithIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickAvatarWithViewModel:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickMultiAvatarWithViewModel:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickFollowButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickUserTag:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickCommentReplyButton:(id)arg2;
- (void)wechatMentionCell:(id)arg1 didClickCommentLikeButton:(id)arg2;
- (void)wechatMentionCellHeightChanged:(id)arg1;
- (void)wechatMentionCell:(id)arg1 didClickAggregatedExpandButton:(id)arg2;
- (void)wechatMentionFollowApplyTableViewCellHeightChanged:(id)arg1;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)didClickToExpandIgnoredMention;
- (void)jumpToDataItemWithViewModel:(id)arg1;
- (void)openFeedWithOpenParams:(id)arg1;
- (void)showProfileWithViewModel:(id)arg1;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)showCommonWarningTipsWithContent:(id)arg1;
- (void)showDetailDataItemVCWithParams:(id)arg1;
- (void)onWechatMentionListDataChangedFrom:(unsigned long long)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)gen20763KVReportDictWithCellViewModel:(id)arg1;
- (void)reportCellElementClickWithViewModel:(id)arg1 clickRegion:(unsigned long long)arg2;
- (void)reportExpandIgnoredMention;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)customNavBg;
- (void)setCustomNavBg:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg1;
- (id)currentReplyViewModel;
- (void)setCurrentReplyViewModel:(id)arg1;
- (id)magicAnimationMetaDict;
- (void)setMagicAnimationMetaDict:(id)arg1;
- (id)magicAnimLogic;
- (void)setMagicAnimLogic:(id)arg1;
- (void)setHighlightedExpandedMentionIDSet:(id)arg1;
- (long long)unreadLikeCount;
- (void)setUnreadLikeCount:(long long)arg1;
- (long long)unreadCommentCount;
- (void)setUnreadCommentCount:(long long)arg1;
- (long long)unreadNotifyCount;
- (void)setUnreadNotifyCount:(long long)arg1;
- (double)enterTime;
- (void)setEnterTime:(double)arg1;
- (id)showProfileViewModel;
- (void)setShowProfileViewModel:(id)arg1;
- (void).cxx_destruct;
@end

