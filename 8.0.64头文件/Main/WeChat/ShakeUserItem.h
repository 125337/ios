@interface ShakeUserItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * _nickname; // +0x8
    NSString * _username; // +0x10
    NSString * _showchat; // +0x18
}
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_showchat;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)showchat;
- (void)setShowchat:(id)arg1;
- (void).cxx_destruct;
@end
