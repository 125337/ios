@interface NirvanaTextPosition : UITextPosition
{
    unsigned long long _index; // +0x8
    long long _affinity; // +0x10
}
+ (id)positionWithIndex:(unsigned long long)arg1;
+ (id)positionWithIndex:(unsigned long long)arg1 affinity:(long long)arg2;
- (id)initWithIndex:(unsigned long long)arg1 affinity:(long long)arg2;
- (unsigned long long)index;
- (long long)affinity;
@end
