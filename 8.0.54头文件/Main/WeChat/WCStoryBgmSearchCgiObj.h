@interface WCStoryBgmSearchCgiObj : WCStoryBaseCGIObj
{
    id /* block */ _completionBlock; // +0x8
}
- (id)initWithSearchId:(unsigned long long)arg1 searchKey:(id)arg2 pageOffset:(unsigned int)arg3 recommentId:(unsigned long long)arg4 bussId:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

