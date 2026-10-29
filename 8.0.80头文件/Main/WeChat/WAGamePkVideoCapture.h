@interface WAGamePkVideoCapture : NSObject <WAGameLiveFrameTapDelegate, MMViewCaptureDelegate>
{
    BOOL _capturing; // +0x8
    unsigned int _frameCount; // +0xc
    id <WAGamePkVideoCaptureDelegate> _delegate; // +0x10
    NSString * _appId; // +0x18
    unsigned long long _mode; // +0x20
    double _lastSendStamp; // +0x28
    WAWebViewPlugin_GameLive * _gameLivePlugin; // +0x30
    MMViewCapture * _viewCapture; // +0x38
}
- (id)init;
- (void)dealloc;
- (BOOL)startWithAppId:(id)arg1;
- (void)stop;
- (BOOL)isCapturing;
- (BOOL)detectIsMBMode:(id)arg1;
- (BOOL)startFrameTapWithGameVC:(id)arg1;
- (void)onGameLiveFrame:(__CVBuffer *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (BOOL)startViewCaptureWithGameVC:(id)arg1;
- (void)viewCapture:(id)arg1 didCaptureSampleBuffer:(opaqueCMSampleBuffer *)arg2 orientation:(long long)arg3;
- (void)processCapturedFrame:(__CVBuffer *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 pixelFormat:(unsigned int)arg4;
- (id)getGameViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)capturing;
- (void)setCapturing:(BOOL)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (unsigned int)frameCount;
- (void)setFrameCount:(unsigned int)arg1;
- (double)lastSendStamp;
- (void)setLastSendStamp:(double)arg1;
- (id)gameLivePlugin;
- (void)setGameLivePlugin:(id)arg1;
- (id)viewCapture;
- (void)setViewCapture:(id)arg1;
- (void).cxx_destruct;
@end
