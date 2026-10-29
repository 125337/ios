@interface WCFinderVideoProducerDataManager : NSObject <WCFinderVideoProducerDataProxy>
{
    NSMutableDictionary * _extConfigMap; // +0x8
    NSArray * _inputAssetInfoList; // +0x10
    NSArray * _inputAssetIdList; // +0x18
    NSString * _defaultTemplateId; // +0x20
    NSString * _createSameTemplateId; // +0x28
    NSString * _createSameMusicId; // +0x30
    NSString * _createSameFeedMusicId; // +0x38
    WCFinderVideoProducerOptions * _options; // +0x40
    NSArray * _AIAssetInfoList; // +0x48
    NSMutableArray * _defaultTemplateList; // +0x50
    NSMutableArray * _createSameTemplateList; // +0x58
    NSMutableArray * _stubTemplateList; // +0x60
    NSMutableArray * _launcherTemplateList; // +0x68
    NSMutableArray * _folderTemplateList; // +0x70
    NSMutableArray * _recommendTemplateList; // +0x78
    NSMutableArray * _extRecommendTemplateList; // +0x80
    NSMutableArray * _pickOutTemplateList; // +0x88
    NSMutableArray * _recommendMusicList; // +0x90
    NSMutableArray * _searchMusicList; // +0x98
    NSMutableDictionary * _extRecommendMusicInfoMap; // +0xa0
    WCFinderVideoProducerPreloadConfigs * _preloadConfigs; // +0xa8
    NSMutableSet * _editedImageFileNameSet; // +0xb0
    NSMutableSet * _wxDefaultAndCreateSameTemplateIdSet; // +0xb8
    NSMutableDictionary * _inputAssetPathIdentifierMap; // +0xc0
    WCMomentsPostReportSession * _postReportSession; // +0xc8
    NSObject<OS_dispatch_queue> * _candidateAssetConversionQueue; // +0xd0
}
+ (id)findTemplateById:(id)arg1 inList:(id)arg2;
+ (id)findMusicById:(id)arg1 inList:(id)arg2;
+ (BOOL)removeTemplateById:(id)arg1 fromList:(id)arg2;
+ (id)firstVideoFilePathInAssetInfoList:(id)arg1;
+ (void)loadDemoCacheFileForTemplate:(id)arg1 resultBlock:(id /* block */)arg2;
+ (id)candidateAssetError;
+ (id)fixedPreloadConfigs:(id)arg1;
+ (void)_checkTaskCount:(unsigned long long)arg1 forBlock:(id /* block */)arg2 withResult:(BOOL)arg3;
+ (BOOL)_isTemplate:(id)arg1 containedInList:(id)arg2;
+ (BOOL)_isMusic:(id)arg1 containedInList:(id)arg2;
- (id)initWithOptions:(id)arg1 inputAssetInfoList:(id)arg2;
- (void)dealloc;
- (void)_initData;
- (void)updateAIAssetInfoList:(id)arg1;
- (id)setExtConfig:(id)arg1 forKey:(id)arg2;
- (id)getExtConfigForKey:(id)arg1;
- (id)removeExtConfigForKey:(id)arg1;
- (id)convertOMJAssetInfoList;
- (void)prepareCandidateAssetContextWithAssetInfoList:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)commitCandidateAssetContext:(id)arg1 AIAssetInfoList:(id)arg2;
- (BOOL)commitInputAssetOccurrenceOrderWithOriginalIndexList:(id)arg1;
- (BOOL)discardCandidateAssetContext:(id)arg1;
- (void)cleanLocalCache;
- (id)candidateAssetInfoSnapshotFromAssetInfoList:(id)arg1;
- (BOOL)convertCandidateAssetInfoList:(id)arg1 convertedAssetInfoList:(id)arg2 editedImageFileNameSet:(id)arg3 assetPathIdentifierMap:(id)arg4;
- (id)convertOMJAssetInfoFromAssetInfo:(id)arg1 assetIdentifier:(id)arg2 editedImageFileNameSet:(id)arg3 assetPathIdentifierMap:(id)arg4;
- (void)adoptResourcesFromCandidateAssetContext:(id)arg1;
- (id)failedFileNamesAfterRemovingEditedImageFiles:(id)arg1;
- (void)trackEditedImageFilesForDeferredCleanup:(id)arg1;
- (id)getInputAssetInfoList;
- (id)getInputAssetIdList;
- (id)findAssetInfoByLocalIdentifier:(id)arg1;
- (id)findAssetInfoByFilePath:(id)arg1;
- (id)findTemplateById:(id)arg1;
- (BOOL)addPickOutTemplate:(id)arg1;
- (void)removeAllStubTemplates;
- (BOOL)removeExtRecommendTemplateById:(id)arg1;
- (void)insertUniqueSearchMusic:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllSearchMusics;
- (void)removeAllRecommendMusics;
- (id)getDefaultTemplateList;
- (id)getCreateSameTemplateList;
- (id)getStubTemplateList;
- (id)getLauncherTemplateList;
- (id)getFolderTemplateList;
- (id)getRecommendTemplateList;
- (id)getExtRecommendTemplateList;
- (id)getPickOutTemplateList;
- (id)getRecommendMusicList;
- (id)getSearchMusicList;
- (id)getExtRecommendMusicInfoListWithTemplateID:(id)arg1;
- (BOOL)shouldPreloadForRule:(unsigned long long)arg1;
- (void)updatePreloadProviderWithConfigs:(id)arg1;
- (id)genTemplatePreloadConfigForId:(id)arg1;
- (id)genMusicPreloadConfigForId:(id)arg1;
- (id)_genCenterDiffusionListFrom:(id)arg1 atCenterIndex:(long long)arg2 preferRightItem:(BOOL)arg3 includingCenterItem:(BOOL)arg4 maxCount:(long long)arg5;
- (id)_assembleAvailableTemplateList;
- (id)_assembleAvailableMusicList;
- (id)fetchTemplatesWithOptions:(id)arg1 localDataCompletion:(id /* block */)arg2 serverDataCompletion:(id /* block */)arg3 allDataCompletion:(id /* block */)arg4;
- (id)fetchMusicsFromTemplateId:(id)arg1 withSession:(id)arg2;
- (void)fetchExtRecommendMusicsFromTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 withSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)filterLocalTemplatesWithTemplateSession:(id)arg1 completion:(id /* block */)arg2;
- (void)skipNextFetching;
- (void)fetchMoreExtRecommendTemplatesFromTemplateSession:(id)arg1 withMusicRecommendationEnabled:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)getAnalysisDataFromTemplateSession:(id)arg1;
- (id)_fetchTemplatesWithOptions:(id)arg1 localDataCompletion:(id /* block */)arg2 serverDataCompletion:(id /* block */)arg3;
- (void)_addSkipFetchingMark;
- (void)_removeSkipFetchingMark;
- (BOOL)_shouldSkipFetching;
- (void)_fetchDefaultTemplatesWithMusicRecommendationEnabled:(BOOL)arg1 completionBlock:(id /* block */)arg2;
- (void)_fetchCreateSameTemplatesForTemplateId:(id)arg1 byScene:(unsigned long long)arg2 withMusicRecommendationEnabled:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)_fetchStubTemplatesForMaxCount:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)_fetchMJAppLauncherTemplatesWithCompletionBlock:(id /* block */)arg1;
- (void)_fetchFolderTemplateWithCompletionBlock:(id /* block */)arg1;
- (void)_fetchWXRecommendTemplatesForMaxCount:(unsigned long long)arg1 byScene:(unsigned long long)arg2 withMusicRecommendationEnabled:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (id)_getRecommendAdditionTemplateIDs;
- (void)_fetchMJRecommendTemplatesForMaxCount:(unsigned long long)arg1 fromTemplateSession:(id)arg2 withMusicRecommendationEnabled:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)_fetchExtRecommendTemplatesFromTemplateSession:(id)arg1 withMusicRecommendationEnabled:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (BOOL)_addExtRecommendTemplate:(id)arg1 atTopOfList:(BOOL)arg2;
- (id)_getRecommendPageCtxExtConfig;
- (void)_setRecommendPageCtxExtConfig:(id)arg1;
- (void)_removeRecommendPageCtxExtConfig;
- (id)_fetchMusicsFromTemplateId:(id)arg1 withSession:(id)arg2;
- (void)_fetchExtRecommendMusicsFromTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 withSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)exportVideoWithTemplateSession:(id)arg1 exportTemplateIndex:(long long)arg2 exportOptions:(id)arg3 exportTimeRange:(struct)arg4 exportSettings:(id)arg5 exportPath:(id)arg6 isAsyncExoport:(BOOL)arg7 progressHandler:(id /* block */)arg8 resultHandler:(id /* block */)arg9;
- (void)syncExportVideoWithTemplateSession:(id)arg1 exportTemplateIndex:(long long)arg2 exportOptions:(id)arg3 exportTimeRange:(struct)arg4 exportSettings:(id)arg5 exportPath:(id)arg6 progressHandler:(id /* block */)arg7 resultHandler:(id /* block */)arg8;
- (void)asyncExportVideoWithTemplateSession:(id)arg1 exportTemplateIndex:(long long)arg2 exportOptions:(id)arg3 exportTimeRange:(struct)arg4 exportSettings:(id)arg5 exportPath:(id)arg6 progressHandler:(id /* block */)arg7 resultHandler:(id /* block */)arg8;
- (id)inputAssetInfoList;
- (void)setInputAssetInfoList:(id)arg1;
- (id)inputAssetIdList;
- (void)setInputAssetIdList:(id)arg1;
- (id)defaultTemplateId;
- (id)createSameTemplateId;
- (void)setCreateSameTemplateId:(id)arg1;
- (id)createSameMusicId;
- (void)setCreateSameMusicId:(id)arg1;
- (id)createSameFeedMusicId;
- (void)setCreateSameFeedMusicId:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)AIAssetInfoList;
- (void)setAIAssetInfoList:(id)arg1;
- (id)defaultTemplateList;
- (void)setDefaultTemplateList:(id)arg1;
- (id)createSameTemplateList;
- (void)setCreateSameTemplateList:(id)arg1;
- (id)stubTemplateList;
- (void)setStubTemplateList:(id)arg1;
- (id)launcherTemplateList;
- (void)setLauncherTemplateList:(id)arg1;
- (id)folderTemplateList;
- (void)setFolderTemplateList:(id)arg1;
- (id)recommendTemplateList;
- (void)setRecommendTemplateList:(id)arg1;
- (id)extRecommendTemplateList;
- (void)setExtRecommendTemplateList:(id)arg1;
- (id)pickOutTemplateList;
- (void)setPickOutTemplateList:(id)arg1;
- (id)recommendMusicList;
- (void)setRecommendMusicList:(id)arg1;
- (id)searchMusicList;
- (void)setSearchMusicList:(id)arg1;
- (id)extRecommendMusicInfoMap;
- (void)setExtRecommendMusicInfoMap:(id)arg1;
- (id)preloadConfigs;
- (void)setPreloadConfigs:(id)arg1;
- (id)editedImageFileNameSet;
- (void)setEditedImageFileNameSet:(id)arg1;
- (id)wxDefaultAndCreateSameTemplateIdSet;
- (void)setWxDefaultAndCreateSameTemplateIdSet:(id)arg1;
- (id)inputAssetPathIdentifierMap;
- (void)setInputAssetPathIdentifierMap:(id)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (id)candidateAssetConversionQueue;
- (void)setCandidateAssetConversionQueue:(id)arg1;
- (void).cxx_destruct;
@end
