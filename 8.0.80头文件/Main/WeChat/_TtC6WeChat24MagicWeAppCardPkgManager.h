@interface _TtC6WeChat24MagicWeAppCardPkgManager : NSObject <_TtP12WCMagicBrush20IMBPkgManagementBase_, IMBFileSystem>
{
     delegate; // +0x8
    WAApptaskPublicResLogic * pubResLogic; // +0x18
}
- (id)provideFileSystem;
- (id)pubResLogic;
- (void)setPubResLogic:(id)arg1;
- (void)provideMainScript:(id /* block */)arg1;
- (void)batchEvaluateScript:(id)arg1 inContext:(id)arg2 contextInfoMap:(id)arg3;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (id)getFileDataByPath:(id)arg1;
- (id)provideAppConfig;
- (id)getVersionInfo;
- (id)getPkgInfo;
- (id)init;
- (void).cxx_destruct;
@end
