@interface MMBGMSelectedFavFeedSoundTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    id <MMBGMSelectedFavFeedSoundTabViewModelDelegate> _bgmFavVMDelegate; // +0x10
    MMBGMUniqueMutableArray * _musicItem; // +0x18
    NSData * _sessionBuffer; // +0x20
}
- (void)loadData;
- (void)loadMoreData;
- (void)_loadData:(BOOL)arg1;
- (BOOL)hasMoreData;
- (id)tabTitle;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (void)asyncGetMusicDataAtIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)musicItem;
- (id)bgmFavVMDelegate;
- (void)setBgmFavVMDelegate:(id)arg1;
- (void)setMusicItem:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
