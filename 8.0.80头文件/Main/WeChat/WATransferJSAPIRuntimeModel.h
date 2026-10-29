@interface WATransferJSAPIRuntimeModel : NSObject
{
    BOOL _isService; // +0x8
    NSString * _appID; // +0x10
    NSString * _permissionAppID; // +0x18
    NSString * _jsapiName; // +0x20
    NSDictionary * _jsapiParams; // +0x28
    NSString * _pageRelativePath; // +0x30
    NSString * _pageQuery; // +0x38
    NSString * _title; // +0x40
    unsigned long long _wxaScene; // +0x48
}
+ (id)fromEventHandler:(id)arg1 jsapiParams:(id)arg2 wxaScene:(unsigned long long)arg3;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)permissionAppID;
- (void)setPermissionAppID:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParams;
- (void)setJsapiParams:(id)arg1;
- (id)pageRelativePath;
- (void)setPageRelativePath:(id)arg1;
- (id)pageQuery;
- (void)setPageQuery:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isService;
- (void)setIsService:(BOOL)arg1;
- (unsigned long long)wxaScene;
- (void)setWxaScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
