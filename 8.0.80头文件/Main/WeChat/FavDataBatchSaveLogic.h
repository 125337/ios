@interface FavDataBatchSaveLogic : NSObject <IFavCdnDownloadMgrExt>
{
    BOOL _isProcessing; // +0x8
    BOOL _shouldCancel; // +0x9
    BOOL _batchCompletionDelivered; // +0xa
    id <FavDataBatchSaveLogicDelegate> _delegate; // +0x10
    NSMutableArray * _pendingItems; // +0x18
    long long _savedCount; // +0x20
    long long _totalCount; // +0x28
    long long _batchFailureReason; // +0x30
    unsigned long long _operationToken; // +0x38
    unsigned long long _currentItemToken; // +0x40
    unsigned long long _activeDownloadToken; // +0x48
    FavDataItemWrap * _currentItem; // +0x50
    NSString * _activeDownloadKey; // +0x58
    FavoritesDownloadCDNInfo * _activeDownloadInfo; // +0x60
    NSTimer * _downloadTimeoutTimer; // +0x68
}
- (id)initWithDelegate:(id)arg1;
- (void)preflightMediaAlbumForFavDataItems:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)saveMultipleFavDataItems:(id)arg1;
- (void)cancel;
- (void)startNextItem;
- (void)processCurrentItem;
- (void)startDownloadForItem:(id)arg1 token:(unsigned long long)arg2;
- (void)saveItem:(id)arg1 atPath:(id)arg2 token:(unsigned long long)arg3;
- (void)completeCurrentItem:(id)arg1 token:(unsigned long long)arg2 success:(BOOL)arg3 reason:(long long)arg4;
- (void)finishBatchWithSuccess:(BOOL)arg1 failureReason:(long long)arg2;
- (void)updateBatchFailureReason:(long long)arg1;
- (long long)batchFailureReasonForAlbumWriteError:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)startDownloadTimeoutTimerForToken:(unsigned long long)arg1;
- (void)onDownloadTimeout:(id)arg1;
- (void)stopActiveDownload;
- (void)clearActiveDownloadState;
- (void)invalidateDownloadTimer;
- (void)indexAssetLocalIdentifier:(id)arg1 forItem:(id)arg2;
- (BOOL)isCurrentOperation:(unsigned long long)arg1;
- (BOOL)isCurrentItem:(id)arg1 token:(unsigned long long)arg2;
- (void)performOnMainQueueSynchronously:(id /* block */)arg1;
- (id)getFilePathForFavData:(id)arg1;
- (id)downloadKeyForInfo:(id)arg1;
- (BOOL)isVideoData:(id)arg1;
- (BOOL)isImageData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (id)pendingItems;
- (void)setPendingItems:(id)arg1;
- (long long)savedCount;
- (void)setSavedCount:(long long)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (BOOL)shouldCancel;
- (void)setShouldCancel:(BOOL)arg1;
- (BOOL)batchCompletionDelivered;
- (void)setBatchCompletionDelivered:(BOOL)arg1;
- (long long)batchFailureReason;
- (void)setBatchFailureReason:(long long)arg1;
- (unsigned long long)operationToken;
- (void)setOperationToken:(unsigned long long)arg1;
- (unsigned long long)currentItemToken;
- (void)setCurrentItemToken:(unsigned long long)arg1;
- (unsigned long long)activeDownloadToken;
- (void)setActiveDownloadToken:(unsigned long long)arg1;
- (id)currentItem;
- (void)setCurrentItem:(id)arg1;
- (id)activeDownloadKey;
- (void)setActiveDownloadKey:(id)arg1;
- (id)activeDownloadInfo;
- (void)setActiveDownloadInfo:(id)arg1;
- (id)downloadTimeoutTimer;
- (void)setDownloadTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
