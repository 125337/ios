@interface MMFinderLiveClickStreamNode : NSObject
{
    NSString * _name; // +0x8
    id _target; // +0x10
    unsigned long long _type; // +0x18
    double _enterTime; // +0x20
}
- (id)name;
- (void)setName:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (double)enterTime;
- (void)setEnterTime:(double)arg1;
- (void).cxx_destruct;
@end
