@interface FTSFavDB : NSObject
{
    FTSDB * _database; // +0x8
    BOOL _hasCheckOriginTags; // +0x10
    BOOL _checkOriginTagsSuccess; // +0x11
    NSMutableSet * _favOriginalTag; // +0x18
}
- (BOOL)initDB:(id)arg1;
- (unsigned int)getAllIndexCount;
- (void)dealloc;
- (void)checkFTS5State;
- (BOOL)haveFTS5Index:(id)arg1;
- (unsigned int)getMaxFavFts5UpdateSeq;
- (unsigned int)getMaxUnsyncLocalId;
- (BOOL)insertOrUpdateRowsInFavFTS5Table:(id)arg1 updateCount:(unsigned int *)arg2;
- (BOOL)deleteRowsInFavFTS5Table:(id)arg1;
- (id)queryTextInFavFTS5Table:(id)arg1 byType:(long long)arg2 tags:(id)arg3 cancelBlock:(id /* block */)arg4;
- (BOOL)clearFavFTS5Table;
- (BOOL)clearFavFTS3Table;
- (BOOL)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (BOOL)updateTagIndexFor:(id)arg1;
- (id)getAllFavTag;
- (id)getTagsMatch:(id)arg1;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (id)getFavOriginTagPath;
- (void)loadFavOriginTags;
- (void)saveFavOriginTags;
- (void)appendTagOf:(id)arg1;
- (void)checkWithOriginTags:(id)arg1 needSaveFlag:(BOOL)arg2;
- (id)getOriginTag:(id)arg1;
- (void)saveWithOriginalTags:(id)arg1 needSaveFlag:(BOOL)arg2;
- (id)favOriginalTag;
- (void)setFavOriginalTag:(id)arg1;
- (BOOL)hasCheckOriginTags;
- (void)setHasCheckOriginTags:(BOOL)arg1;
- (BOOL)checkOriginTagsSuccess;
- (void)setCheckOriginTagsSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

