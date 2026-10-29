@interface SendPatCgi : WCBaseCgi
{
    SendPatWrap * _sendPatWrap; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (id)init;
- (void)sendPatWithSuccessBlock:(id /* block */)arg1 andFailureBlock:(id /* block */)arg2;
- (void)retrievePatSuffixWithSuccessBlock:(id /* block */)arg1;
- (void)setSendPatWrap:(id)arg1;
- (id)fromUserName;
- (id)pattedUserName;
- (id)chatUserName;
- (BOOL)isRetrievePatSuffix;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)sendPatWrap;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
