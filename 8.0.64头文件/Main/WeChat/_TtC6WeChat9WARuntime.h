@interface _TtC6WeChat9WARuntime : NSObject
{
     launchParams; // +0x8
     username; // +0x10
     appid; // +0x20
     instanceId; // +0x30
     targetVersion; // +0x40
     debugMode; // +0x48
     runtimeMode; // +0x50
     versionRouter; // +0x60
     runtimeVersion; // +0x68
     permission; // +0x70
     coldLaunchRuntimeLoader; // +0x78
     warmLaunchRuntimeLoader; // +0x80
     modeObj; // +0x88
     contact; // +0x90
}
- (id)init;
- (BOOL)checkJSApiPermission:(id)arg1;
- (void).cxx_destruct;
@end
