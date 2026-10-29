@interface WCFinderProfileAudioSection : NSObject <WCFindeProfileMusicSectionBase>
{
    BOOL _hasFetchFirstPage; // +0x8
    NSString * _finderUsername; // +0x10
    NSMutableArray * _items; // +0x18
    NSMutableSet * _itemIdSet; // +0x20
    MMListenCategoryItem * _category; // +0x28
    long long _secType; // +0x30
    WCFinderStreamLoadingState * _state; // +0x38
    long long _count; // +0x40
    NSString * _title; // +0x48
    id /* block */ _requestNext; // +0x50
    id /* block */ _onClickItem; // +0x58
}
+ (void)rmObserver:(id)arg1;
+ (id)categoryItemFromCollectionInfo:(id)arg1;
- (id)init;
- (void)requestNextPage;
- (void)addObserver:(id)arg1;
- (void)notifyDataChanged;
- (id)displayTitle;
- (id)sectionItems;
- (id)loadingState;
- (void)requestMore:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)itemIdSet;
- (void)setItemIdSet:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (BOOL)hasFetchFirstPage;
- (void)setHasFetchFirstPage:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)requestNext;
- (void)setRequestNext:(id /* block */)arg1;
- (id /* block */)onClickItem;
- (void)setOnClickItem:(id /* block */)arg1;
- (void).cxx_destruct;
@end

