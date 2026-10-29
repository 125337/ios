@interface BrandProfileMsgTabViewController : BrandProfileBaseTabViewController <BrandProfileTopicViewDelegate, MMMenuControllerExt, WCActionSheetDelegate, IBizIamServiceExt>
{
    BOOL _fetchingOutboxAndMsg; // +0x8
    BOOL _hasRequestedSwitchToPicTab; // +0x9
    BOOL _showingEmptyStateReminder; // +0xa
    id <BrandProfileMsgTabViewControllerDelegate> _msgTabDelegate; // +0x10
    BrandProfileOutboxAndMsgProvider * _outboxProvider; // +0x18
    BrandProfileTopicView * _topicView; // +0x20
    BrandProfileTopicViewModel * _topicViewModel; // +0x28
    BrandProfileUpdateReminderView * _updateReminderView; // +0x30
    BrandProfileMsgLongPressContext * _menuContext; // +0x38
    BrandProfileItemBaseViewModel * _deletingViewModel; // +0x40
    NSArray * _outboxMessages; // +0x48
}
- (void)viewDidLoad;
- (void)onLikeStatusChanged:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiRespFuncFlag;
- (id)tabTitle;
- (id)brandProfileCeilingTableView;
- (void)configTableView;
- (id)topicView;
- (void)reloadTopicViewWithInfoList:(id)arg1;
- (void)tableViewReloadData;
- (void)refreshUpdateReminderLayout;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateTopicHeaderLayout;
- (id)fixedTopView;
- (double)fixedTopViewHeight;
- (double)fixedTopViewVerticalSpacing;
- (BOOL)shouldShowUpdateReminder;
- (BOOL)shouldShowEmptyStateReminder;
- (BOOL)shouldShowLoadMoreFooter;
- (void)viewDidLayoutSubviews;
- (void)updateSectionWidthInSectionDataList;
- (void)layoutEmptyStateReminderIfNeeded;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onUnfoldButtonClicked;
- (id)parseMessagesData:(id)arg1;
- (BOOL)isPicTextOutboxMessage:(id)arg1;
- (void)maybeRequestSwitchToPicTabWithMessages:(id)arg1;
- (void)loadOutboxMessageCache;
- (id)outboxMessageList;
- (BOOL)shouldOverrideExistSectionData:(id)arg1;
- (void)onFetchOutboxMessagesComplete:(id)arg1;
- (void)onLongPressItemViewModel:(id)arg1;
- (void)onLongPressPicItem:(id)arg1 inGroup:(id)arg2 fromView:(id)arg3;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerDidShowFailed;
- (void)presentMenuWithContext:(id)arg1;
- (void)longPressEditItem;
- (void)handleLongPressEditWithItemMsg:(id)arg1 sectionData:(id)arg2 reportViewModel:(id)arg3 shouldReport:(BOOL)arg4;
- (void)longPressDeleteItem;
- (void)longPressMoreItem;
- (void)actionSheetViewLoaded:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removePicItem:(id)arg1 fromGroup:(id)arg2;
- (void)onDeletePicViewModel:(id)arg1 inGroup:(id)arg2 success:(BOOL)arg3;
- (void)confirmDeleteViewModel:(id)arg1;
- (void)onDeleteViewModel:(id)arg1 success:(BOOL)arg2;
- (void)onDeleteBizArticle:(id)arg1;
- (void)resumeEditingViewModel:(id)arg1;
- (void)postDeleteBizArticleNotificationWithAppmsgId:(unsigned int)arg1 index:(unsigned int)arg2;
- (int)proxyType;
- (id)msgTabDelegate;
- (void)setMsgTabDelegate:(id)arg1;
- (id)outboxProvider;
- (void)setOutboxProvider:(id)arg1;
- (void)setTopicView:(id)arg1;
- (id)topicViewModel;
- (void)setTopicViewModel:(id)arg1;
- (id)updateReminderView;
- (void)setUpdateReminderView:(id)arg1;
- (BOOL)fetchingOutboxAndMsg;
- (void)setFetchingOutboxAndMsg:(BOOL)arg1;
- (BOOL)hasRequestedSwitchToPicTab;
- (void)setHasRequestedSwitchToPicTab:(BOOL)arg1;
- (id)menuContext;
- (void)setMenuContext:(id)arg1;
- (id)deletingViewModel;
- (void)setDeletingViewModel:(id)arg1;
- (id)outboxMessages;
- (void)setOutboxMessages:(id)arg1;
- (BOOL)showingEmptyStateReminder;
- (void)setShowingEmptyStateReminder:(BOOL)arg1;
- (void).cxx_destruct;
@end
