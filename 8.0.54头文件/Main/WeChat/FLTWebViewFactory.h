@interface FLTWebViewFactory : NSObject <FlutterPlatformViewFactory>
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    FLTCookieManager * _cookieManager; // +0x10
}
- (id)initWithMessenger:(id)arg1 cookieManager:(id)arg2;
- (id)createArgsCodec;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (void).cxx_destruct;
@end

