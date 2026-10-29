@interface FBSDKErrorConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary * _configurationDictionary; // +0x8
}
+ (BOOL)supportsSecureCoding;
- (id)initWithDictionary:(id)arg1;
- (id)recoveryConfigurationForCode:(id)arg1 subcode:(id)arg2 request:(id)arg3;
- (void)parseArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void).cxx_destruct;
@end
