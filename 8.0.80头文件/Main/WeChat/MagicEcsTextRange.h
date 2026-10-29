@interface MagicEcsTextRange : UITextRange
{
    _NSRange _range; // +0x8
}
+ (id)rangeWithNSRange:(_NSRange)arg1;
- (id)initWithRange:(_NSRange)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_NSRange)range;
@end
