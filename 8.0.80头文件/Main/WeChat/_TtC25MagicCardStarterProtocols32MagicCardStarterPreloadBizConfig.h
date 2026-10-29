@interface _TtC25MagicCardStarterProtocols32MagicCardStarterPreloadBizConfig : NSObject
{
    void * bizName; // +0x8
    long long preloadStrategy; // +0x18
    unsigned long long cacheTime; // +0x20
    void * preloadDestroyCallback; // +0x28
    double autoDestroyTime; // +0x38
    _TtC25MagicCardStarterProtocols16MagicExtraConfig * extraConfig; // +0x40
    void * mbJsApiList; // +0x48
    void * appBrandJsApiList; // +0x50
    void * udrProjectId; // +0x58
}
- (id)bizName;
- (long long)preloadStrategy;
- (unsigned long long)cacheTime;
- (id /* block */)preloadDestroyCallback;
- (double)autoDestroyTime;
- (id)extraConfig;
- (id)mbJsApiList;
- (id)appBrandJsApiList;
- (id)udrProjectId;
- (id)initWithBizName:(id)arg1 preloadStrategy:(long long)arg2 cacheTime:(unsigned long long)arg3 preloadDestroyCallback:(id /* block */)arg4 autoDestroyTime:(double)arg5 extraConfig:(id)arg6 mbJsApiList:(id)arg7 appBrandJsApiList:(id)arg8 udrProjectId:(id)arg9;
- (id)init;
- (void).cxx_destruct;
@end
