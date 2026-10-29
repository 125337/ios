@interface MMLiveSlottedTextFieldRange : UITextRange <NSCopying>
{
    long long _startIndex; // +0x8
    long long _endIndex; // +0x10
}
+ (id)rangeWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
+ (id)rangeWithStartIndex:(long long)arg1 length:(long long)arg2;
+ (id)rangeWithRange:(_NSRange)arg1;
- (void)setWithStartIndex:(long long)arg1 length:(long long)arg2;
- (void)setWithRange:(_NSRange)arg1;
- (BOOL)isEmpty;
- (id)start;
- (id)end;
- (long long)length;
- (_NSRange)range;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)startIndex;
- (void)setStartIndex:(long long)arg1;
- (long long)endIndex;
- (void)setEndIndex:(long long)arg1;
@end

