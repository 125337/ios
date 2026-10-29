@interface CBTSelectionAutoScroller : NSObject
{
    id /* block */ _onScrollTick; // +0x8
    double _scrollSpeed; // +0x10
    double _edgeZoneRatio; // +0x18
    double _minEdgeZone; // +0x20
    double _maxEdgeZone; // +0x28
    CADisplayLink * _displayLink; // +0x30
    UIScrollView * _scrollView; // +0x38
    long long _direction; // +0x40
    double _lastTimestamp; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)updateWithPoint:(CGPoint)arg1 scrollView:(id)arg2;
- (void)stop;
- (BOOL)isScrolling;
- (void)startDisplayLink;
- (void)tick:(id)arg1;
- (id /* block */)onScrollTick;
- (void)setOnScrollTick:(id /* block */)arg1;
- (double)scrollSpeed;
- (void)setScrollSpeed:(double)arg1;
- (double)edgeZoneRatio;
- (void)setEdgeZoneRatio:(double)arg1;
- (double)minEdgeZone;
- (void)setMinEdgeZone:(double)arg1;
- (double)maxEdgeZone;
- (void)setMaxEdgeZone:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (long long)direction;
- (void)setDirection:(long long)arg1;
- (double)lastTimestamp;
- (void)setLastTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
