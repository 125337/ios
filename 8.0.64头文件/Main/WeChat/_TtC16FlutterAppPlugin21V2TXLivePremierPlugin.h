@interface _TtC16FlutterAppPlugin21V2TXLivePremierPlugin : NSObject <V2TXLivePremierObserver>
{
     channel; // +0x8
     pluginManager; // +0x10
}
- (void)onLog:(long long)arg1 log:(id)arg2;
- (void)onLicenceLoaded:(int)arg1 Reason:(id)arg2;
- (void)setLicenceWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)getSDKVersionStrWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setLogConfigWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setEnvironmentWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setSocks5ProxyWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setUserIdWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end
