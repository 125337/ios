@interface WCAdFinderProfileInfo : NSObject <NSCoding>
{
    NSString * _finderUsername; // +0x8
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

