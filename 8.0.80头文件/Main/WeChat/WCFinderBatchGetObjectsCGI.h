@interface WCFinderBatchGetObjectsCGI : WCFinderBaseCgi
{
    BOOL _takeOverBusinessErrMsg; // +0x8
    int _batchLoadScene; // +0xc
    NSArray * _objectRequestArray; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithObjectId:(id)arg1 scene:(int)arg2 batchLoadScene:(int)arg3 takeOverBusinessErrMsg:(BOOL)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectRequestArray;
- (void)setObjectRequestArray:(id)arg1;
- (int)batchLoadScene;
- (void)setBatchLoadScene:(int)arg1;
- (BOOL)takeOverBusinessErrMsg;
- (void)setTakeOverBusinessErrMsg:(BOOL)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
