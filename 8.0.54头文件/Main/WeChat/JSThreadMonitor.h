@interface JSThreadMonitor : NSObject
{
    Monitor * _monitor; // +0x8
    float _threashold; // +0x10
    int _duration; // +0x14
    void * * _callback; // +0x18
}
+ (id)defaultMonitor;
+ (void)setupWithTime:(int)arg1 threashold:(float)arg2 callback:(void * *)arg3;
+ (void)setupWithCallback:(void * *)arg1;
- (id)init;
- (void)updateTID;
- (void)dealloc;
- (void)start;
- (void)setTickLimit:(unsigned int)arg1;
- (void)setEnableMainThread:(BOOL)arg1;
- (void)stop;
- (float)threashold;
- (void)setThreashold:(float)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (void * *)callback;
- (void)setCallback:(void * *)arg1;
@end

