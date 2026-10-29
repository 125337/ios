@interface WCFinderMusicPlayListSection : NSObject
{
    long long _secType; // +0x8
    NSArray * _items; // +0x10
    NSString * _title; // +0x18
    long long _count; // +0x20
}
+ (BOOL)isContentSection:(long long)arg1;
- (long long)displayMaxCount;
- (BOOL)showMoreInMusicTab;
- (BOOL)showIndependentMoreCell;
- (BOOL)displayNestCell;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (void).cxx_destruct;
@end

