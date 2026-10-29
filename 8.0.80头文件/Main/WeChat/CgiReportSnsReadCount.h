@interface CgiReportSnsReadCount : WCBaseCgi
{
    NSArray * _items; // +0x8
    NSString * _reportId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)init;
- (void)startWithItems:(id)arg1 reportId:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)items;
- (void)setItems:(id)arg1;
- (id)reportId;
- (void)setReportId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
