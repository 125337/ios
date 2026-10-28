@interface FTSFavSearchResultItem : NSObject <_TtP6WeChat11FTSRowModel_>
{
    unsigned int _localId; // +0x8
    unsigned int _updateTime; // +0xc
    FavoritesItem * _favItem; // +0x10
}
- (id)userName;
- (id)diffIdentifier;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (void).cxx_destruct;
@end
