@interface WACampusVoipMsgMgr : MMUserService <WCAudioModuleDelegate, MonoServiceLogicExt, MMImageLoaderObserver, MMServiceProtocol, IMsgExt>
{
    WACampusVoipMsg * _currentMsg; // +0x8
    WXLocalNotificationInfo * _currentLocalNotificationInfo; // +0x10
    WACampusVoipNotiView * _notiView; // +0x18
    RingBackSoundCoordinator * _ringCoordinator; // +0x20
    VibrationRepeatObject * _vibrationPlayer; // +0x28
}
- (void)onServiceInit;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNewVoipMsg:(id)arg1;
- (void)onNewVoipIn:(id)arg1 isFromApns:(BOOL)arg2;
- (void)onVoipCancel:(id)arg1;
- (void)onVoipBusy:(id)arg1;
- (void)onFinishVoipNoti;
- (void)onTimeout:(id)arg1;
- (void)showIntentTypeNotification:(id)arg1 withMsg:(id)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)showInAppNotification:(id)arg1;
- (void)dismissInAppNotification;
- (void)showNewCallLocalNotification:(id)arg1;
- (void)cancelLocalNotification;
- (void)openWeApp:(id)arg1 path:(id)arg2 debugMode:(unsigned long long)arg3;
- (void)playRing;
- (void)stopPlayRing;
- (void)playEndingSound;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onMonoServiceVoipWillStart;
- (void)onAppEnterForeground;
- (id)currentMsg;
- (void)setCurrentMsg:(id)arg1;
- (id)currentLocalNotificationInfo;
- (void)setCurrentLocalNotificationInfo:(id)arg1;
- (id)notiView;
- (void)setNotiView:(id)arg1;
- (id)ringCoordinator;
- (void)setRingCoordinator:(id)arg1;
- (id)vibrationPlayer;
- (void)setVibrationPlayer:(id)arg1;
- (void).cxx_destruct;
@end
