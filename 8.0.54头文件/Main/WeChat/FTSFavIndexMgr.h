@interface FTSFavIndexMgr : FTSIndexMgr <IFavoritesExt>
{
    BOOL _hasNewIndexTask; // +0x8
    BOOL _hasValidateTask; // +0x9
    BOOL _isIndexing; // +0xa
    NSMutableSet * _needIndexFavId; // +0x10
    NSMutableSet * _needBatchGetFavId; // +0x18
    NSMutableSet * _invalidateBatchGetFavId; // +0x20
    NSMutableDictionary * _cacheTags; // +0x28
    FTS5FavMigrationInfo * _favMigrationInfo; // +0x30
    FTSFavDB * _ftsFavDB; // +0x38
}
- (id)initWithFTSDB:(id)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)addBatchGetItem:(id)arg1;
- (BOOL)removeBatchGetItem:(id)arg1 isFromDelete:(BOOL)arg2;
- (void)markMigrationStart;
- (void)markMigrationFinish;
- (id)pathForMigrationRecord;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)fireFavIndexingTaskLoop;
- (BOOL)internalFTS5IndexingTaskWithNeedIndexFavId:(id)arg1 needBatchGetFavItem:(id)arg2 hasBuildIndexFavId:(id)arg3;
- (id)getCacheTags;
- (id)getLocalIdSetFromCacheByTag:(id)arg1;
- (void)internalIndexingDropTask;
- (id)ftsFavDB;
- (void)setFtsFavDB:(id)arg1;
- (void).cxx_destruct;
@end

