@interface WAFPSMonitor : NSObject
{
    double _currentFps; // +0x8
    CADisplayLink * _link; // +0x10
    unsigned long long _count; // +0x18
    double _lastTime; // +0x20
    double _interval; // +0x28
    NSMutableDictionary * _tickObservers; // +0x30
}
- (id)initWithInterval:(double)arg1;
- (id)init;
- (void)dealloc;
- (void)tick:(id)arg1;
- (void)updateFpsIndicators:(float)arg1;
- (void)start;
- (void)stop;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (double)currentFps;
- (void)setCurrentFps:(double)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (double)lastTime;
- (void)setLastTime:(double)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id)tickObservers;
- (void)setTickObservers:(id)arg1;
- (void).cxx_destruct;
@end
