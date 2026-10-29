@interface YYTextPosition : UITextPosition <NSCopying>
{
    long long _offset; // +0x8
    long long _affinity; // +0x10
}
+ (id)positionWithOffset:(long long)arg1;
+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)offset;
- (long long)affinity;
@end

