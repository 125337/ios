@interface _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig : NSObject
{
    void * bizName; // +0x8
    id <IMagicBaseDelegate> delegate; // +0x18
    void * mbJsApiList; // +0x20
    void * appBrandJsApiList; // +0x28
    double autoDestroyTime; // +0x30
    id <_TtP25MagicCardStarterProtocols23IMagicLifecycleListener_> lifecycleListener; // +0x38
    _TtC25MagicCardStarterProtocols16MagicExtraConfig * extraConfig; // +0x40
}
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mbJsApiList;
- (void)setMbJsApiList:(id)arg1;
- (id)appBrandJsApiList;
- (void)setAppBrandJsApiList:(id)arg1;
- (double)autoDestroyTime;
- (void)setAutoDestroyTime:(double)arg1;
- (id)lifecycleListener;
- (void)setLifecycleListener:(id)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (id)initWithBizName:(id)arg1 delegate:(id)arg2 mbJsApiList:(id)arg3 appBrandJsApiList:(id)arg4 autoDestroyTime:(double)arg5 lifecycleListener:(id)arg6 extraConfig:(id)arg7;
- (void)toString;
- (id)init;
- (void).cxx_destruct;
@end
