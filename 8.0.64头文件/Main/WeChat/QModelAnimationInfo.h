@interface QModelAnimationInfo : NSObject
{
    unsigned long long _index; // +0x8
    NSString * _name; // +0x10
    double _duration; // +0x18
}
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end
