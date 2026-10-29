@interface _TtC25MagicCardStarterProtocols38MagicCardStarterSimplePreloadBizConfig : _TtC25MagicCardStarterProtocols32MagicCardStarterPreloadBizConfig
{
    id <IMagicSimpleDelegate> delegate; // +0x68
    id <_TtP25MagicCardStarterProtocols23MagicSimpleViewDelegate_> viewDelegate; // +0x70
}
- (id)delegate;
- (id)viewDelegate;
- (id)initWithBizName:(id)arg1 preloadStrategy:(long long)arg2 cacheTime:(unsigned long long)arg3 delegate:(id)arg4 viewDelegate:(id)arg5 preloadDestroyCallback:(id /* block */)arg6 autoDestroyTime:(double)arg7 extraConfig:(id)arg8 mbJsApiList:(id)arg9 appBrandJsApiList:(id)arg10 udrProjectId:(id)arg11;
- (id)initWithBizName:(id)arg1 preloadStrategy:(long long)arg2 cacheTime:(unsigned long long)arg3 preloadDestroyCallback:(id /* block */)arg4 autoDestroyTime:(double)arg5 extraConfig:(id)arg6 mbJsApiList:(id)arg7 appBrandJsApiList:(id)arg8 udrProjectId:(id)arg9;
- (void).cxx_destruct;
@end
