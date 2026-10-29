@interface _TtC6WeChat9WARuntime : NSObject
{
     coldLaunchParams; // +0x8
     warmLaunchParams; // +0x10
     username; // +0x18
     appid; // +0x28
     instanceId; // +0x38
     targetVersion; // +0x48
     debugMode; // +0x50
     runtimeMode; // +0x58
     versionRouter; // +0x68
     runtimeVersion; // +0x70
     permission; // +0x78
     coldLaunchRuntimeLoader; // +0x80
     modeObj; // +0x88
     contact; // +0x90
}
- (id)init;
- (BOOL)checkJSApiPermission:(id)arg1;
- (void).cxx_destruct;
@end

