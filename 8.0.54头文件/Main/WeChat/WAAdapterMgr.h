@interface WAAdapterMgr : MMUserService <MMKernelExt, IMsgExt, MMConfigMgrExt, MMResourceMgrExt, MultiTalkMgrExt, IVOIPUILogicMgrExt, IExptServiceExt, INetworkStatusMgrExt, ServiceAuthExt, MonoServiceLogicExt, MainTabBarControllerExt, MonoServiceMsgLogicDelegate, MMServiceProtocol>
{
    BOOL _isCallInterruption; // +0x8
}
+ (void)setup;
+ (void)registerLazyExtension;
+ (void)internalRegisterLazyExtension;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)clearDataOnUserLogout;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onMMDynamicConfigUpdated;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onBeginMultiTalk;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)onWAAudioSessionInterruptionBegan;
- (void)onWAAudioSessionInterruptionEnd;
- (void)onMMLiveWillStart;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)didMonoServiceRejectMsg;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)mainTabBarController:(id)arg1 transitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (BOOL)isCallInterruption;
- (void)setIsCallInterruption:(BOOL)arg1;
@end

