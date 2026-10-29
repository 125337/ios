@interface MMLiveSlottedTextFieldPosition : UITextPosition <NSCopying>
{
    long long _index; // +0x8
}
+ (id)positionWithIndex:(long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
@end

