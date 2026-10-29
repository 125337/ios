@interface FTSAiHistoryIndexMgr : FTSIndexMgr
{
    BOOL _isIndexing; // +0x8
}
- (id)initWithFTSDB:(id)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)fireAiHistoryIndexingTaskLoop;
- (BOOL)doAiHistoryIndexingTask;
- (BOOL)isIndexing;
- (void)setIsIndexing:(BOOL)arg1;
@end
