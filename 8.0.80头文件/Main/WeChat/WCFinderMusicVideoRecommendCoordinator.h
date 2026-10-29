@interface WCFinderMusicVideoRecommendCoordinator : NSObject
{
    id /* block */ _updateBlock; // +0x8
    id /* block */ _downloadProgressBlock; // +0x10
    NSDictionary * _reportParams; // +0x18
    unsigned long long _sourceObjectId; // +0x20
    FinderMusicTopicInfo * _musicTopicInfo; // +0x28
    FinderMusicVideoFilterInfo * _filterInfo; // +0x30
    NSObject<OS_dispatch_queue> * _workQueue; // +0x38
    unsigned long long _generation; // +0x40
    unsigned long long _runState; // +0x48
    NSMutableDictionary * _itemMap; // +0x50
    WCFinderMusicVideoFilterCGI * _cgi; // +0x58
    MMSystemAuthCancellableToken * _photoAuthToken; // +0x60
    long long _photoAuthorizationStatus; // +0x68
    WCFinderMusicVideoResourceLoader * _resourceLoader; // +0x70
    unsigned long long _pageVisibility; // +0x78
    NSMutableOrderedSet * _downloadIdentifiers; // +0x80
    NSMutableDictionary * _activeDownloadLoaders; // +0x88
}
- (id)initWithSourceObjectId:(unsigned long long)arg1;
- (void)dealloc;
- (void)startWithMusicTopicInfo:(id)arg1;
- (void)attachMusicTopicInfo:(id)arg1;
- (void)showBusinessAuthorization;
- (void)rejectAuthorization;
- (BOOL)isReadablePhotoAuthorizationStatus:(long long)arg1;
- (BOOL)isFinderPhotoAuthorized;
- (void)startAnalysisWithPhotoAuthorizationIfNeeded:(unsigned long long)arg1;
- (void)startAnalysis;
- (void)collectCandidatesForGeneration:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)collectAssetAtIndex:(unsigned long long)arg1 fetchResult:(id)arg2 result:(id)arg3 stats:(id)arg4 generation:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (BOOL)passesMetadataFilterForResource:(id)arg1;
- (BOOL)passesCheapFilter:(id)arg1;
- (BOOL)passesMetadataFilter:(id)arg1;
- (void)analyzeBatch:(id)arg1 generation:(unsigned long long)arg2 index:(unsigned long long)arg3 requestItems:(id)arg4 completion:(id /* block */)arg5;
- (void)filterBatch:(id)arg1 context:(id)arg2 nextIndex:(unsigned long long)arg3 generation:(unsigned long long)arg4;
- (void)finishFilterBatches:(id)arg1 generation:(unsigned long long)arg2;
- (void)advanceFilterBatch:(id)arg1 generation:(unsigned long long)arg2;
- (id)weclipEmbeddingsForAsset:(id)arg1 frameCount:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (id)sampleTimesForAsset:(id)arg1 frameCount:(unsigned long long)arg2;
- (id)requestItemWithCandidate:(id)arg1 cacheEntry:(id)arg2 generation:(unsigned long long)arg3;
- (void)completeWithIdentifiers:(id)arg1 inputCount:(unsigned long long)arg2 generation:(unsigned long long)arg3 logAction:(id)arg4 start:(double)arg5;
- (void)completeBypassingFilter:(id)arg1 generation:(unsigned long long)arg2;
- (void)validateVisibleItems;
- (BOOL)isItemAvailable:(id)arg1;
- (BOOL)validateItemBeforeOpen:(id)arg1;
- (void)configurePreviewForItem:(id)arg1;
- (void)acceptVisibleItems:(id)arg1;
- (id)visibleItemWithIdentifier:(id)arg1;
- (void)replaceVisibleItem:(id)arg1 notify:(BOOL)arg2;
- (void)enqueueVisibleDownloads;
- (void)advanceDownloads;
- (void)startDownloadForItem:(id)arg1;
- (void)prioritizeDownloadForItem:(id)arg1;
- (void)pauseDownloads;
- (void)setPageVisible:(BOOL)arg1;
- (void)onEnterBackground;
- (void)onBecomeActive;
- (BOOL)prepareItemForOpen:(id)arg1;
- (unsigned long long)normalizedFrameCount;
- (unsigned long long)normalizedDisplayCount;
- (unsigned long long)normalizedCacheCount;
- (BOOL)isGenerationValid:(unsigned long long)arg1;
- (void)publishItems:(id)arg1 generation:(unsigned long long)arg2;
- (void)cancelCurrentWorkKeepingState;
- (void)cancel;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)downloadProgressBlock;
- (void)setDownloadProgressBlock:(id /* block */)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (unsigned long long)sourceObjectId;
- (void)setSourceObjectId:(unsigned long long)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)filterInfo;
- (void)setFilterInfo:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (unsigned long long)runState;
- (void)setRunState:(unsigned long long)arg1;
- (id)itemMap;
- (void)setItemMap:(id)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (id)photoAuthToken;
- (void)setPhotoAuthToken:(id)arg1;
- (long long)photoAuthorizationStatus;
- (void)setPhotoAuthorizationStatus:(long long)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (unsigned long long)pageVisibility;
- (void)setPageVisibility:(unsigned long long)arg1;
- (id)downloadIdentifiers;
- (void)setDownloadIdentifiers:(id)arg1;
- (id)activeDownloadLoaders;
- (void)setActiveDownloadLoaders:(id)arg1;
- (void).cxx_destruct;
@end
