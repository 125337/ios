@interface FavoritesFileRetainCountDB : NSObject
{
    MyFavoritesDB * _mmDB; // +0x8
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)isItemExist:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (id)getRetainItemByMd5:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)insertToFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (BOOL)updateRetainItemBy:(id)arg1 localId:(unsigned int)arg2 dataFmt:(id)arg3;
- (BOOL)deleteItemByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2;
- (BOOL)isMd5RetainCountZero:(id)arg1;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

