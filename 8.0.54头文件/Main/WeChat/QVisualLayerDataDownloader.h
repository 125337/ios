@interface QVisualLayerDataDownloader : NSObject
{
    NSMutableDictionary * _downloadingTasks; // +0x8
}
- (id)init;
- (void)downloadVisualLayerData:(id)arg1 withURL:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadModelLayerData:(id)arg1 withURL:(id)arg2 completion:(id /* block */)arg3;
- (void)requestData:(id)arg1 withRequestKey:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelDownload:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (id)getDownloadTaskFromKey:(id)arg1;
- (void)sendVisLayerTaskCancellation:(id)arg1;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (void).cxx_destruct;
@end

