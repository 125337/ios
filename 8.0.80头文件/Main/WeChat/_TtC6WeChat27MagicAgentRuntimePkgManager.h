@interface _TtC6WeChat27MagicAgentRuntimePkgManager : NSObject <_TtP12WCMagicBrush20IMBPkgManagementBase_, IMBFileSystem>
{
     delegate; // +0x8
     pubResLogic; // +0x18
     kPublibFileMapList; // +0x20
}
- (id)init;
- (void)destroy;
- (id)provideFileSystem;
- (void)provideMainScript:(id /* block */)arg1;
- (void)batchEvaluateScript:(id)arg1 inContext:(id)arg2 contextInfoMap:(id)arg3;
- (BOOL)accept:(id)arg1;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (id)getFileDataByPath:(id)arg1;
- (id)provideAppConfig;
- (id)getVersionInfo;
- (id)getPkgInfo;
- (void).cxx_destruct;
@end
