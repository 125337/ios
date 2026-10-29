@interface WAGameDirectPlayBoxListViewModel : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _didLoad; // +0x9
    BOOL _hasNext; // +0xa
    unsigned int _nextOffset; // +0xc
    unsigned int _pageSize; // +0x10
    id <WAGameDirectPlayBoxListViewModelDelegate> _delegate; // +0x18
    NSMutableArray * _mutableGames; // +0x20
    unsigned long long _fetchSeq; // +0x28
}
- (id)init;
- (id)games;
- (void)fetch;
- (void)fetchNextPageIfNeeded;
- (void)requestPageIsFirstPage:(BOOL)arg1;
- (id)buildGameRequestCtx;
- (void)onResponse:(id)arg1 seq:(unsigned long long)arg2 isFirstPage:(BOOL)arg3 requestStart:(double)arg4;
- (void)processResponseOnMain:(id)arg1 seq:(unsigned long long)arg2 isFirstPage:(BOOL)arg3 requestStart:(double)arg4;
- (id)errorWithCode:(long long)arg1 desc:(id)arg2 userInfo:(id)arg3;
- (void)handleFailure:(id)arg1 isFirstPage:(BOOL)arg2;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)didLoad;
- (void)setDidLoad:(BOOL)arg1;
- (BOOL)hasNext;
- (void)setHasNext:(BOOL)arg1;
- (unsigned int)nextOffset;
- (void)setNextOffset:(unsigned int)arg1;
- (unsigned int)pageSize;
- (void)setPageSize:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mutableGames;
- (void)setMutableGames:(id)arg1;
- (unsigned long long)fetchSeq;
- (void)setFetchSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
