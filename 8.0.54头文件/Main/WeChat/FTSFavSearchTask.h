@interface FTSFavSearchTask : NSObject
{
    NSMutableArray * m_resultArr; // +0x8
    NSMutableArray * m_dbResultArr; // +0x10
    BOOL m_isCancel; // +0x18
    BOOL m_isRuning; // +0x19
    FTSFavDB * m_favFTSDB; // +0x20
    NSMutableArray * m_arrLastQueryTerm; // +0x28
    BOOL _hasSearchDone; // +0x30
    NSString * _taskKey; // +0x38
    id <FTSFavSearchTaskDelegate> _delegate; // +0x40
    NSString * _newestQueryText; // +0x48
    NSString * _lastQueryText; // +0x50
}
- (id)initWithDB:(id)arg1;
- (void)dealloc;
- (void)setLastQueryText:(id)arg1;
- (void)asyncFTSSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)syncFTSSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)loadMoreSearchContent;
- (id)loadMoreSearchContentFromDBResult:(int)arg1 deletedItemCount:(int *)arg2;
- (void)cancelSearch;
- (unsigned int)getCurrentResultCount;
- (unsigned int)getTotalResultCount;
- (id)getItemAtIndex:(unsigned int)arg1;
- (id)getAllResultItem;
- (id)arrLastQueryTerm;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)lastQueryText;
- (BOOL)hasSearchDone;
- (void)setHasSearchDone:(BOOL)arg1;
- (void).cxx_destruct;
@end

