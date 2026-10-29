@interface TAVKeyframe : NSObject <NSCopying>
{
    id <TAVKeyframeValue> _value; // +0x8
    id /* block */ _timingFunction; // +0x10
    struct _time; // +0x18
}
- (id)initWithTime:(struct)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (struct)time;
- (void)setTime:(struct)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id /* block */)timingFunction;
- (void)setTimingFunction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

