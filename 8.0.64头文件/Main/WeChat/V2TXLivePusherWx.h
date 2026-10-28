@interface V2TXLivePusherWx : V2TXLivePusher <V2TXLivePusherObserverWx>
{
    unsigned long long _mode; // +0x8
    long long _networkQuality; // +0x10
    NSMutableSet * _mainStreamUserList; // +0x18
    NSMutableSet * _subStreamUserList; // +0x20
    id <V2TXLivePusherObserverWx> _observer; // +0x28
    NSObject<OS_dispatch_semaphore> * _lock; // +0x30
}
+ (void)log:(id)arg1 isOnline:(BOOL)arg2;
- (id)initWithLiveMode:(unsigned long long)arg1;
- (void)setObserver:(id)arg1;
- (long long)startPush:(id)arg1;
- (void)onError:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (void)onWarning:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (void)onCaptureFirstAudioFrame;
- (void)onCaptureFirstVideoFrame;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)onPushStatusUpdate:(long long)arg1 message:(id)arg2 extraInfo:(id)arg3;
- (void)onStatisticsUpdate:(id)arg1;
- (void)onSnapshotComplete:(id)arg1;
- (void)onProcessVideoFrame:(id)arg1 dstFrame:(id)arg2;
- (void)onGLContextDestroyed;
- (void)onSetMixTranscodingConfig:(long long)arg1 message:(id)arg2;
- (void)onPushEvent:(long long)arg1 param:(id)arg2;
- (void)onPushNetStatus:(id)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onRemoteUserEnter:(id)arg1;
- (void)onRemoteUserExit:(id)arg1 reason:(long long)arg2;
- (void)onUserVideoAvailable:(id)arg1 streamType:(long long)arg2 available:(BOOL)arg3;
- (void)onUserAudioAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onNetworkQuality:(long long)arg1;
- (unsigned long long)getURLModeWithURL:(id)arg1;
- (BOOL)isRTC;
- (id)getJSONStrForUserList:(id)arg1;
- (id)getPlayUrl:(id)arg1 streamType:(long long)arg2;
- (id)streamTypeConvert:(long long)arg1;
- (void)notifyFullUserList;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void).cxx_destruct;
@end
