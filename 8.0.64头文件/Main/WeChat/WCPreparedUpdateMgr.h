@interface WCPreparedUpdateMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _downloadTaskDict; // +0x8
    NSObject<OS_dispatch_queue> * _ppDownloadQueue; // +0x10
}
+ (BOOL)p_checkPreparedPatchVersion:(id)arg1;
+ (id)p_startDownloadWithExpInVersion:(id)arg1;
+ (void)p_startDownloadUpdate:(id)arg1 withVersion:(id)arg2 completionHandler:(id /* block */)arg3;
+ (BOOL)verifyUpdateData:(id)arg1 withBootsInfo:(id)arg2;
- (id)ppDownloadQueue;
- (id)downloadTaskDict;
- (void)checkPreparedUpdate;
- (void)repeatCheckPreparedUpdate;
- (void)p_asyncCheckPreparedUpdate;
- (void)setDownloadTaskDict:(id)arg1;
- (void)setPpDownloadQueue:(id)arg1;
- (void).cxx_destruct;
@end
