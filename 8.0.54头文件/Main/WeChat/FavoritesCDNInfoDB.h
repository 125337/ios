@interface FavoritesCDNInfoDB : NSObject
{
    MyFavoritesDB * _mmDB; // +0x8
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)addCDNInfo:(id)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (BOOL)updateCdnInfo:(id)arg1;
- (id)getUploadCdnInfoByItemId:(unsigned int)arg1 LocalItemDataId:(id)arg2 andType:(int)arg3;
- (BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (BOOL)deleteCdnInfo:(id)arg1;
- (void).cxx_destruct;
@end

