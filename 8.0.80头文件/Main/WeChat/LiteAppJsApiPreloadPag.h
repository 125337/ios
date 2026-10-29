@interface LiteAppJsApiPreloadPag : LiteAppJsApi <MMLiteAppDownloadMgrDelegate>
{
    MMLiteAppDownloadMgr * _downloadMgr; // +0x20
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end
