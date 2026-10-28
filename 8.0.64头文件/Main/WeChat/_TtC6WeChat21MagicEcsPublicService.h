@interface _TtC6WeChat21MagicEcsPublicService : NSObject <IMBPublicService, IMBLifecycle, IMBPlugin>
{
     mbCommonAdapter; // +0x8
     jsapiContext; // +0x10
     pkgMgr; // +0x18
     bizName; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)provideConfig:(id)arg1;
- (id)provideLifecycle;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (id)providePlugin:(id)arg1;
- (void).cxx_destruct;
@end
