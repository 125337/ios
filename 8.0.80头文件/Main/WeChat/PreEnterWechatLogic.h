@interface PreEnterWechatLogic : NSObject <MMKernelExt, PreEnterStepDelegate, IUiUtilExt, INewSyncExt, IMsgExt>
{
    BOOL m_bCalledPreEnterWechatDone; // +0x8
    BOOL m_bRunning; // +0x9
    NSMutableArray * m_nsArrSteps; // +0x10
    PreEnterShowGlobalAlertStep * m_GlobalAlert; // +0x18
    LaunchImage * m_launchImage; // +0x20
    BOOL m_hasShownPrivacy; // +0x28
    BOOL m_hasShownWCOpenService; // +0x29
    BOOL m_hasShowLimitedModeEntry; // +0x2a
    NSMutableSet * m_hasShownPolicyListSet; // +0x30
    BOOL _hasCallLocalMsgText; // +0x38
    NSMutableSet * _hasShownStepIdSet; // +0x40
}
+ (void)LocalMsgTest;
- (void)goNext;
- (id)init;
- (void)startSteps:(id)arg1 FromReg:(BOOL)arg2;
- (void)addStepIfNotExist:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addStep:(id)arg1 withType:(id)arg2;
- (void)checkStartSteps;
- (void)dealloc;
- (id)hasShownStepIdSet;
- (BOOL)checkHasShownWithType:(id)arg1 stepId:(id)arg2;
- (void)setHasShownWithType:(id)arg1 stepId:(id)arg2;
- (void)onPreEnterStepDone:(id)arg1;
- (void)handleSuspend;
- (void)onTimeChange;
- (void)checkTimeChange;
- (void)enterForeground;
- (void)firstBecomeActive;
- (void)callPreEnterWechatDone;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)fixContactPlugin;
- (void)restoreContactDraft;
- (void)clearLaunchImages;
- (void)preLoadContacts;
- (void)checkUpdateNewVersionTip:(BOOL)arg1;
- (void)checkUpdateTabbarBadgeNum;
- (void)delayLoadAndCheck;
- (void)onGetUpdateInfoOk;
- (void)onMainControllStart;
- (void)onNewSyncFinish;
- (BOOL)hasCallLocalMsgText;
- (void)setHasCallLocalMsgText:(BOOL)arg1;
- (void)setHasShownStepIdSet:(id)arg1;
- (void).cxx_destruct;
@end
