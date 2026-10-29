@interface WeClawBotContentLogicController : BypMsgContentLogicController <IWeClawExt, IBotContactMgrExt, IContactMgrExt, ContactSettingViewControllerDelegate, WeClawBotStatusLogicDelegate>
{
    ChatUnavailableTipsView * _unavailableTipsView; // +0xe0
    BOOL _isWeClawOffline; // +0xe8
    BOOL _isWeClawStreaming; // +0xe9
    WeClawBotStatusLogic * _statusLogic; // +0xf0
    WeClawBotManageViewController * _bannerManageViewController; // +0xf8
}
- (void)setM_contact:(id)arg1;
- (void)dealloc;
- (void)Reset;
- (void)ViewWillAppear;
- (void)ViewDidInit;
- (BOOL)isForbiddenSearchBar;
- (void)checkClawBotUnavailable;
- (BOOL)canReplyMsg;
- (void)checkAddFriend;
- (id)getDefaultTitleTailSubViews;
- (id)getSubTitle;
- (void)clawBotStatusLogicDidUpdate:(id)arg1 fromNotify:(BOOL)arg2;
- (void)clawBotStatusLogicDidFail:(id)arg1;
- (void)updateClawBotVersionAlertWithStatusInfo:(id)arg1;
- (void)hideClawBotVersionAlert;
- (void)clearPendingClawBotVersionAlerts;
- (void)OnClickClawBotVersionAlertTipsBar:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (BOOL)isShowHeadImage:(id)arg1;
- (double)selectFlagCenterYForMessage:(id)arg1 viewModel:(id)arg2;
- (BOOL)CanSendVoiceMsg;
- (id)getMsgSendOpEntry;
- (BOOL)CanLongPressHeadImage;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)Register;
- (void)UnRegister;
- (void)onShortcutCommandDidChange:(id)arg1;
- (void)refreshShortcutCommands;
- (void)updateTypingTitle:(id)arg1;
- (void)onWeClawStreamStart:(long long)arg1 username:(id)arg2 msgSvrId:(long long)arg3;
- (void)onWeClawStreamEnd:(long long)arg1 username:(id)arg2 msgSvrId:(long long)arg3;
- (void)tryFetchClawBotFunctionInfo;
- (void)onGetFunctionInfoSuccess:(id)arg1;
- (void)onGetFunctionInfoFail:(int)arg1;
- (void)tryUpdateClawBotContact;
- (void)onModifyContact:(id)arg1;
- (void)delAllMsgWithContact;
- (BOOL)isWeClawOffline;
- (void)setIsWeClawOffline:(BOOL)arg1;
- (id)statusLogic;
- (void)setStatusLogic:(id)arg1;
- (id)bannerManageViewController;
- (void)setBannerManageViewController:(id)arg1;
- (BOOL)isWeClawStreaming;
- (void)setIsWeClawStreaming:(BOOL)arg1;
- (void).cxx_destruct;
@end
