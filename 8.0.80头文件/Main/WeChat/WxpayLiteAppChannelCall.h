@interface WxpayLiteAppChannelCall : NSObject
{
    NSString * _scene; // +0x8
    unsigned long long _appUuid; // +0x10
    MMWebViewController * _opener; // +0x18
    MMWebViewController * _lastWebView; // +0x20
    NSMutableSet * _miniPrograms; // +0x28
}
- (id)scene;
- (void)setScene:(id)arg1;
- (unsigned long long)appUuid;
- (void)setAppUuid:(unsigned long long)arg1;
- (id)opener;
- (void)setOpener:(id)arg1;
- (id)lastWebView;
- (void)setLastWebView:(id)arg1;
- (id)miniPrograms;
- (void)setMiniPrograms:(id)arg1;
- (void).cxx_destruct;
@end
