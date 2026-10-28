@interface WCFinderFeedSearchCgi : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
}
- (id)initWithQueryText:(id)arg1 tagTexts:(id)arg2 requestID:(id)arg3 interactionScene:(int)arg4 commentScene:(int)arg5 lastBuffer:(id)arg6 success:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
