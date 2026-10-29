@interface FWFWebViewFactory : NSObject <FlutterPlatformViewFactory>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithManager:(id)arg1;
- (id)createArgsCodec;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
