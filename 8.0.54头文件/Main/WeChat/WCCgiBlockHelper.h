@interface WCCgiBlockHelper : NSObject <WCBaseCgiDelegate>
{
    WCBaseCgi * _baseCgi; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
+ (id)helperWithInitBlock:(id /* block */)arg1 startBlock:(id /* block */)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)callFailWithResponse:(id)arg1;
- (void)removeCallBack;
- (id)userDataForBaseCgi:(id)arg1;
- (void)baseCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)baseCgi:(id)arg1 didGetResponseData:(id)arg2;
- (void)baseCgi:(id)arg1 didFailWithError:(id)arg2 response:(id)arg3;
- (id)baseCgi;
- (void)setBaseCgi:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

