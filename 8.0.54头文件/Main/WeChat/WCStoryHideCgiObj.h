@interface WCStoryHideCgiObj : WCStoryBaseCGIObj
{
    BOOL _isInvisibility; // +0x8
    id /* block */ _dbSyncBlock; // +0x10
    NSString * _dataItemTid; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithDataItemTid:(id)arg1 isInvisibility:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)dbSyncBlock;
- (void)setDbSyncBlock:(id /* block */)arg1;
- (id)dataItemTid;
- (void)setDataItemTid:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (BOOL)isInvisibility;
- (void)setIsInvisibility:(BOOL)arg1;
- (void).cxx_destruct;
@end

