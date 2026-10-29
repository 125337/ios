@interface WCPayPayManageLabel : NSObject <NSCoding>
{
    unsigned int _jumpType; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _logoUrl; // +0x20
    NSString * _jumpUrl; // +0x28
    NSString * _username; // +0x30
    NSString * _path; // +0x38
}
+ (id)genFromDict:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

