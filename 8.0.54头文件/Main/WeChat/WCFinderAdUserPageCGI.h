@interface WCFinderAdUserPageCGI : WCFinderBaseCgi
{
    BOOL _needFansCount; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSString * _username; // +0x20
    unsigned long long _maxTid; // +0x28
    NSData * _lastBuffer; // +0x30
    unsigned long long _reportScene; // +0x38
    FinderClientStatus * _clientStatus; // +0x40
    NSString * _feedID; // +0x48
    NSString * _encryptedObjectId; // +0x50
}
- (id)initWithContactUsername:(id)arg1 maxTid:(unsigned long long)arg2 reportScene:(unsigned long long)arg3 needFansCount:(BOOL)arg4 lastBuffer:(id)arg5 clientStatus:(id)arg6 feedID:(id)arg7 encryptedObjectid:(id)arg8 successful:(id /* block */)arg9 failure:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)maxTid;
- (void)setMaxTid:(unsigned long long)arg1;
- (BOOL)needFansCount;
- (void)setNeedFansCount:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)encryptedObjectId;
- (void)setEncryptedObjectId:(id)arg1;
- (void).cxx_destruct;
@end

