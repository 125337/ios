@interface WCFinderStreamProfileMusicPlaylist : WCFinderMusicPlayListSection <WCFindeProfileMusicSectionBase>
{
    NSString * _username; // +0x8
    WCFinderStreamLoadingState * _state; // +0x10
    id /* block */ _fillRequestBlock; // +0x18
    id /* block */ _fillFromResponseBlock; // +0x20
    NSData * _lastBuff; // +0x28
    NSMutableArray * _mutCategoryItems; // +0x30
}
+ (void)removeAllObserver:(id)arg1;
- (id)init;
- (void)requestNextPage;
- (void)appendCategoryList:(id)arg1;
- (id)categoryItems;
- (void)setItems:(id)arg1;
- (id)items;
- (void)registerKeyExtension:(id)arg1;
- (id)sectionItems;
- (id)displayTitle;
- (id)loadingState;
- (id)finderUsername;
- (void)requestMore:(id /* block */)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)state;
- (id /* block */)fillRequestBlock;
- (void)setFillRequestBlock:(id /* block */)arg1;
- (id /* block */)fillFromResponseBlock;
- (void)setFillFromResponseBlock:(id /* block */)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)mutCategoryItems;
- (void)setMutCategoryItems:(id)arg1;
- (void).cxx_destruct;
@end
