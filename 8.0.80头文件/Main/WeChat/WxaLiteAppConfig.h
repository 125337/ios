@interface WxaLiteAppConfig : NSObject
{
    WxaRouterConfig * _wxaRouterConfig; // +0x8
}
- (id)init;
- (void)setEntryPoint:(id)arg1;
- (void)setEntryPointArgs:(id)arg1;
- (void)addFlutterPlugin:(id)arg1;
- (void)setup;
- (id)wxaRouterConfig;
- (void)setWxaRouterConfig:(id)arg1;
- (void).cxx_destruct;
@end
