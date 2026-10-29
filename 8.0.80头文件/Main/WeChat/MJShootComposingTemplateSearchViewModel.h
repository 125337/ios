@interface MJShootComposingTemplateSearchViewModel : MJShootComposingTemplateTabViewModel
{
    BOOL _isFetching; // +0x8
    id <MJShootComposingTemplateSearchViewModelDelegate> _delegate; // +0x10
    NSString * _currentQueryWord; // +0x18
    NSMutableArray * _searchResults; // +0x20
    NSData * _lastPageBuf; // +0x28
    long long _lastContinueFlag; // +0x30
    NSObject<OS_dispatch_queue> * _actionQueue; // +0x38
    unsigned long long _currentRequestID; // +0x40
}
- (id)initWithCamEffectBizScene:(unsigned long long)arg1;
- (void)searchWithQueryWord:(id)arg1 completion:(id /* block */)arg2;
- (void)loadMoreIfNeeded;
- (void)reset;
- (void)_startSearchWithQueryWord:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)_handleSuccessWithRequestID:(unsigned long long)arg1 videoTemplates:(id)arg2 pageBuf:(id)arg3 continueFlag:(unsigned long long)arg4 firstPage:(BOOL)arg5;
- (void)_handleFailureWithRequestID:(unsigned long long)arg1 ret:(int)arg2 errMsg:(id)arg3;
- (id)_convertTemplates:(id)arg1;
- (void)_resetStates;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentQueryWord;
- (void)setCurrentQueryWord:(id)arg1;
- (id)searchResults;
- (void)setSearchResults:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)lastPageBuf;
- (void)setLastPageBuf:(id)arg1;
- (long long)lastContinueFlag;
- (void)setLastContinueFlag:(long long)arg1;
- (id)actionQueue;
- (void)setActionQueue:(id)arg1;
- (unsigned long long)currentRequestID;
- (void)setCurrentRequestID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
