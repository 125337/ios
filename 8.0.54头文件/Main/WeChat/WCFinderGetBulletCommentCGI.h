@interface WCFinderGetBulletCommentCGI : WCFinderBaseCgi
{
    int _selectedSource; // +0x8
    int _commentScene; // +0xc
    NSString * _objectId; // +0x10
    NSString * _objectNonceId; // +0x18
    unsigned long long _startTimestamp; // +0x20
    NSData * _lastBuffer; // +0x28
    id /* block */ _successful; // +0x30
    id /* block */ _failure; // +0x38
}
- (id)initWithObjectId:(id)arg1 objectNonceId:(id)arg2 startTimestamp:(unsigned long long)arg3 lastBuffer:(id)arg4 selectedSource:(int)arg5 commentScene:(int)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)selectedSource;
- (void)setSelectedSource:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

