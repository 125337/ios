@interface ActionUser : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _username; // +0x18
    NSString * _nickname; // +0x20
    NSString * _strBeforeFollow; // +0x28
    NSString * _strAfterFollow; // +0x30
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)strBeforeFollow;
- (void)setStrBeforeFollow:(id)arg1;
- (id)strAfterFollow;
- (void)setStrAfterFollow:(id)arg1;
- (void).cxx_destruct;
@end

