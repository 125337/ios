@interface WCFinderDataDownloadObject : NSObject <WCFinderVideoDownLoadMgrExt>
{
    WCFinderDataItem * _dataItem; // +0x8
    id /* block */ _downloadCompletionBlock; // +0x10
}
+ (id)setupWithDataItem:(id)arg1 downloadCompletion:(id /* block */)arg2;
- (void)startDownload;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)dealloc;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id /* block */)downloadCompletionBlock;
- (void)setDownloadCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
