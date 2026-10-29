@interface MMFinderLiveKTVResourceMgr : MMUserService <MMFinderLiveKTVManageExt, WCFinderLiveExt, MMServiceProtocol>
{
    MMLiveResourceFetcherFanoutFlowAction * _downloadMgr; // +0x8
    OrderedDictionary * _songBasicInfoDic; // +0x10
    OrderedDictionary * _songResourceInfoDic; // +0x18
    MMLiveKtvThemeRepository * _themeRepository; // +0x20
    NSObject<OS_dispatch_queue> * _lyricNoteResProcessQueue; // +0x28
    NSMutableDictionary * _loadingTaskDict; // +0x30
}
+ (id)createTaskKeyWithSong:(id)arg1 needsSongResources:(BOOL)arg2 taskId:(id)arg3;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)resourcePath:(id)arg1 type:(unsigned int)arg2;
- (BOOL)checkResource:(id)arg1;
- (BOOL)checkSong:(id)arg1 resourceExist:(unsigned int)arg2;
- (BOOL)checkSongLyricNoteResExist:(id)arg1;
- (BOOL)isResTypeNecessary:(unsigned int)arg1 needsSongResources:(BOOL)arg2;
- (BOOL)isResTypeSourcedFromCdn:(unsigned int)arg1;
- (void)preloadKsResourceForSongItemsIfNeed:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (id)createDownloadTaskForSongItem:(id)arg1 needsSongResources:(BOOL)arg2;
- (void)checkResourceInfo:(id)arg1 taskId:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)loadResourceInfoIfNeed:(id)arg1;
- (void)fetchResourceInfo:(id)arg1 taskId:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)getResourceInfo:(id)arg1 taskId:(id)arg2 cacheInfo:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)getResourceInfo:(id)arg1 finderTaskId:(id)arg2 cacheInfo:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)getResourceInfo:(id)arg1 feedPreviewTaskId:(id)arg2 cacheInfo:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)saveQrcLyricAndNoteAsync:(id)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)createFetcherTasksForCdnResourcesInTask:(id)arg1;
- (void)cacheSongBasicInfo:(id)arg1 songId:(id)arg2;
- (id)getSongBasicInfo:(id)arg1;
- (void)checkSongBasicCacheOverLimit;
- (void)cacheSongResourceInfo:(id)arg1 songId:(id)arg2;
- (id)getSongResourceInfo:(id)arg1;
- (void)checkSongResourceCacheOverLimit;
- (BOOL)tryEnqueueLoadTaskWithSong:(id)arg1 needsSongResources:(BOOL)arg2 taskId:(id)arg3;
- (BOOL)outQueueLoadTaskWithSong:(id)arg1 needsSongResources:(BOOL)arg2 taskId:(id)arg3;
- (BOOL)outQueueLoadTaskWithTaskKey:(id)arg1;
- (id)createResLoadTaskWithTaskKey:(id)arg1;
- (id)getLiveTask:(id)arg1;
- (void)loadKsResource:(id)arg1 needsSongResources:(BOOL)arg2 taskId:(id)arg3;
- (void)loadKsBasicInfo:(id)arg1 taskId:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchThemeWithId:(id)arg1 fetchingProvider:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)fetchAllThemesWithFetchingProvider:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadThemeResource:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadResourcesForTheme:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)notifyResourcesLoadResultForTask:(id)arg1 success:(BOOL)arg2 taskId:(id)arg3;
- (void)onLiveKTVPendingSongItemsUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onLiveKTVFirstSongVersionUpdate:(unsigned int)arg1 pendingSongs:(id)arg2 source:(long long)arg3 taskId:(id)arg4;
- (void)onKtvSongModSuccessNotification:(int)arg1 songItem:(id)arg2 taskId:(id)arg3;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)songBasicInfoDic;
- (void)setSongBasicInfoDic:(id)arg1;
- (id)songResourceInfoDic;
- (void)setSongResourceInfoDic:(id)arg1;
- (id)themeRepository;
- (void)setThemeRepository:(id)arg1;
- (id)lyricNoteResProcessQueue;
- (void)setLyricNoteResProcessQueue:(id)arg1;
- (id)loadingTaskDict;
- (void)setLoadingTaskDict:(id)arg1;
- (void).cxx_destruct;
@end

