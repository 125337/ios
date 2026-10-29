@interface VoIPPIPService : MMUserService <IVOIPExt, VoipUIManagerExt, IVOIPModeSwitchExt, MMServiceProtocol, AVPictureInPictureControllerDelegate>
{
    float[16] _windowVertexData; // +0x8
    float[16] _smallWindowVertexData; // +0x48
    BOOL _isWorking; // +0x88
    BOOL _isDisplaying; // +0x89
    BOOL _isAutoDismissed; // +0x8a
    BOOL _isTalking; // +0x8b
    BOOL _isOpened; // +0x8c
    BOOL _isCaller; // +0x8d
    BOOL _isAudio; // +0x8e
    float _smallWindowVertexByteLeft; // +0x90
    float _smallWindowVertexByteRight; // +0x94
    float _smallWindowVertexByteTop; // +0x98
    float _smallWindowVertexByteBottom; // +0x9c
    long long _contentSourceMode; // +0xa0
    NSObject<OS_dispatch_queue> * _queue; // +0xa8
    VoIPCanvas * _canvas; // +0xb0
    AVPictureInPictureVideoCallViewController * _viewController; // +0xb8
    AVPictureInPictureController * _controller; // +0xc0
    VoIPPIPView * _view; // +0xc8
    id <MTLDevice> _device; // +0xd0
    id <MTLDepthStencilState> _depthStencilState; // +0xd8
    id <MTLRenderPipelineState> _windowRenderPipelineState; // +0xe0
    id <MTLBuffer> _windowVertexBuffer; // +0xe8
    id <MTLRenderPipelineState> _smallWindowRenderPipelineState; // +0xf0
    id <MTLBuffer> _smallWindowVertexBuffer; // +0xf8
    CGSize _contentSize; // +0x100
}
+ (CGSize)defaultContentSize;
+ (id)renderPipelineStateWithFragmentFunction:(id)arg1 device:(id)arg2 library:(id)arg3;
- (BOOL)isLocalAvatarHidden;
- (BOOL)isRemoteAvatarHidden;
- (void)resetIfShouldControllerStopPIP:(BOOL)arg1;
- (void)reset;
- (void)close;
- (void)refreshContents;
- (void)setupIfShouldControllerStopPIP:(BOOL)arg1;
- (void)setup;
- (void)open;
- (BOOL)reloadWindowVertexBufferWithWidth:(double)arg1 height:(double)arg2 isMirror:(BOOL)arg3;
- (BOOL)customizeWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 isMirror:(BOOL)arg6;
- (BOOL)customizeWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3;
- (BOOL)_reloadSmallWindowVertexBufferWithWidth:(double)arg1 height:(double)arg2 isMirror:(BOOL)arg3 contentSize:(CGSize)arg4 fixedSmallWindowSize:(CGSize)arg5;
- (BOOL)reloadSmallWindowVertexBufferWithWidth:(double)arg1 height:(double)arg2 isMirror:(BOOL)arg3;
- (BOOL)customizeSmallWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 isMirror:(BOOL)arg6;
- (BOOL)customizeSmallWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(__CVBuffer *)arg2 UVMetalTexutre:(__CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 contentSize:(CGSize)arg6 fixedSmallWindowSize:(CGSize)arg7 isMirror:(BOOL)arg8;
- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clear;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)OnBeginTalk:(id)arg1;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtRemoteCaptureResume;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteVideoMode;
- (void)OnBothVideoMode;
- (void)OnBothEarMode;
- (void)OnVideoModeChangeToVoiceMode;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 startInApp:(BOOL)arg3 isEarMode:(BOOL)arg4 isAudioMode:(BOOL)arg5 from:(unsigned long long)arg6;
- (void)UIManagerDidClose;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerDidExtendWindow;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceDidReceiveAudioUnitCallbackFirstEachStartup;
- (void)ensureControllerSetupForScreenProject;
- (CGSize)screenProjectPreferredContentSizeWithPixelWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)feedScreenProjectPixelBuffer:(__CVBuffer *)arg1;
- (void)prepareViewForScreenProjectPIP;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (long long)contentSourceMode;
- (void)setContentSourceMode:(long long)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (BOOL)isAutoDismissed;
- (void)setIsAutoDismissed:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (BOOL)isOpened;
- (void)setIsOpened:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)isAudio;
- (void)setIsAudio:(BOOL)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)depthStencilState;
- (void)setDepthStencilState:(id)arg1;
- (id)windowRenderPipelineState;
- (void)setWindowRenderPipelineState:(id)arg1;
- (id)windowVertexBuffer;
- (void)setWindowVertexBuffer:(id)arg1;
- (id)smallWindowRenderPipelineState;
- (void)setSmallWindowRenderPipelineState:(id)arg1;
- (id)smallWindowVertexBuffer;
- (void)setSmallWindowVertexBuffer:(id)arg1;
- (float)smallWindowVertexByteLeft;
- (void)setSmallWindowVertexByteLeft:(float)arg1;
- (float)smallWindowVertexByteRight;
- (void)setSmallWindowVertexByteRight:(float)arg1;
- (float)smallWindowVertexByteTop;
- (void)setSmallWindowVertexByteTop:(float)arg1;
- (float)smallWindowVertexByteBottom;
- (void)setSmallWindowVertexByteBottom:(float)arg1;
- (void).cxx_destruct;
@end
