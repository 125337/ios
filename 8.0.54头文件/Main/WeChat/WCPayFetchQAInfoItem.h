@interface WCPayFetchQAInfoItem : NSObject <NSCoding>
{
    NSString * _title; // +0x8
    long long _jump_type; // +0x10
    NSString * _jump_url; // +0x18
    NSString * _username; // +0x20
    NSString * _path; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)jump_type;
- (void)setJump_type:(long long)arg1;
- (id)jump_url;
- (void)setJump_url:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

