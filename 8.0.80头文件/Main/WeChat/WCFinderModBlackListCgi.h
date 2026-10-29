@interface WCFinderModBlackListCgi : WCFinderBaseCgi
{
    BOOL _useAllIdentity; // +0x8
    unsigned int _optype; // +0xc
    unsigned int _opscene; // +0x10
    NSData * _ctxBuffer; // +0x18
    unsigned long long _refObjectid; // +0x20
    unsigned long long _refCommentid; // +0x28
    NSString * _username; // +0x30
    NSString * _fansid; // +0x38
    NSString * _anchorUsername; // +0x40
    NSString * _nonceID; // +0x48
    unsigned long long _refBulletCommentId; // +0x50
    NSString * _sessionId; // +0x58
    unsigned long long _refLiveObjectId; // +0x60
    NSData * _mmlistenBypbuff; // +0x68
    id /* block */ _successBlock; // +0x70
    id /* block */ _failBlock; // +0x78
}
- (id)init;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (BOOL)useAllIdentity;
- (void)setUseAllIdentity:(BOOL)arg1;
- (id)ctxBuffer;
- (void)setCtxBuffer:(id)arg1;
- (unsigned long long)refObjectid;
- (void)setRefObjectid:(unsigned long long)arg1;
- (unsigned long long)refCommentid;
- (void)setRefCommentid:(unsigned long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)fansid;
- (void)setFansid:(id)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)refBulletCommentId;
- (void)setRefBulletCommentId:(unsigned long long)arg1;
- (unsigned int)opscene;
- (void)setOpscene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)refLiveObjectId;
- (void)setRefLiveObjectId:(unsigned long long)arg1;
- (id)mmlistenBypbuff;
- (void)setMmlistenBypbuff:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
