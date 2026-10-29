@interface TXCDisplayLayerView : UIView
{
    atomic<int> _mainThreadTaskCount; // +0x8
    BOOL _firstFrameRendered; // +0xc
    AVSampleBufferDisplayLayer * _displayLayer; // +0x10
    unsigned long long _rotation; // +0x18
    NSString * _currentVideoGravity; // +0x20
    double _boundsOffset; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)drawFrame:(__CVBuffer *)arg1 rotation:(unsigned long long)arg2;
- (void)fineTunningBounds;
- (void)applyDisplayTransform;
- (BOOL)waitMainThreadTaskFinishIfNeed;
- (CATransform3D)calculateRotationTransform;
- (void)drawToLayer:(__CVBuffer *)arg1;
- (BOOL)supportGravity;
- (void)setVideoGravity:(id)arg1;
- (void)flush;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (unsigned long long)rotation;
- (void)setRotation:(unsigned long long)arg1;
- (BOOL)firstFrameRendered;
- (void)setFirstFrameRendered:(BOOL)arg1;
- (id)currentVideoGravity;
- (void)setCurrentVideoGravity:(id)arg1;
- (double)boundsOffset;
- (void)setBoundsOffset:(double)arg1;
- (void).cxx_destruct;
@end

