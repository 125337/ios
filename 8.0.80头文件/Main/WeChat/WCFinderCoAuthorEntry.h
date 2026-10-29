@interface WCFinderCoAuthorEntry : NSObject <NSCoding, PBCoding>
{
    NSString * _nickname; // +0x8
    NSString * _username; // +0x10
}
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
