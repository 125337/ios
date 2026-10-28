@interface FWFWebView : WKWebView <FlutterPlatformView>
{
    FWFObjectFlutterApiImpl * _objectApi; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 binaryMessenger:(id)arg3 instanceManager:(id)arg4;
- (void)setFrame:(CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)view;
- (id)objectApi;
- (void).cxx_destruct;
@end
