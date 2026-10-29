@interface WCPlayerPipDisplayLayerView : UIView
{
    BOOL _waitingForMainThread; // +0x8
    BOOL _firstFrameRendered; // +0x9
    unsigned int _taskId; // +0xc
    int _rotationAngle; // +0x10
    AVSampleBufferDisplayLayer * _displayLayer; // +0x18
    NSString * _currentVideoGravity; // +0x20
    double _boundsOffset; // +0x28
    long long _lastPrintPtsSec; // +0x30
    CGSize _frameSize; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)displayLayer;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (double)getCurrentTime;
- (void)setRate:(double)arg1;
- (void)seek:(double)arg1;
- (void)renderedOneFrame:(id)arg1;
- (void)renderedOneEmptyFrameWithSize:(CGSize)arg1;
- (BOOL)drawFrame:(id)arg1;
- (void)fineTunningBounds;
- (void)applyDisplayTransform;
- (void)waitForMainThread;
- (CATransform3D)calculateRotationTransform;
- (__CVBuffer *)getPixelBufferFromTPFrame:(id)arg1;
- (void)drawToLayer:(__CVBuffer *)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)flush;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (void)setDisplayLayer:(id)arg1;
- (int)rotationAngle;
- (void)setRotationAngle:(int)arg1;
- (BOOL)waitingForMainThread;
- (void)setWaitingForMainThread:(BOOL)arg1;
- (BOOL)firstFrameRendered;
- (void)setFirstFrameRendered:(BOOL)arg1;
- (CGSize)frameSize;
- (void)setFrameSize:(CGSize)arg1;
- (id)currentVideoGravity;
- (void)setCurrentVideoGravity:(id)arg1;
- (double)boundsOffset;
- (void)setBoundsOffset:(double)arg1;
- (long long)lastPrintPtsSec;
- (void)setLastPrintPtsSec:(long long)arg1;
- (void).cxx_destruct;
@end
