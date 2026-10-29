@interface CHHapticDynamicParameterModel : NSObject
{
    float _time; // +0x8
    NSArray * _parameters; // +0x10
    AACWeakTimer * _dynamicTtimer; // +0x18
}
- (void)startTimer:(id)arg1 :(id)arg2;
- (void)sendParameter:(id)arg1;
- (void)dealloc;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (float)time;
- (void)setTime:(float)arg1;
- (id)dynamicTtimer;
- (void)setDynamicTtimer:(id)arg1;
- (void).cxx_destruct;
@end
