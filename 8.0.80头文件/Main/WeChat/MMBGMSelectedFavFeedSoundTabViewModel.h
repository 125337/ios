@interface MMBGMSelectedFavFeedSoundTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    BOOL _loadingData; // +0x9
    id <MMBGMSelectedFavFeedSoundTabViewModelDelegate> _bgmFavVMDelegate; // +0x10
    MMBGMSelectedLocalImportData * _importedLocalData; // +0x18
    MMBGMUniqueMutableArray * _musicItem; // +0x20
    NSData * _sessionBuffer; // +0x28
    MMBGMSelectedLocalImportData * _localImportEntranceData; // +0x30
    MMBGMSelectedLocalImportData * _localImportHeaderData; // +0x38
}
- (void)loadData;
- (void)loadMoreData;
- (void)reloadData;
- (void)fetchFirstPageDataWithCompletion:(id /* block */)arg1;
- (void)_loadData:(BOOL)arg1;
- (void)_loadData:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (BOOL)needsLoadData;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (void)addMusicData:(id)arg1;
- (void)removeMusicData:(id)arg1;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (unsigned long long)numberOfLocalImportRow;
- (unsigned long long)numberOfLocalHeaderRowsBeforeMusicList;
- (unsigned long long)numberOfRowsBeforeMusicItems;
- (BOOL)shouldShowLocalImportEmptyState;
- (BOOL)hasImportedLocalData;
- (id)musicItem;
- (id)localImportEntranceData;
- (id)localImportHeaderData;
- (id)bgmFavVMDelegate;
- (void)setBgmFavVMDelegate:(id)arg1;
- (id)importedLocalData;
- (void)setImportedLocalData:(id)arg1;
- (void)setMusicItem:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void)setLocalImportEntranceData:(id)arg1;
- (void)setLocalImportHeaderData:(id)arg1;
- (void).cxx_destruct;
@end
