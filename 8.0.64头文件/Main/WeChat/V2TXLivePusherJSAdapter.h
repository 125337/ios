@interface V2TXLivePusherJSAdapter : NSObject <V2TXLivePusherObserverWx>
{
    unsigned long long _mode; // +0x8
    V2TXLivePusherJSConfig * _appliedConfig; // +0x10
    UIView * _preview; // +0x18
    BOOL _enableTorch; // +0x20
    BOOL _needCompress; // +0x21
    BOOL _isBGMPlaying; // +0x22
    BOOL _isBGMPlayingWhenPausePusher; // +0x23
    BOOL _isPreviewing; // +0x24
    id <V2TXLivePusherJSAdapterDelegate> _delegate; // +0x28
    V2TXLivePusherWx * _pusher; // +0x30
    long long _bgmVolume; // +0x38
    long long _micVolume; // +0x40
}
- (id)initWithPreviewView:(id)arg1 delegate:(id)arg2;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (void)updateLivePusherWithConfigs:(id)arg1 needNotify:(BOOL)arg2;
- (void)updateLivePusherWithConfigs:(id)arg1 force:(BOOL)arg2 needNotify:(BOOL)arg3;
- (BOOL)operateLivePusherWithType:(id)arg1 params:(id)arg2;
- (id)config;
- (BOOL)isPushing;
- (BOOL)isPreviewing;
- (BOOL)isMicEnabled;
- (BOOL)isAudioMuted;
- (double)cameraZoomMaxRatio;
- (void)enablePureAudioPush:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setFilterImage:(id)arg1;
- (void)setRenderRotation:(long long)arg1;
- (BOOL)userLandscapeResolution:(long long)arg1 isVertical:(BOOL)arg2;
- (void)setOrientation:(id)arg1;
- (void)onlineLog:(id)arg1;
- (void)restartAudioDevice;
- (long long)sendVideoPixelBuffer:(__CVBuffer *)arg1;
- (long long)sendVideoFrameData:(id)arg1 param:(id)arg2;
- (id)parseConfigs:(id)arg1;
- (void)applyConfig:(id)arg1 force:(BOOL)arg2;
- (void)applyConfig:(id)arg1 force:(BOOL)arg2 needNotify:(BOOL)arg3;
- (void)enableCustomVideoCapture:(id)arg1;
- (void)setVideoEncParams:(id)arg1;
- (void)createPusher:(unsigned long long)arg1;
- (void)startPush;
- (void)stopPush;
- (void)updatePreview:(BOOL)arg1;
- (void)startPreview;
- (void)stopPreview;
- (void)updateAudioRecord;
- (void)onCameraStateChanged:(BOOL)arg1;
- (void)notifyAudioMuteStatusChanged:(BOOL)arg1;
- (void)notifyMicStatusChanged:(BOOL)arg1;
- (int)getGopWithPushMode:(long long)arg1;
- (void)adjustPushMode:(id)arg1 width:(long long *)arg2 height:(long long *)arg3 minVideoBitrate:(long long *)arg4 maxVideoBitrate:(long long *)arg5;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)onSnapshotComplete:(id)arg1;
- (void)onPushEvent:(long long)arg1 param:(id)arg2;
- (void)onPushNetStatus:(id)arg1;
- (void)apiOnlineLog:(id)arg1 online:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pusher;
- (void)setPusher:(id)arg1;
- (long long)bgmVolume;
- (void)setBgmVolume:(long long)arg1;
- (long long)micVolume;
- (void)setMicVolume:(long long)arg1;
- (void).cxx_destruct;
@end
