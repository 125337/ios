@interface WCPayBindCardActivityChangeInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _wording; // +0x10
    NSString * _icon; // +0x18
    NSString * _btn_text; // +0x20
    NSString * _title; // +0x28
    NSString * _tinyapp_name; // +0x30
    NSString * _tinyapp_logo; // +0x38
    NSString * _tinyapp_desc; // +0x40
    NSString * _tinyapp_username; // +0x48
    NSString * _tinyapp_path; // +0x50
    NSString * _activity_tinyapp_btn_text; // +0x58
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)btn_text;
- (void)setBtn_text:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
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
- (void).cxx_destruct;
@end
