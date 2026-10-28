@interface CHHapticParameterCurveModel : NSObject
{
    float _time; // +0x8
    CHHapticParameterCurve * _parameters; // +0x10
    AACWeakTimer * _cuveModeltimer; // +0x18
}
- (void)startTimer:(id)arg1 :(id)arg2;
- (void)scheduleParameterCurve:(id)arg1;
- (void)dealloc;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (float)time;
- (void)setTime:(float)arg1;
- (id)cuveModeltimer;
- (void)setCuveModeltimer:(id)arg1;
- (void).cxx_destruct;
@end
