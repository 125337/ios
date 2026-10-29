@interface MMWebCoreConfig : MMObject
{
    BOOL _enableOauthSnapShotMode; // +0x8
    NSString * _referer; // +0x10
    NSArray * _arrUserScript; // +0x18
    NSDictionary * _dictCustomWebviewEnvInfo; // +0x20
}
- (id)referer;
- (void)setReferer:(id)arg1;
- (id)arrUserScript;
- (void)setArrUserScript:(id)arg1;
- (id)dictCustomWebviewEnvInfo;
- (void)setDictCustomWebviewEnvInfo:(id)arg1;
- (BOOL)enableOauthSnapShotMode;
- (void)setEnableOauthSnapShotMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

