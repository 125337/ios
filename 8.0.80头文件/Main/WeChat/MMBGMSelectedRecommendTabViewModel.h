@interface MMBGMSelectedRecommendTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    BOOL _loadingData; // +0x9
    unsigned long long _bgmListType; // +0x10
    id /* block */ _dataLoadDidFinishBlock; // +0x18
    MMBGMUniqueMutableArray * _musicInfo; // +0x20
    NSData * _sessionBuffer; // +0x28
}
- (id)initWithPublishContext:(id)arg1;
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
- (void)removeMusicData:(id)arg1;
- (BOOL)isReccommentdTabModel;
- (id)musicInfo;
- (unsigned long long)bgmListType;
- (void)setBgmListType:(unsigned long long)arg1;
- (id /* block */)dataLoadDidFinishBlock;
- (void)setDataLoadDidFinishBlock:(id /* block */)arg1;
- (void)setMusicInfo:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
