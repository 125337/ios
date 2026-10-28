@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _localizedRecoveryDescription; // +0x8
    NSArray * _localizedRecoveryOptionDescriptions; // +0x10
    unsigned long long _errorCategory; // +0x18
    NSString * _recoveryActionName; // +0x20
}
+ (BOOL)supportsSecureCoding;
- (id)initWithRecoveryDescription:(id)arg1 optionDescriptions:(id)arg2 category:(unsigned long long)arg3 recoveryActionName:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)localizedRecoveryDescription;
- (id)localizedRecoveryOptionDescriptions;
- (unsigned long long)errorCategory;
- (id)recoveryActionName;
- (void).cxx_destruct;
@end
