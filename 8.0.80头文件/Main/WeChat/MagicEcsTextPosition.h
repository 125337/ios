@interface MagicEcsTextPosition : UITextPosition
{
    long long _index; // +0x8
}
+ (id)positionWithIndex:(long long)arg1;
- (id)initWithIndex:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)index;
@end
