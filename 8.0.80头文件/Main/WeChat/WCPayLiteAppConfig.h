@interface WCPayLiteAppConfig : NSObject
{
    NSString * _appId; // +0x8
    NSString * _path; // +0x10
}
+ (id)configWithAppId:(id)arg1 path:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
