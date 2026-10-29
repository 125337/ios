@interface WCPayRedirectUrlInfo : NSObject
{
    long long _type; // +0x8
    NSString * _appid; // +0x10
    NSString * _app_version; // +0x18
    NSString * _path; // +0x20
    NSString * _button_name; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)app_version;
- (void)setApp_version:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)button_name;
- (void)setButton_name:(id)arg1;
- (void).cxx_destruct;
@end

