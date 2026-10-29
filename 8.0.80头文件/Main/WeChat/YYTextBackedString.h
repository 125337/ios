@interface YYTextBackedString : NSObject <NSCoding, NSCopying>
{
    NSString * _string; // +0x8
}
+ (id)stringWithString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)string;
- (void)setString:(id)arg1;
- (void).cxx_destruct;
@end
