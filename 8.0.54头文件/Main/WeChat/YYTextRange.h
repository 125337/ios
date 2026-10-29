@interface YYTextRange : UITextRange <NSCopying>
{
    YYTextPosition * _start; // +0x8
    YYTextPosition * _end; // +0x10
}
+ (id)rangeWithRange:(_NSRange)arg1;
+ (id)rangeWithRange:(_NSRange)arg1 affinity:(long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)defaultRange;
- (id)init;
- (id)start;
- (id)end;
- (BOOL)isEmpty;
- (_NSRange)asRange;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
@end

