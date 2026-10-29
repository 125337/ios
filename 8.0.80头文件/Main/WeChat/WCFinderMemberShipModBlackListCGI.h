@interface WCFinderMemberShipModBlackListCGI : WCFinderBaseCgi
{
    int _opType; // +0x8
    int _acctType; // +0xc
    NSString * _finderUsername; // +0x10
    long long _objectId; // +0x18
    long long _commenTid; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 objectId:(unsigned long long)arg2 commenTid:(unsigned long long)arg3 opType:(int)arg4 acctType:(int)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (long long)objectId;
- (void)setObjectId:(long long)arg1;
- (long long)commenTid;
- (void)setCommenTid:(long long)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (int)acctType;
- (void)setAcctType:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
