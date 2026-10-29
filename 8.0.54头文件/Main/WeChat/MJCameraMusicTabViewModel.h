@interface MJCameraMusicTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _loadingData; // +0x8
    BOOL _recommendedDataLoaded; // +0x9
    BOOL _hasMore; // +0xa
    id <MJCameraMusicTabViewModelDataSource> _dataSource; // +0x10
    id <MJCameraMusicTabViewModelDelegate> _cameraVMDelegate; // +0x18
    MMBGMUniqueMutableArray * _recommendedMusicInfos; // +0x20
    NSMutableArray * _musicInfos; // +0x28
    NSData * _sessionBuffer; // +0x30
    id <MMBGMSelectedMusicDataProtocol> _insertedMusicInfo; // +0x38
}
- (id)init;
- (void)loadData;
- (void)loadMoreData;
- (void)_clearLoadData;
- (void)refetchData;
- (void)reloadTemplateMusic;
- (unsigned long long)indexOfMusicId:(id)arg1;
- (void)_loadData:(BOOL)arg1;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)isReccommentdTabModel;
- (void)setMusicDataToFirst:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)cameraVMDelegate;
- (void)setCameraVMDelegate:(id)arg1;
- (id)recommendedMusicInfos;
- (void)setRecommendedMusicInfos:(id)arg1;
- (id)musicInfos;
- (void)setMusicInfos:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (BOOL)isRecommendedDataLoaded;
- (void)setRecommendedDataLoaded:(BOOL)arg1;
- (id)insertedMusicInfo;
- (void)setInsertedMusicInfo:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end

