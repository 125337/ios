@interface TPDisplayLayerView : UIView
{
    BOOL _waitingForMainThread; // +0x8
    BOOL _firstFrameRendered; // +0x9
    int _rotationAngle; // +0xc
    AVSampleBufferDisplayLayer * _displayLayer; // +0x10
    ITPRendererInterruptCallback * _interruptCallback; // +0x18
    NSString * _currentVideoGravity; // +0x20
    double _boundsOffset; // +0x28
    CGSize _frameSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)drawFrame:(TPFrame *)arg1;
- (void)fineTunningBounds;
- (void)applyDisplayTransform;
- (void)waitForMainThread;
- (void)setInterruptCallback:(ITPRendererInterruptCallback *)arg1;
- (CATransform3D)calculateRotationTransform;
- (__CVBuffer *)getPixelBufferFromTPFrame:(TPFrame *)arg1;
- (void)drawToLayer:(__CVBuffer *)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)flush;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (int)rotationAngle;
- (void)setRotationAngle:(int)arg1;
- (BOOL)waitingForMainThread;
- (void)setWaitingForMainThread:(BOOL)arg1;
- (ITPRendererInterruptCallback *)interruptCallback;
- (BOOL)firstFrameRendered;
- (void)setFirstFrameRendered:(BOOL)arg1;
- (CGSize)frameSize;
- (void)setFrameSize:(CGSize)arg1;
- (id)currentVideoGravity;
- (void)setCurrentVideoGravity:(id)arg1;
- (double)boundsOffset;
- (void)setBoundsOffset:(double)arg1;
- (void).cxx_destruct;
@end

