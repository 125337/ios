@interface _TtC25MagicCardStarterProtocols22MagicLifecycleListener : NSObject <_TtP25MagicCardStarterProtocols23IMagicLifecycleListener_>
{
     onDestroyCallback; // +0x8
     onPreloadDestroyCallback; // +0x18
     onJITTerminateCallback; // +0x28
}
- (id)initOnDestroyCallback:(id /* block */)arg1 onPreloadDestroyCallback:(id /* block */)arg2 onJITTerminateCallback:(id /* block */)arg3;
- (void)onDestroy;
- (void)onPreloadDestroy;
- (void)onJITTerminate;
- (id)init;
- (void).cxx_destruct;
@end
