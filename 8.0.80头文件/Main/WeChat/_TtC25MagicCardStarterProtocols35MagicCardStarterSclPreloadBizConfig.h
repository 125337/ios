@interface _TtC25MagicCardStarterProtocols35MagicCardStarterSclPreloadBizConfig : _TtC25MagicCardStarterProtocols32MagicCardStarterPreloadBizConfig
{
    _TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig * singleRootConfig; // +0x68
    id <IMagicCardStarterSclDelegate> delegate; // +0x70
}
- (id)singleRootConfig;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithBizName:(id)arg1 preloadStrategy:(long long)arg2 cacheTime:(unsigned long long)arg3 singleRootConfig:(id)arg4 delegate:(id)arg5 preloadDestroyCallback:(id /* block */)arg6 autoDestroyTime:(double)arg7 extraConfig:(id)arg8 mbJsApiList:(id)arg9 appBrandJsApiList:(id)arg10 udrProjectId:(id)arg11;
- (id)initWithBizName:(id)arg1 preloadStrategy:(long long)arg2 cacheTime:(unsigned long long)arg3 preloadDestroyCallback:(id /* block */)arg4 autoDestroyTime:(double)arg5 extraConfig:(id)arg6 mbJsApiList:(id)arg7 appBrandJsApiList:(id)arg8 udrProjectId:(id)arg9;
- (void).cxx_destruct;
@end
