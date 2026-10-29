@interface WCFinderNotifyCenterUnitVC : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFansProfileViewControllerDelegate, UITableViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderRefreshTableFooterViewDelegate, WCGeneralMonitorDelegate, WCFinderListLoadingStateModelObserver, WCFinderNotifyUnifiedCellDelegate, WCFinderFeedInputViewDelegate, WCFinderFeedInputCommentPostDelegate, WCFinderNotifyCenterUnitVMDelegate>
{
    BOOL _shouldRefetchDataAfterPopOrDismiss; // +0x68
    BOOL _showMentionSwitchEntry; // +0x69
    unsigned long long _redDotUnreadCount; // +0x70
    UIView * _customNavBg; // +0x78
    UITableView * _tableView; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderDataLoadTips * _dataLoadTips; // +0x90
    WCFinderFeedInputView * _commentInputView; // +0x98
    WCFinderNotifyCenterCellViewModel * _currentReplyViewModel; // +0xa0
    UITableViewDiffableDataSource * _tableViewDataSource; // +0xa8
    WCFinderNotifyCenterUnitVM * _vm; // +0xb0
    WCFinderNotifyCenterCellViewModel * _showProfileViewModel; // +0xb8
    WCFinderMagicAnimationLogic * _magicAnimLogic; // +0xc0
    NSMutableSet * _highlightedExpandedMentionIDSet; // +0xc8
}
- (id)initWithContact:(id)arg1 tabType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (id)highlightedExpandedMentionIDSet;
- (void)setupUI;
- (void)setupCustomNavBg;
- (void)layoutCustomNavBg;
- (void)setupTableView;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)setupLoadingState;
- (void)layoutLoadTips;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)onTopBannerClicked;
- (void)didClickToExpandIgnoredMention;
- (BOOL)isMemberTab;
- (unsigned long long)tabTypeForReport;
- (id)gen20763KVReportDictWithViewModel:(id)arg1;
- (void)reportCellElementClickWithViewModel:(id)arg1 clickRegion:(unsigned long long)arg2;
- (void)reportExpandIgnoredMention;
- (unsigned long long)currentPageCellType;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)shouldShowNewMentionTips;
- (id)newMentionTips;
- (void)clickMentionViewModelAction:(id)arg1;
- (void)showFansListViewController;
- (void)clickToShowUserProfileWithViewModel:(id)arg1;
- (unsigned long long)fansProfileSceneWithViewModel:(id)arg1;
- (void)showDataItemDetailVCActionWithViewModel:(id)arg1 forceToMentionDetailViewController:(BOOL)arg2;
- (void)openMusicVCWithDataItem:(id)arg1 viewModel:(id)arg2;
- (void)showDetailDataItemVCWithContentVM:(id)arg1 mentionVM:(id)arg2 autoShowListType:(unsigned long long)arg3 forceToMentionDetailViewController:(BOOL)arg4;
- (void)showMentionDetailViewController:(id)arg1 cellVM:(id)arg2 autoShowListType:(unsigned long long)arg3;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (int)notifyCenterCellCommentScene:(id)arg1;
- (void)notifyCenterCell:(id)arg1 didClickThumbWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickAvatarWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickMultiAvatarWithViewModel:(id)arg2;
- (void)notifyCenterCellHeightChanged:(id)arg1;
- (void)notifyCenterCell:(id)arg1 didClickThanksButtonWithThanksState:(BOOL)arg2;
- (void)notifyCenterCell:(id)arg1 didClickCommentReplyButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickCommentLikeButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickUserRelationshipTagWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 didClickFollowButtonWithViewModel:(id)arg2;
- (void)notifyCenterCell:(id)arg1 emitThanksMagicAnimationWithStyle:(unsigned long long)arg2;
- (void)notifyCenterCellReplyCommentSuccesss:(id)arg1;
- (void)notifyCenterCell:(id)arg1 replyCommentErrorWithMsg:(id)arg2;
- (void)notifyCenterCellDidClickAggregatedExpandButton:(id)arg1;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)onDataLoadTipsClickRetry;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onNotifyCenterListDataChangedFromSource:(unsigned long long)arg1;
- (void)onListLoadingStateModified;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (unsigned long long)redDotUnreadCount;
- (void)setRedDotUnreadCount:(unsigned long long)arg1;
- (id)customNavBg;
- (void)setCustomNavBg:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg1;
- (id)currentReplyViewModel;
- (void)setCurrentReplyViewModel:(id)arg1;
- (BOOL)shouldRefetchDataAfterPopOrDismiss;
- (void)setShouldRefetchDataAfterPopOrDismiss:(BOOL)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg1;
- (BOOL)showMentionSwitchEntry;
- (void)setShowMentionSwitchEntry:(BOOL)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)showProfileViewModel;
- (void)setShowProfileViewModel:(id)arg1;
- (id)magicAnimLogic;
- (void)setMagicAnimLogic:(id)arg1;
- (void)setHighlightedExpandedMentionIDSet:(id)arg1;
- (void).cxx_destruct;
@end

