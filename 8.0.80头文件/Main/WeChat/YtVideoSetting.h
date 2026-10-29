@interface YtVideoSetting : NSObject
{
    NSArray * _configs; // +0x8
    double _duration; // +0x10
    double _unit; // +0x18
}
- (id)initWithFile:(id)arg1;
- (id)initWithFileRes:(id)arg1;
- (id)initWithJsonStr:(id)arg1;
- (long long)argbAtElapse:(double)arg1;
- (float)screenAtElapse:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)unit;
- (void)setUnit:(double)arg1;
- (void).cxx_destruct;
@end
