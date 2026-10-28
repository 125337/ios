@interface MMTestRecorder : NSObject
{
    float _x; // +0x8
    NSArray * _values; // +0x10
}
+ (id)TestRecorderWithX:(float)arg1 values:(id)arg2;
- (id)initWithX:(float)arg1 values:(id)arg2;
- (id)description;
- (float)x;
- (id)values;
- (void).cxx_destruct;
@end
