@interface WxaLiteAppConfig : NSObject
{
    WxaRouterConfig * _wxaRouterConfig; // +0x8
}
- (id)init;
- (void)setEntryPoint:(id)arg1;
- (void)setEntryPointArgs:(id)arg1;
- (void)setPreloadEngine:(BOOL)arg1;
- (void)setPreloadNextEngine:(BOOL)arg1;
- (void)setAutoReleaseEngine:(BOOL)arg1;
- (void)setReleaseDefaultEngineWhenEmptyView:(BOOL)arg1;
- (void)addFlutterPlugin:(id)arg1;
- (void)setup;
- (id)wxaRouterConfig;
- (void)setWxaRouterConfig:(id)arg1;
- (void).cxx_destruct;
@end

