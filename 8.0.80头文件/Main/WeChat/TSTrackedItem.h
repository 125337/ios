@interface TSTrackedItem : NSObject <NSSecureCoding, NSCopying>
{
    long long _type; // +0x8
}
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
@end
