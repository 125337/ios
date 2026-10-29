@interface TXLivePictureInPictureController : NSObject <AVPictureInPictureControllerDelegate, AVPictureInPictureSampleBufferPlaybackDelegate, TXLivePictureInPictureRendererObserver>
{
    BOOL _enable; // +0x8
    BOOL _playbackPaused; // +0x9
    BOOL _playbackStopped; // +0xa
    BOOL _isSupported; // +0xb
    BOOL _useBlackFrame; // +0xc
    BOOL _videoMuted; // +0xd
    BOOL _isPictureInPictureEnabled; // +0xe
    int _fillMode; // +0x10
    int _rotation; // +0x14
    id <TXLivePictureInPictureControllerDelegate> _delegate; // +0x18
    AVPictureInPictureController * _pipController; // +0x20
    AVSampleBufferDisplayLayer * _displayLayer; // +0x28
    TXPictureInPictureView * _displayView; // +0x30
    UIView * _superView; // +0x38
    TXPictureInPictureBlackFrame * _blackFrame; // +0x40
    unsigned long long _frameWidth; // +0x48
    unsigned long long _frameHeight; // +0x50
    NSObject<OS_dispatch_queue> * _queue; // +0x58
    NSObject<OS_dispatch_source> * _timer; // +0x60
    TXSampleBufferWrapper * _videoFrame; // +0x68
    TXLivePixelBufferTransform * _pbTransform; // +0x70
    NSString * _url; // +0x78
}
+ (BOOL)isPictureInPictureSupported;
- (id)init;
- (id)pbTransform;
- (void)dealloc;
- (void)setEnable:(BOOL)arg1;
- (void)setRenderView:(id)arg1;
- (void)refreshPlaybackState;
- (void)muteVideo:(BOOL)arg1;
- (void)startPlay:(id)arg1;
- (void)enableIfUrlSupported:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)setupDisplayView;
- (void)resetDisplayView;
- (void)setupPipController;
- (void)resetPipController;
- (void)startBlackFrameTimer;
- (void)stopBlackFrameTimer;
- (void)onRenderVideoFrame:(__CVBuffer *)arg1;
- (__CVBuffer *)cropFrameIfNeeded:(__CVBuffer *)arg1;
- (CGSize)calculateOutSize:(CGSize)arg1 viewSize:(CGSize)arg2;
- (void)onRenderBlackFrame;
- (CGSize)calculateOutSizeWithFrameSize:(CGSize)arg1 viewSize:(CGSize)arg2 fillMode:(int)arg3 rotation:(int)arg4;
- (void)enqueueSampleBufferToLayer:(id)arg1;
- (void)embedViewIn:(id)arg1;
- (void)onPictureInPictureRender:(__CVBuffer *)arg1;
- (void)onVideoResolutionChangedWithWidth:(long long)arg1 height:(long long)arg2;
- (void)onAppBecomeActive:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (struct)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(struct)arg2;
- (void)pictureInPictureController:(id)arg1 setPlaying:(BOOL)arg2;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(struct)arg2 completionHandler:(id /* block */)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)fillMode;
- (void)setFillMode:(int)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (BOOL)enable;
- (BOOL)playbackPaused;
- (void)setPlaybackPaused:(BOOL)arg1;
- (BOOL)playbackStopped;
- (void)setPlaybackStopped:(BOOL)arg1;
- (id)pipController;
- (void)setPipController:(id)arg1;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (BOOL)isSupported;
- (void)setIsSupported:(BOOL)arg1;
- (id)superView;
- (void)setSuperView:(id)arg1;
- (BOOL)useBlackFrame;
- (void)setUseBlackFrame:(BOOL)arg1;
- (id)blackFrame;
- (void)setBlackFrame:(id)arg1;
- (unsigned long long)frameWidth;
- (void)setFrameWidth:(unsigned long long)arg1;
- (unsigned long long)frameHeight;
- (void)setFrameHeight:(unsigned long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)videoMuted;
- (void)setVideoMuted:(BOOL)arg1;
- (id)videoFrame;
- (void)setVideoFrame:(id)arg1;
- (void)setPbTransform:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)isPictureInPictureEnabled;
- (void)setIsPictureInPictureEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
