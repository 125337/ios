@interface VoIPMPScreenProjectFrameSender : NSObject <MMViewCaptureDelegate>
{
    BOOL _stopped; // +0x8
    int _subVideoType; // +0xc
    int _lastLoggedScreenPlaneWidth; // +0x10
    int _lastLoggedScreenPlaneHeight; // +0x14
    int _lastLoggedScreenPlaneFormat; // +0x18
    int _lastLoggedScreenPlaneSubVideoType; // +0x1c
    id <VoIPMPScreenProjectFrameSenderDelegate> _delegate; // +0x20
    id /* block */ _pipFrameCallback; // +0x28
    MMViewCapture * _viewCapture; // +0x30
    long long _lastOrientationFromViewCapture; // +0x38
    NSString * _lastLoggedScreenPlaneSource; // +0x40
    UIImage * _lastFrameSnapshot; // +0x48
    CGImage * _cachedDoodleImage; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)updateSubVideoType:(int)arg1;
- (void)updateScreenProjectTargetFramesPerSecond:(long long)arg1;
- (BOOL)shouldApplyRotationForCaptureWidth:(int)arg1 height:(int)arg2;
- (void)logScreenPlaneIfNeeded:(ImagePlane *)arg1 source:(id)arg2 isIlinkMode:(BOOL)arg3;
- (BOOL)enableScreenModeIfNeededWithReason:(id)arg1;
- (int)sendScreenPlane:(ImagePlane *)arg1 source:(id)arg2;
- (void)sendFlutterCaptureData:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)cacheLastFrameSnapshotFromBytes:(char *)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)lastFrameSnapshotImage;
- (void)startNativeScreenCapture;
- (void)_startNativeScreenCaptureWithCaptureView:(id)arg1;
- (void)stopNativeScreenCapture;
- (void)setDoodleOverlayWithBytes:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)clearDoodleOverlay;
- (CGImage *)copyCurrentDoodleImage;
- (void)viewCapture:(id)arg1 didCaptureImageContext:(CGContext *)arg2 orientation:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)pipFrameCallback;
- (void)setPipFrameCallback:(id /* block */)arg1;
- (id)viewCapture;
- (void)setViewCapture:(id)arg1;
- (long long)lastOrientationFromViewCapture;
- (void)setLastOrientationFromViewCapture:(long long)arg1;
- (BOOL)stopped;
- (void)setStopped:(BOOL)arg1;
- (int)subVideoType;
- (void)setSubVideoType:(int)arg1;
- (int)lastLoggedScreenPlaneWidth;
- (void)setLastLoggedScreenPlaneWidth:(int)arg1;
- (int)lastLoggedScreenPlaneHeight;
- (void)setLastLoggedScreenPlaneHeight:(int)arg1;
- (int)lastLoggedScreenPlaneFormat;
- (void)setLastLoggedScreenPlaneFormat:(int)arg1;
- (int)lastLoggedScreenPlaneSubVideoType;
- (void)setLastLoggedScreenPlaneSubVideoType:(int)arg1;
- (id)lastLoggedScreenPlaneSource;
- (void)setLastLoggedScreenPlaneSource:(id)arg1;
- (id)lastFrameSnapshot;
- (void)setLastFrameSnapshot:(id)arg1;
- (CGImage *)cachedDoodleImage;
- (void)setCachedDoodleImage:(CGImage *)arg1;
- (void).cxx_destruct;
@end
