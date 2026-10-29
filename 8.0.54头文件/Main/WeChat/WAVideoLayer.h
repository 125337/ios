@interface WAVideoLayer : CALayer
{
    BOOL _playing; // +0x8
    NSMutableArray * _floatList; // +0x10
    long long _visibleBegin; // +0x18
    long long _visibleCount; // +0x20
    double _rowCount; // +0x28
    CADisplayLink * _displayLink; // +0x30
    double _currentTime; // +0x38
    double _initFloatTime; // +0x40
}
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)invalidate;
- (void)enableFloat:(BOOL)arg1;
- (void)initFloat:(id)arg1;
- (void)addFloat:(id)arg1 color:(id)arg2;
- (void)drawInContext:(CGContext *)arg1;
- (void)updateVideoTime:(double)arg1;
- (void)forceUpdate;
- (void)onUpdateFloat;
- (void)clearFloat;
- (BOOL)playing;
- (void)setPlaying:(BOOL)arg1;
- (id)floatList;
- (void)setFloatList:(id)arg1;
- (long long)visibleBegin;
- (void)setVisibleBegin:(long long)arg1;
- (long long)visibleCount;
- (void)setVisibleCount:(long long)arg1;
- (double)rowCount;
- (void)setRowCount:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (double)initFloatTime;
- (void)setInitFloatTime:(double)arg1;
- (void).cxx_destruct;
@end

