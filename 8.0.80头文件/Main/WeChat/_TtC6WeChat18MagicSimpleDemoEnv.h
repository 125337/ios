@interface _TtC6WeChat18MagicSimpleDemoEnv : NSObject <IMagicSimpleDelegate>
{
     bizName; // +0x8
     biz; // +0x18
     container; // +0x20
     isPreloaded; // +0x28
     autoDestroyTime; // +0x30
}
- (id)provideVConsoleContainer;
- (void)handleJsEvent:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
@end
