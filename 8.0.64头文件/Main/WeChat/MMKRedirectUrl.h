@interface MMKRedirectUrl : NSObject
{
    int _type; // +0x8
    NSString * _appid; // +0x10
    NSString * _appVersion; // +0x18
    NSString * _path; // +0x20
    NSString * _btnName; // +0x28
}
+ (id)KRedirectUrlWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;
- (id)initWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;
- (id)description;
- (int)type;
- (id)appid;
- (id)appVersion;
- (id)path;
- (id)btnName;
- (void).cxx_destruct;
@end
