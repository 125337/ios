@interface WCStoryDataItemDetailCgiObj : WCStoryBaseCGIObj
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    NSString * _dataItemId; // +0x18
}
- (id)initWithDataItemTid:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItemId;
- (void)setDataItemId:(id)arg1;
- (void).cxx_destruct;
@end
