@interface TingPlatformPlayList : NSObject <TingPlayTaskClient, ITingPlatformPlayList>
{
    TingTapeItem * _tapeItem; // +0x8
    id <TingPlayTaskService> _taskService; // +0x10
    id <TingPlayListListener> _listListener; // +0x18
    id <TingPlayTaskClient> _weakProxy; // +0x20
}
- (id)initWithTapeItem:(id)arg1 scene:(int)arg2;
- (id)initWithTapeItem:(id)arg1 scene:(int)arg2 config:(id)arg3;
- (void)dealloc;
- (void)applyListListener:(id)arg1;
- (void)loadMore;
- (BOOL)hasMore;
- (id)getItems;
- (void)onReloadItems:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onLoad:(id)arg1;
- (void)onLoadMore:(id)arg1;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onPreloadDone:(unsigned long long)arg1;
- (id)tapeItem;
- (void)setTapeItem:(id)arg1;
- (id)taskService;
- (void)setTaskService:(id)arg1;
- (id)listListener;
- (void)setListListener:(id)arg1;
- (id)weakProxy;
- (void)setWeakProxy:(id)arg1;
- (void).cxx_destruct;
@end
