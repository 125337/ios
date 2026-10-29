@interface MMViewCapture : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    BOOL _alignsImageSize; // +0x10
    UIView * _view; // +0x18
    id <MMViewCaptureDelegate> _delegate; // +0x20
    long long _preferredFramesPerSecond; // +0x28
    CADisplayLink * _displayLink; // +0x30
}
- (id)init;
- (id)initWithView:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (BOOL)isCapturing;
- (void)startCapturing;
- (void)stopCapturing;
- (void)pauseCapturing;
- (void)resumeCapturing;
- (void)captureByDisplayLink:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)preferredFramesPerSecond;
- (BOOL)alignsImageSize;
- (void)setAlignsImageSize:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end

