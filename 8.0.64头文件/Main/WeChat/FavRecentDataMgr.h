@interface FavRecentDataMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrRecentFavDatas; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveRecentFavDatas;
- (void)updateFavoritesItemByLocalId:(unsigned int)arg1;
- (void)removeFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getRecentFavoritesItem;
- (id)arrRecentFavDatas;
- (void)setArrRecentFavDatas:(id)arg1;
- (void).cxx_destruct;
@end
