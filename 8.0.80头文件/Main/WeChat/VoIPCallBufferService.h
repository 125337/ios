@interface VoIPCallBufferService : MMUserService <MMServiceProtocol, MMConfSDKAudioBypassDelegate>
{
    BOOL _active; // +0x8
    VoIPCallAudioRingBuffer * _localAudioRing; // +0x10
    VoIPCallAudioRingBuffer * _remoteAudioRing; // +0x18
    VoIPCallUIStateRingBuffer * _uiStateRing; // +0x20
    VoIPCallSDKSnapshotSource * _sdkSnapshotSource; // +0x28
    NSObject<OS_dispatch_queue> * _bufferQueue; // +0x30
    VoIPCallRecordingUIState * _lastUIFromCaller; // +0x38
}
- (id)init;
- (void)startWithOutputDurationNs:(unsigned long long)arg1;
- (void)stopBuffers;
- (BOOL)isActive;
- (void)appendAudioPacket:(id)arg1 ptsNs:(unsigned long long)arg2 sampleRate:(unsigned int)arg3 channels:(unsigned int)arg4 isLocal:(BOOL)arg5;
- (void)recordUIStateWithLocalIsFront:(BOOL)arg1 localIsBigWindow:(BOOL)arg2 subWindowFrame:(CGRect)arg3 isSplit:(BOOL)arg4 splitAxis:(unsigned long long)arg5 localSplitSlot:(unsigned long long)arg6 localIsTopInSplit:(BOOL)arg7 mainWindowRotateDegree:(double)arg8 subWindowRotateDegree:(double)arg9 mainWindowUseAspectFit:(BOOL)arg10 localCameraClosed:(BOOL)arg11 remoteCameraClosed:(BOOL)arg12 source:(long long)arg13;
- (void)appendUIState:(id)arg1;
- (BOOL)shouldThrottleUIStateAtPtsNs:(unsigned long long)arg1;
- (id)freezeSnapshot;
- (void)onLocalAudioData:(id)arg1 format:(id)arg2;
- (void)onRemoteAudioData:(id)arg1 format:(id)arg2;
- (id)p_uiStateSourceString:(long long)arg1;
- (BOOL)p_shouldRejectSuspiciousSubWindowFrame:(CGRect)arg1 isSplit:(BOOL)arg2 source:(long long)arg3;
- (void)p_recordUIStateOnBufferQueueWithPtsNs:(unsigned long long)arg1 localIsFront:(BOOL)arg2 localIsBigWindow:(BOOL)arg3 subWindowFrame:(CGRect)arg4 isSplit:(BOOL)arg5 splitAxis:(unsigned long long)arg6 localSplitSlot:(unsigned long long)arg7 localIsTopInSplit:(BOOL)arg8 mainWindowRotateDegree:(double)arg9 subWindowRotateDegree:(double)arg10 mainWindowUseAspectFit:(BOOL)arg11 localCameraClosed:(BOOL)arg12 remoteCameraClosed:(BOOL)arg13 source:(long long)arg14;
- (void)p_appendStateOnBufferQueueWithPtsNs:(unsigned long long)arg1 source:(long long)arg2;
- (void)p_syncOnBufferQueue:(id /* block */)arg1;
- (id)localAudioRing;
- (void)setLocalAudioRing:(id)arg1;
- (id)remoteAudioRing;
- (void)setRemoteAudioRing:(id)arg1;
- (id)uiStateRing;
- (void)setUiStateRing:(id)arg1;
- (id)sdkSnapshotSource;
- (void)setSdkSnapshotSource:(id)arg1;
- (id)bufferQueue;
- (void)setBufferQueue:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)lastUIFromCaller;
- (void)setLastUIFromCaller:(id)arg1;
- (void).cxx_destruct;
@end
