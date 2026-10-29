@interface _TtC25MagicCardStarterProtocols28MagicCardStarterSclBizConfig : _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig
{
    _TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig * singleRootConfig; // +0x48
    unsigned long long initBizCacheTime; // +0x50
}
- (id)singleRootConfig;
- (void)setSingleRootConfig:(id)arg1;
- (unsigned long long)initBizCacheTime;
- (void)setInitBizCacheTime:(unsigned long long)arg1;
- (id)initWithBizName:(id)arg1 singleRootConfig:(id)arg2 delegate:(id)arg3 mbJsApiList:(id)arg4 appBrandJsApiList:(id)arg5 autoDestroyTime:(double)arg6 lifecycleListener:(id)arg7 initBizCacheTime:(unsigned long long)arg8;
- (id)initWithBizName:(id)arg1 delegate:(id)arg2 mbJsApiList:(id)arg3 appBrandJsApiList:(id)arg4 autoDestroyTime:(double)arg5 lifecycleListener:(id)arg6 extraConfig:(id)arg7;
- (void).cxx_destruct;
@end
