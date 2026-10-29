@interface _TtC25MagicCardStarterProtocols31MagicCardStarterSimpleBizConfig : _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig
{
    id <_TtP25MagicCardStarterProtocols23MagicSimpleViewDelegate_> viewDelegate; // +0x48
    void * udrProjectId; // +0x50
}
- (id)viewDelegate;
- (id)udrProjectId;
- (id)initWithBizName:(id)arg1 udrProjectId:(id)arg2 delegate:(id)arg3 viewDelegate:(id)arg4 mbJsApiList:(id)arg5 appBrandJsApiList:(id)arg6 autoDestroyTime:(double)arg7 lifecycleListener:(id)arg8 extraConfig:(id)arg9;
- (id)initWithBizName:(id)arg1 delegate:(id)arg2 mbJsApiList:(id)arg3 appBrandJsApiList:(id)arg4 autoDestroyTime:(double)arg5 lifecycleListener:(id)arg6 extraConfig:(id)arg7;
- (void).cxx_destruct;
@end
