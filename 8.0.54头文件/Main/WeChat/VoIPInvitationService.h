@interface VoIPInvitationService : MMUserService <VoIPInvitationViewControllerDelegate, ISysCallCheckExt, MonoServiceMsgLogicDelegate, VoIPAudioServiceExtension, MultiTalkMgrExt, MMServiceProtocol>
{
    VoIPInvitationViewController * _viewController; // +0x8
    VoIPInvitationInfo * _acceptedInvitationInfo; // +0x10
    MMTipsViewController * _tipsViewController; // +0x18
    id /* block */ _interrputBlock; // +0x20
}
+ (id)defaultService;
+ (BOOL)isSupportingMultiTalk;
- (void)reset;
- (BOOL)handleInviteMonoMsg:(id)arg1 withTalkingRoomID:(unsigned long long)arg2 talkingRoomKey:(unsigned long long)arg3;
- (BOOL)handleCancelMonoMsg:(id)arg1;
- (void)scrollIn;
- (id)currentViewInfo;
- (void)rejectInvitationWithInfo:(id)arg1;
- (void)handleAccpetedInvitationInfoIfNeed;
- (void)handleAccpetedInvitationInfoIfNeedWithneedCloseCamera:(BOOL)arg1;
- (void)acceptInvitationWithInfo:(id)arg1;
- (void)acceptInvitationWithInfo:(id)arg1 needCloseCamera:(BOOL)arg2;
- (void)rejectIfNeedAnimation:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)voIPInvitationViewController:(id)arg1 willScollInWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollInWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 willScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didScollOutWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didClickWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didAcceptWithInfo:(id)arg2;
- (void)voIPInvitationViewController:(id)arg1 didHangupWithInfo:(id)arg2 manually:(BOOL)arg3;
- (id)currentAppTopViewController;
- (void)voIPInvitationViewController:(id)arg1 didClickQuickReplyWithInfo:(id)arg2;
- (void)voIPInvitationViewControllerWillClear:(id)arg1;
- (void)voIPInvitationViewControllerDidClear:(id)arg1;
- (void)UIManagerDidCloseCompletely;
- (void)multiTalkMgrDidClose;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)acceptedInvitationInfo;
- (void)setAcceptedInvitationInfo:(id)arg1;
- (id)tipsViewController;
- (void)setTipsViewController:(id)arg1;
- (id /* block */)interrputBlock;
- (void)setInterrputBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

