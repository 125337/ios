@interface WCPayBindCardRecommendTinyAppInfo : NSObject
{
    unsigned int _tinyapp_version; // +0x8
    NSString * _tinyapp_name; // +0x10
    NSString * _tinyapp_logo; // +0x18
    NSString * _tinyapp_desc; // +0x20
    NSString * _tinyapp_username; // +0x28
    NSString * _tinyapp_path; // +0x30
    NSString * _activity_tinyapp_btn_text; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)tinyapp_name;
- (void)setTinyapp_name:(id)arg1;
- (id)tinyapp_logo;
- (void)setTinyapp_logo:(id)arg1;
- (id)tinyapp_desc;
- (void)setTinyapp_desc:(id)arg1;
- (id)tinyapp_username;
- (void)setTinyapp_username:(id)arg1;
- (id)tinyapp_path;
- (void)setTinyapp_path:(id)arg1;
- (id)activity_tinyapp_btn_text;
- (void)setActivity_tinyapp_btn_text:(id)arg1;
- (unsigned int)tinyapp_version;
- (void)setTinyapp_version:(unsigned int)arg1;
- (void).cxx_destruct;
@end
