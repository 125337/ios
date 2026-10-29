@interface WCFinderLiveGetExtraInfoCGI : WCFinderBaseCgi
{
    NSString * _anchorFinderusername; // +0x8
    NSString * _audiencefinderusername; // +0x10
    NSData * _liveCookies; // +0x18
    unsigned long long _objectId; // +0x20
    unsigned long long _liveId; // +0x28
    NSMutableArray * _reqlist; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithAnchorFinderusername:(id)arg1 audiencefinderusername:(id)arg2 liveCookies:(id)arg3 taskId:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 reqlist:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)anchorFinderusername;
- (void)setAnchorFinderusername:(id)arg1;
- (id)audiencefinderusername;
- (void)setAudiencefinderusername:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)reqlist;
- (void)setReqlist:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

