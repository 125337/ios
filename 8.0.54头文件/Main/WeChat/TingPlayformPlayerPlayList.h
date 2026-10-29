@interface TingPlayformPlayerPlayList : NSObject <TingPlayTaskClient, ITingPlatformPlayList>
{
    id <TingPlayListListener> _listListener; // +0x8
    id <TingPlayTaskClient> _weakProxy; // +0x10
}
+ (BOOL)hasPlayingPlayList;
+ (id)taskService;
- (void)loadMore;
- (BOOL)hasMore;
- (id)getItems;
- (void)dealloc;
- (void)applyListListener:(id)arg1;
- (void)onReloadItems:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onLoad:(id)arg1;
- (void)onLoadMore:(id)arg1;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onPlayTaskServiceRefresh:(id)arg1;
- (id)listListener;
- (void)setListListener:(id)arg1;
- (id)weakProxy;
- (void)setWeakProxy:(id)arg1;
- (void).cxx_destruct;
@end

