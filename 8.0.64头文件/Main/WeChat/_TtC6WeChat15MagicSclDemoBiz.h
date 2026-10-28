@interface _TtC6WeChat15MagicSclDemoBiz : _TtC6WeChat15MagicSclBaseBiz <IMBPkgManagement, IMBFileSystem>
{
     mbCommonAdapter; // +0xa8
     bizPkg; // +0xb0
     mbVConsoleHelper; // +0xb8
}
- (id)init;
- (void)start;
- (id)getParentViewController;
- (id)getAppId;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)arg1;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@end
