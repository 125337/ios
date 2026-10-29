@interface FTSAiHistorySearchTask : NSObject
{
    BOOL _cancelled; // +0x8
    unsigned long long _type; // +0x10
    NSString * _searchText; // +0x18
    unsigned long long _limit; // +0x20
    id <FTSAiHistorySearchTaskDelegate> _delegate; // +0x28
    unsigned long long _status; // +0x30
    NSArray * _resultItems; // +0x38
    FTSDB * _db; // +0x40
}
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 searchText:(id)arg2 limit:(unsigned long long)arg3 db:(id)arg4;
- (void)asyncSearch;
- (void)cancelSearch;
- (BOOL)isCompleted;
- (BOOL)isRunning;
- (BOOL)isCanceling;
- (BOOL)hasSearchDone;
- (BOOL)isHomeSearch;
- (unsigned long long)type;
- (id)searchText;
- (unsigned long long)limit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)resultItems;
- (void)setResultItems:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (void).cxx_destruct;
@end
