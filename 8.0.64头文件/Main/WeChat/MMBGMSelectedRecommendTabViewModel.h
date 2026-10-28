@interface MMBGMSelectedRecommendTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    BOOL _loadingData; // +0x9
    MMBGMUniqueMutableArray * _musicInfo; // +0x10
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
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (void)addMusicData:(id)arg1;
- (void)setMusicDataToFirst:(id)arg1;
- (BOOL)isReccommentdTabModel;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
