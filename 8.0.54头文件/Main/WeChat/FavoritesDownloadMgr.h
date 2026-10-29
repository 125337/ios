@interface FavoritesDownloadMgr : MMObject <CNetworkStatusExt, FavoritesDownloaderDelegate>
{
    NSMutableArray * _downloadingQueue; // +0x8
    NSMutableArray * _failQueue; // +0x10
    NSMutableArray * _activeQueue; // +0x18
    NSMutableSet * _downloadSet; // +0x20
    FavoritesItem * _priorItem; // +0x28
    BOOL _isDownloading; // +0x30
    FavoritesItemDB * _favItemDB; // +0x38
    FavoritesDownloader * _favDownloader; // +0x40
    id <FavoritesDownloadMgrDelegate> _delegate; // +0x48
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)loadDownloadingQueue;
- (BOOL)loadFailedQueue;
- (void)startDownloadItem:(id)arg1 IsPriority:(BOOL)arg2;
- (BOOL)delDownloadItem:(id)arg1;
- (void)realStartDownloadItem:(id)arg1 IsPriority:(BOOL)arg2;
- (void)realAddFavItem:(id)arg1 IsPriority:(BOOL)arg2;
- (BOOL)realDelDownloadItem:(id)arg1;
- (void)TryStartDownload;
- (void)stopDownloadAllFavItem;
- (void)changeToNoWifi;
- (id)getDownloadingItemList;
- (void)onDownloadFavItem:(id)arg1 RetCode:(int)arg2;
- (BOOL)checkAsyncUploadingDataInItem:(id)arg1;
- (BOOL)checkAsyncUploadingDataInDataList:(id)arg1 NeedFix:(BOOL)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

