@interface FTSWeShopIndexMgr : FTSIndexMgr
{
    BOOL _isIndexing; // +0x8
    FTSWeShopDB * _ftsWeShopDB; // +0x10
}
- (id)initWithFTSDB:(id)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)fireWeShopIndexingTaskLoop;
- (BOOL)doWeShopIndexingTask;
- (id)ftsWeShopDB;
- (void)setFtsWeShopDB:(id)arg1;
- (BOOL)isIndexing;
- (void)setIsIndexing:(BOOL)arg1;
- (void).cxx_destruct;
@end
