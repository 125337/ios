@interface FavoritesFileMgr : MMUserService <MMServiceProtocol>
{
    FavoritesFileRetainCountDB * _frcDB; // +0x8
    NSMutableArray * m_checkFileItemIdList; // +0x10
    BOOL _forbidCheck; // +0x18
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)incFileRetainCountByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (BOOL)decFileRetainCountByMd5:(id)arg1 IsThumb:(BOOL)arg2 ItemLocalId:(unsigned int)arg3 DataFmt:(id)arg4;
- (void)setForbidCheck:(BOOL)arg1;
- (void)addItemToCheckFileList:(id)arg1;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (void)checkAndCleanUnRetainFileWithFavItem:(id)arg1;
- (BOOL)forbidCheck;
- (void).cxx_destruct;
@end

