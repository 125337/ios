@interface MMBGMCategoryDetailTabViewModel : MMBGMSelectedTabViewModel
{
    BOOL _hasMore; // +0x8
    MMBGMCategoryItem * _categoryItem; // +0x10
    MMBGMUniqueMutableArray * _musicItem; // +0x18
    NSData * _sessionBuffer; // +0x20
}
- (void)updateWithBGMCategory:(id)arg1;
- (BOOL)isSameCategory:(id)arg1;
- (void)loadData;
- (void)loadMoreData;
- (void)clearData;
- (void)_loadData:(BOOL)arg1;
- (BOOL)hasMoreData;
- (unsigned long long)dataCount;
- (unsigned long long)tabType;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (id)musicItem;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (void)setMusicItem:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end

