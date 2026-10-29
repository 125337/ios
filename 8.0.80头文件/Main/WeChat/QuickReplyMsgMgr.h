@interface QuickReplyMsgMgr : MMUserService <QuickReplyMsgViewControllerDelegate, IMMNewSessionMgrExt, IMsgExt, SettingNotificationViewControllerDelegate, MessagePageSheetAdapterDelegate, MMUIViewControllerExt, BaseMsgViewControllerExt, IExptServiceExt, IUpdateProfileMgrExt, INewSyncExt, MMServiceProtocol>
{
    BOOL _recordingUnreadMsg; // +0x8
    BOOL _isShowingNotifyView; // +0x9
    BOOL _isPageSheetHasAppear; // +0xa
    QuickReplyMsgViewController * _replyMsgViewController; // +0x10
    NSString * _replyingSession; // +0x18
    long long _notifyViewStyle; // +0x20
    NSMutableArray * _missedUnreadMsgs; // +0x28
    NSMutableArray * _pendingNotifyItems; // +0x30
    QuickReplyMsgReporter * _reporter; // +0x38
    MMPageSheetAdapter * _pageSheetAdapter; // +0x40
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startRecordUnreadMsg;
- (void)startRecordUnreadMsgWithBizType:(long long)arg1 bizInfo:(id)arg2 style:(long long)arg3;
- (void)stopRecordUnreadMsg;
- (void)showQuickReplyMsg:(id)arg1 message:(id)arg2 timeout:(double)arg3;
- (void)showQuickReplyItem:(id)arg1;
- (void)showCustomQuickReplyItem:(id)arg1 senderName:(id)arg2 timeout:(double)arg3;
- (BOOL)canShowBannerAtCurrentPage:(id)arg1;
- (void)showQuickReplyItem:(id)arg1 timeout:(double)arg2;
- (void)showPageSheetSession:(id)arg1;
- (void)showPageSheetWithLogic:(id)arg1 withPageSheetDelegate:(id)arg2;
- (void)showPageSheetWithLogic:(id)arg1 withPageSheetDelegate:(id)arg2 fromViewController:(id)arg3;
- (void)showPageSheetWithLogic:(id)arg1 fromViewController:(id)arg2;
- (void)showPageSheetSession:(id)arg1 fromViewController:(id)arg2;
- (void)showPageSheetSession:(id)arg1 fromViewController:(id)arg2 withPageSheetDelegate:(id)arg3;
- (void)handleShowPageSheetSession:(id)arg1;
- (void)disableMessageNotify:(BOOL)arg1;
- (void)disableMessageNotifyInToday;
- (void)disableMessageNotifyOneHouer;
- (void)clearTemporaryDisableSetting;
- (BOOL)isNotifyTemporaryClosed;
- (BOOL)isNewBannerSettingEnable;
- (BOOL)isBannerContentSettingEnable;
- (long long)quickReplyDetailSetting;
- (BOOL)isNotifySettingClose;
- (void)reportSystemSetting;
- (void)onQuickReplyMsgDismissed:(BOOL)arg1;
- (void)onQuickReplyOpenNotifySetting;
- (void)onSettingFinderUnreadMsgChange:(BOOL)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (BOOL)recordUnreadMsgAtReplying:(id)arg1;
- (void)handleMissedUnreadMsg;
- (void)handleMissedUnreadMsgWithDetailSetting:(long long)arg1;
- (void)requestCanShowMsgDetail:(id /* block */)arg1;
- (void)removePendingMsgsWithUsername:(id)arg1;
- (BOOL)canShowPushAtCurrentPage:(id)arg1;
- (BOOL)canShowPushAtViewController:(id)arg1 sessionUserName:(id)arg2;
- (BOOL)canShowPushForContact:(id)arg1 msgWrap:(id)arg2;
- (BOOL)isReplying;
- (long long)currNotifyViewStyle;
- (id)getCurrentTopViewController;
- (BOOL)isOutdateMsg:(id)arg1;
- (void)pageSheetPresentWillBegin:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)onMsgPageSheetMarkUnread:(id)arg1;
- (void)onMsgPageSheetEnterFullscreen:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onExptItemListChange;
- (void)onProfileChange;
- (id)replyMsgViewController;
- (void)setReplyMsgViewController:(id)arg1;
- (id)replyingSession;
- (void)setReplyingSession:(id)arg1;
- (BOOL)recordingUnreadMsg;
- (void)setRecordingUnreadMsg:(BOOL)arg1;
- (BOOL)isShowingNotifyView;
- (void)setIsShowingNotifyView:(BOOL)arg1;
- (long long)notifyViewStyle;
- (void)setNotifyViewStyle:(long long)arg1;
- (id)missedUnreadMsgs;
- (void)setMissedUnreadMsgs:(id)arg1;
- (id)pendingNotifyItems;
- (void)setPendingNotifyItems:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)isPageSheetHasAppear;
- (void)setIsPageSheetHasAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
