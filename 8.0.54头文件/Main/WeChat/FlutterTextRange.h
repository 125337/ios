@interface FlutterTextRange : UITextRange <NSCopying>
{
    _NSRange _range; // +0x8
}
+ (id)rangeWithNSRange:(_NSRange)arg1;
- (id)initWithNSRange:(_NSRange)arg1;
- (id)start;
- (id)end;
- (BOOL)isEmpty;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (_NSRange)range;
@end

