@interface FBSDKDialogConfiguration : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSArray * _appVersions; // +0x8
    NSString * _name; // +0x10
    NSURL * _URL; // +0x18
}
+ (BOOL)supportsSecureCoding;
- (id)initWithName:(id)arg1 URL:(id)arg2 appVersions:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)appVersions;
- (id)name;
- (id)URL;
- (void).cxx_destruct;
@end

