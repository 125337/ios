@interface SystemUASetter : NSObject
{
    WKWebView * _webview; // +0x8
    NSString * _systemDefaultUA; // +0x10
}
+ (id)shareInstance;
+ (id)deviceSystemDefaultUA;
- (void)clearCachedUA;
- (id)syncGetSystemDefaultUA;
- (id)syncGetSystemUAOrDefaultUAOnFail;
- (void)asyncGenSystemDefaultUAWithSingletonReturnBlock:(id /* block */)arg1;
- (void)mainThread_asyncGetSystemDefaultUA:(id /* block */)arg1;
- (id)getMMUserAgent;
- (id)getMMUserAgentWithDetailInfo:(id)arg1;
- (id)getMMUserAgentWithSystemDefaultUA:(id)arg1;
- (id)getMMUserAgentWithSystemDefaultUA:(id)arg1 detailInfo:(id)arg2;
- (void)updateDefaultUserAgent;
- (void)updateDefaultUserAgentWithoutOverwriteGlobalSetting:(id /* block */)arg1;
- (id)getDefaultUserAgentWithWeixinVersion;
- (id)fixUserAgentIOSVersionIfNeed:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)systemDefaultUA;
- (void)setSystemDefaultUA:(id)arg1;
- (void).cxx_destruct;
@end
