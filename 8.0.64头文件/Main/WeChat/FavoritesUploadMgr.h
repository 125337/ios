@interface FavoritesUploadMgr : MMObject <IFavoritesRepairSvrDataExt, FavoritesUploadProccessorDelegate>
{
    NSMutableArray * m_failedQueue; // +0x8
    FavoritesCDNInfoDB * m_favCdnDB; // +0x10
    FavoritesItemDB * m_favItemDB; // +0x18
    unsigned long long m_type; // +0x20
    FavoritesUploadVideoCompressor * m_videoCompressor; // +0x28
    FavoritesUploadFileSaver * m_fileSaver; // +0x30
    FavoritesUploadBaseProccessor * m_uploador; // +0x38
    id <FavoritesUploadMgrDelegate> _delegate; // +0x40
}
- (id)initWithType:(unsigned long long)arg1;
- (void)initDB:(id)arg1;
- (void)loadUploadingItems;
- (void)loadFailedQueue;
- (id)getUploadFailedItemList;
- (id)getUploadingItemList;
- (void)addUploadItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)stopUploadItem:(id)arg1;
- (void)realAddUploadItem:(id)arg1 isPrior:(BOOL)arg2;
- (BOOL)tryFixUrlThumbPath:(id)arg1;
- (id)tryRecoverSourcePathAndDeepCopyIfFavItemIsUploading:(id)arg1;
- (void)tryRecoverSourcePath:(id)arg1;
- (void)realStopUploadItem:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)removeItemInFailQueue:(id)arg1;
- (void)delUploadItem:(id)arg1;
- (void)stopUploadAllFavItem;
- (BOOL)isFavItemOnUploading:(id)arg1;
- (void)onProccessItem:(id)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
- (void)clearCdnInfo:(id)arg1;
- (void)saveCdnInfoInData:(id)arg1 forItem:(id)arg2 isThumb:(BOOL)arg3 withState:(int)arg4;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (void)updateCdnInfoInItem:(id)arg1;
- (BOOL)needUploadData:(id)arg1 ofType:(int)arg2 inItem:(id)arg3;
- (BOOL)needDownloadMsgOfData:(id)arg1 inItem:(id)arg2;
- (void)updateFavoritesItemCDNInfo:(id)arg1 inItem:(id)arg2;
- (void)reUploadFavItem:(id)arg1;
- (BOOL)updateCdnInfo:(id)arg1;
- (BOOL)deleteCdnInfo:(id)arg1;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(BOOL *)arg2;
- (unsigned long long)cleanCache;
- (BOOL)checkHasUnsafeTempFile:(id)arg1;
- (unsigned long long)preCleanGetCacheSize;
- (void)triggerCapacityExeedFavItemListReUpload:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
