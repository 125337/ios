@interface PropertySecurityInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _logo_url; // +0x18
    long long _jump_type; // +0x20
    NSString * _jump_h5_url; // +0x28
    NSString * _tinyapp_username; // +0x30
    NSString * _tinyapp_path; // +0x38
    long long _status; // +0x40
    NSString * _status_name; // +0x48
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)logo_url;
- (void)setLogo_url:(id)arg1;
- (long long)jump_type;
- (void)setJump_type:(long long)arg1;
- (id)jump_h5_url;
- (void)setJump_h5_url:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)status_name;
- (void)setStatus_name:(id)arg1;
- (void).cxx_destruct;
@end
