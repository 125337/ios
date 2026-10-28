@interface QOfflineMapDownloader : NSObject
{
    NSMutableDictionary * _downloadingTasks; // +0x8
    NSMutableArray * _downloadingItems; // +0x10
}
- (void)downloadData:(id)arg1 withURL:(id)arg2 completion:(id /* block */)arg3;
- (void)addOfflineDownloadItem:(id)arg1;
- (void)removeOfflineDownloadItem:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)removeDownloadTask:(id)arg1;
- (id)getDownloadItems;
- (void)dowloadCDNOfflineConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)saveOfflineItemZip:(id)arg1 withItem:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (id)downloadingItems;
- (void)setDownloadingItems:(id)arg1;
- (void).cxx_destruct;
@end
