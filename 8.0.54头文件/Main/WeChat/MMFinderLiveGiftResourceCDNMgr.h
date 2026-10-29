@interface MMFinderLiveGiftResourceCDNMgr : MMFinderLiveGiftResourceBaseMgr <ICdnComMgrExt, MMServiceProtocol>
{
    NSRecursiveLock * _cacheLock; // +0x8
    NSObject<OS_dispatch_queue> * _cacheQueue; // +0x10
    NSMutableDictionary * _thumbnailCaches; // +0x18
    NSMutableDictionary * _fullPagFileCaches; // +0x20
    NSMutableDictionary * _landscapeFullPagFileCaches; // +0x28
    NSMutableDictionary * _previewPagFileCaches; // +0x30
    NSMutableDictionary * _textCustomizationPreviewPagFileCaches; // +0x38
    NSMutableDictionary * _giftForegroundPAGFileCaches; // +0x40
    NSMutableDictionary * _fullRfxPagFileCaches; // +0x48
    NSMutableDictionary * _landscapeFullRfxPagFileCaches; // +0x50
    NSMutableDictionary * _previewRfxPagFileCaches; // +0x58
    NSMutableDictionary * _textCustomizationPreviewRfxPagFileCaches; // +0x60
    NSMutableDictionary * _giftForegroundRfxPAGFileCaches; // +0x68
    NSMutableDictionary * _newedCustomizationComponentValueThumbnailCaches; // +0x70
    NSMutableDictionary * _interactionGiftFileCaches; // +0x78
    NSMutableDictionary * _attackGiftFileCaches; // +0x80
    NSMutableDictionary * _anchorCustomizeImageCaches; // +0x88
    NSMutableDictionary * _requestObjectDict; // +0x90
    NSMutableArray * _waittingRequestObjectQueue; // +0x98
    NSMutableArray * _downloadingRequestObjectQueue; // +0xa0
    MMTimer * _memoryCacheManagementTimer; // +0xa8
}
- (void)onServiceInit;
- (void)dealloc;
- (void)stopAllDownLoad;
- (void)stopAllPreloadDownLoad;
- (unsigned long long)currentDownloadingCount;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 isPreload:(BOOL)arg6 oberver:(id)arg7 extra:(id)arg8;
- (void)cancelLoadForResourceId:(id)arg1 targetURL:(id)arg2 resourceType:(long long)arg3 oberver:(id)arg4;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cleanUnusedGiftResources;
- (void)cleanGiftResourceCaches;
- (BOOL)startDownloadWithProprietaryDownloadWithMediaInfo:(id)arg1;
- (void)tryResumeNextDownloadRequest;
- (void)retryDownLoadForRequestObj:(id)arg1;
- (BOOL)checkGiftResExistenceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (void)clearGiftResourceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)_getRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5;
- (id)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)_getPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5;
- (void)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)_getRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 maybeAsyncBlock:(id /* block */)arg6;
- (void)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)_getPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 maybeAsyncBlock:(id /* block */)arg6;
- (id)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getNewCustomizationComponentValueThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (void)getNewCustomizationComponentValueThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (id)unzipPathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (void)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(id /* block */)arg3;
- (id)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (void)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(id /* block */)arg3;
- (id)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(id /* block */)arg4;
- (id)filterInvalidateCatalogue:(id)arg1;
- (id)readDataFromFile:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)taskKeyForResourceId:(id)arg1 uri:(id)arg2 resourceType:(long long)arg3;
- (BOOL)loadFromCachePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 memoryCacheOptions:(unsigned long long)arg4 extraInfo:(id)arg5;
- (id)getCdnComInfoForRequestObj:(id)arg1;
- (void)setCrashProtectKeyForProductId:(id)arg1 fileMD5:(id)arg2;
- (void)clearCrashProtectKeyForProductId:(id)arg1 fileMD5:(id)arg2;
- (void)performRecurrentMemoryCacheManagement;
- (void)purgeUnusedObjectsInMemoryCache:(id)arg1;
- (BOOL)useProprietaryProtocol;
- (id)cacheLock;
- (void)setCacheLock:(id)arg1;
- (id)cacheQueue;
- (void)setCacheQueue:(id)arg1;
- (id)thumbnailCaches;
- (void)setThumbnailCaches:(id)arg1;
- (id)fullPagFileCaches;
- (void)setFullPagFileCaches:(id)arg1;
- (id)landscapeFullPagFileCaches;
- (void)setLandscapeFullPagFileCaches:(id)arg1;
- (id)previewPagFileCaches;
- (void)setPreviewPagFileCaches:(id)arg1;
- (id)textCustomizationPreviewPagFileCaches;
- (void)setTextCustomizationPreviewPagFileCaches:(id)arg1;
- (id)giftForegroundPAGFileCaches;
- (void)setGiftForegroundPAGFileCaches:(id)arg1;
- (id)fullRfxPagFileCaches;
- (void)setFullRfxPagFileCaches:(id)arg1;
- (id)landscapeFullRfxPagFileCaches;
- (void)setLandscapeFullRfxPagFileCaches:(id)arg1;
- (id)previewRfxPagFileCaches;
- (void)setPreviewRfxPagFileCaches:(id)arg1;
- (id)textCustomizationPreviewRfxPagFileCaches;
- (void)setTextCustomizationPreviewRfxPagFileCaches:(id)arg1;
- (id)giftForegroundRfxPAGFileCaches;
- (void)setGiftForegroundRfxPAGFileCaches:(id)arg1;
- (id)newedCustomizationComponentValueThumbnailCaches;
- (void)setNewedCustomizationComponentValueThumbnailCaches:(id)arg1;
- (id)interactionGiftFileCaches;
- (void)setInteractionGiftFileCaches:(id)arg1;
- (id)attackGiftFileCaches;
- (void)setAttackGiftFileCaches:(id)arg1;
- (id)anchorCustomizeImageCaches;
- (void)setAnchorCustomizeImageCaches:(id)arg1;
- (id)requestObjectDict;
- (void)setRequestObjectDict:(id)arg1;
- (id)waittingRequestObjectQueue;
- (void)setWaittingRequestObjectQueue:(id)arg1;
- (id)downloadingRequestObjectQueue;
- (void)setDownloadingRequestObjectQueue:(id)arg1;
- (id)memoryCacheManagementTimer;
- (void)setMemoryCacheManagementTimer:(id)arg1;
- (void).cxx_destruct;
@end

