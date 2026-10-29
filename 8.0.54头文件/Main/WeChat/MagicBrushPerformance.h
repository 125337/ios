@interface MagicBrushPerformance : NSObject
{
    BOOL _enableReportVarianceFps; // +0x8
    BOOL _paused; // +0x9
    int _fps; // +0xc
    int _drawcall; // +0x10
    int _vertex; // +0x14
    int _triangle; // +0x18
    int _jankCount; // +0x1c
    int _bigJankCount; // +0x20
    int _jankFrameTime; // +0x24
    int _totalFrameTime; // +0x28
    int _jankPerSecond; // +0x2c
    int _bigJankPerSecond; // +0x30
    int _stutterPerSecond; // +0x34
    void * _runtime; // +0x38
}
- (id)initWithRuntime:(void *)arg1;
- (void)setEnableReportVarianceFps:(BOOL)arg1;
- (void)resetJankInfo;
- (struct)getPerformance;
- (long long)getVarianceFps;
- (void)triggerUpdatePerformance;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (BOOL)enableReportVarianceFps;
- (void *)runtime;
- (void)setRuntime:(void *)arg1;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (int)fps;
- (void)setFps:(int)arg1;
- (int)drawcall;
- (void)setDrawcall:(int)arg1;
- (int)vertex;
- (void)setVertex:(int)arg1;
- (int)triangle;
- (void)setTriangle:(int)arg1;
- (int)jankCount;
- (void)setJankCount:(int)arg1;
- (int)bigJankCount;
- (void)setBigJankCount:(int)arg1;
- (int)jankFrameTime;
- (void)setJankFrameTime:(int)arg1;
- (int)totalFrameTime;
- (void)setTotalFrameTime:(int)arg1;
- (int)jankPerSecond;
- (void)setJankPerSecond:(int)arg1;
- (int)bigJankPerSecond;
- (void)setBigJankPerSecond:(int)arg1;
- (int)stutterPerSecond;
- (void)setStutterPerSecond:(int)arg1;
@end

