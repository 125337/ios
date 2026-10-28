@interface MMFinderLiveReplayKitManager : NSObject <IRecordPermissionCheckExt>
{
    BOOL _isHeadsetConnected; // +0x8
    BOOL _isRecordPermissionCheckOK; // +0x9
    BOOL _isInRecordPermissionCheckProcess; // +0xa
    BOOL _isOpenRecordLive; // +0xb
    BOOL _isBroadcastRecording; // +0xc
    unsigned long long _scene; // +0x10
    id /* block */ _screenRecordChangeBlock; // +0x18
    id /* block */ _liveReportActionBlock; // +0x20
    id /* block */ _starterReportActionBlock; // +0x28
    id /* block */ _headsetConnectedBlock; // +0x30
    MMFinderScreenRecordGuideView * _screenRecordGuideView; // +0x38
    RPSystemBroadcastPickerView * _broadcastPickerView; // +0x40
    id /* block */ _completeBlock; // +0x48
}
+ (id)shareInstance;
- (void)clearService;
- (void)setUpService;
- (id)init;
- (void)routeChange:(id)arg1;
- (void)stopRecordScreen;
- (void)hideScreenRecordGuideView;
- (void)checkScreenCaptureState:(BOOL)arg1;
- (void)startRecordScreenWithScene:(unsigned long long)arg1 completeBlock:(id /* block */)arg2 starterReportActionBlock:(id /* block */)arg3 liveReportActionBlock:(id /* block */)arg4;
- (BOOL)broadcastRecording;
- (BOOL)checkAbnormalState;
- (BOOL)isAbnormalState;
- (void)handleReplayKitManagerCompleteWithType:(long long)arg1 completeBlock:(id /* block */)arg2;
- (void)showRecordGuideView;
- (void)updateOpenRecordLive:(BOOL)arg1;
- (void)inner_startRecordScreen;
- (id)getBroadCastBundleIdentifier;
- (void)checkPermissionsWithCompleteBlock:(id /* block */)arg1;
- (unsigned long long)systemCapabilityAuthScene;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (id)currentRecordGuideView;
- (void)onBroadcastStarted;
- (void)onBroadcastStop;
- (BOOL)isHeadsetConnected;
- (void)setIsHeadsetConnected:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id /* block */)screenRecordChangeBlock;
- (void)setScreenRecordChangeBlock:(id /* block */)arg1;
- (id /* block */)liveReportActionBlock;
- (void)setLiveReportActionBlock:(id /* block */)arg1;
- (id /* block */)starterReportActionBlock;
- (void)setStarterReportActionBlock:(id /* block */)arg1;
- (id /* block */)headsetConnectedBlock;
- (void)setHeadsetConnectedBlock:(id /* block */)arg1;
- (id)screenRecordGuideView;
- (void)setScreenRecordGuideView:(id)arg1;
- (id)broadcastPickerView;
- (void)setBroadcastPickerView:(id)arg1;
- (BOOL)isRecordPermissionCheckOK;
- (void)setIsRecordPermissionCheckOK:(BOOL)arg1;
- (BOOL)isInRecordPermissionCheckProcess;
- (void)setIsInRecordPermissionCheckProcess:(BOOL)arg1;
- (BOOL)isOpenRecordLive;
- (void)setIsOpenRecordLive:(BOOL)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (BOOL)isBroadcastRecording;
- (void)setIsBroadcastRecording:(BOOL)arg1;
- (void).cxx_destruct;
@end
