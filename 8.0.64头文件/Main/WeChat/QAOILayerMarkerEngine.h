@interface QAOILayerMarkerEngine : NSObject
{
    NSMutableDictionary * _downloadingTasks; // +0x8
}
- (id)init;
- (void)requestAOILayerData:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadPOIIconImage:(id)arg1 completion:(id /* block */)arg2;
- (id)constructURLString:(id)arg1 withID:(id)arg2;
- (void)removeDownloadTask:(id)arg1;
- (void)removeRequestTask:(id)arg1;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (void).cxx_destruct;
@end
