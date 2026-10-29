@interface WCFinderBatchGetObjectsCGI : WCFinderBaseCgi
{
    int _batchLoadScene; // +0x8
    NSArray * _objectRequestArray; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithObjectId:(id)arg1 scene:(int)arg2 batchLoadScene:(int)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectRequestArray;
- (void)setObjectRequestArray:(id)arg1;
- (int)batchLoadScene;
- (void)setBatchLoadScene:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

