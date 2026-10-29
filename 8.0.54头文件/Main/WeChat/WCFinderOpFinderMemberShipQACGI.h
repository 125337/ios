@interface WCFinderOpFinderMemberShipQACGI : WCFinderBaseCgi
{
    int _oprType; // +0x8
    WCFinderUploadTask * _task; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _refObjectid; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithFinderUploadTask:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createPostRequest;
- (id)initWithFinderUsername:(id)arg1 refObjectid:(id)arg2 oprType:(int)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createOPRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)task;
- (void)setTask:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (int)oprType;
- (void)setOprType:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

