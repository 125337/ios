@interface ActionUrl : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _link; // +0x18
    NSString * _iconurl; // +0x20
    NSString * _digest; // +0x28
    NSString * _username; // +0x30
    NSString * _nickname; // +0x38
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)iconurl;
- (void)setIconurl:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (void).cxx_destruct;
@end

