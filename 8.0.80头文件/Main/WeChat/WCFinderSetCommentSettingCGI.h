@interface WCFinderSetCommentSettingCGI : WCFinderBaseCgi
{
    unsigned int _opType; // +0x8
    NSString * _objectID; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithObjectID:(id)arg1 blackWord:(id)arg2 opType:(unsigned int)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
