@interface MMBGMSelectedRecentlyPlayedTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    BOOL _loadingData; // +0x9
    MMBGMUniqueMutableArray * _musicDataArray; // +0x10
    NSData * _sessionBuffer; // +0x18
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
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (void)addMusicData:(id)arg1;
- (void)removeMusicData:(id)arg1;
- (id)musicDataArray;
- (void)setMusicDataArray:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
