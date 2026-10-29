@interface VQMManager : NSObject <VQMObserverBase, MMServiceProtocol, VoipUIManagerExt, IVOIPExt, IVOIPUILogicMgrExt, VoIPAudioServiceExtension, VoIPPIPServiceExt, _TtP6WeChat13ICarPlayUIExt_, VoIPilinkMgrVideoStreamObserver, MonoServiceMsgMgrExtension>
{
    double _lastBackgroundRemainingTime; // +0x8
    double _lastCheckBackgroundRemainingTimestamp; // +0x10
}
+ (void)launch;
+ (id)sharedInstance;
- (unsigned long long)identifier;
- (void)didPoll;
- (void)didUpdateProfile:(int)arg1 bytesFromProfile:(id)arg2 bytesToProfile:(id)arg3;
- (void)didUpdateProfileWxconf:(id)arg1 toProfile:(id)arg2;
- (void)didReport:(id)arg1;
- (void)updateMatrixInfoBits:(int)arg1;
- (void)clearFlags;
- (void)checkBackgroundRemainingTime;
- (void)storeRoomInfoWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 monoMsg:(id)arg3 startInApp:(BOOL)arg4 isEarMode:(BOOL)arg5 isAudioMode:(BOOL)arg6 from:(unsigned long long)arg7 isIlink:(BOOL)arg8;
- (void)onSetIfIsIlink:(BOOL)arg1;
- (void)UIManagerWillQuitWindow;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerDidSpeakerSetupedFirstAfterBeginTalk;
- (void)UIManagerDidReceiverCardExtendAtFirst;
- (void)UIManagerDidUIShowAtApplcationStateActiveIfIsCaller:(BOOL)arg1;
- (void)UIManagerDidVideoSessionStartCompleteAtFirst;
- (void)UIManagerDidVideoSessionRecvFrameAtFirst;
- (void)onVoipAccept:(id)arg1;
- (void)onVoipMaximized;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)voIPAudioServiceWillClose;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceWillStartAudioUnit;
- (void)voIPAudioServiceDidStartAudioUnit;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)arg1;
- (void)voIPAudioServiceDidReceiveAudioUnitRecordingCallbackFirst:(id)arg1;
- (void)VoIPAudioServiceWillPrewarmAudioUnit;
- (void)VoIPAudioServiceDidPrewarmAudioUnit;
- (BOOL)shouldIgnoreDefaultRender;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(__CVBuffer *)arg1;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)monoServiceMsgMgrWillHandleMsg:(id)arg1 withSetting:(id)arg2 shouldShow:(BOOL)arg3;
- (double)lastBackgroundRemainingTime;
- (void)setLastBackgroundRemainingTime:(double)arg1;
- (double)lastCheckBackgroundRemainingTimestamp;
- (void)setLastCheckBackgroundRemainingTimestamp:(double)arg1;
@end

