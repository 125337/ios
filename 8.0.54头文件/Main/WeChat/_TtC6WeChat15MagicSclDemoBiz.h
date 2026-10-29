@interface _TtC6WeChat15MagicSclDemoBiz : _TtC6WeChat15MagicSclBaseBiz <MBCommonAdapterDelegate, IMBPkgManagement, IMBFileSystem>
{
     mbCommonAdapter; // +0x78
     bizPkg; // +0x80
     mbVConsoleHelper; // +0x88
}
- (id)init;
- (void)start;
- (unsigned int)getDebugModeType;
- (id)getParentViewController;
- (id)getAppId;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)arg1;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@end

