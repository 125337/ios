@interface WCFinderModBlackListCgi : WCFinderBaseCgi
{
    unsigned int _optype; // +0x8
    unsigned int _opscene; // +0xc
    unsigned long long _refObjectid; // +0x10
    unsigned long long _refCommentid; // +0x18
    NSString * _username; // +0x20
    NSString * _fansid; // +0x28
    NSString * _anchorUsername; // +0x30
    NSString * _nonceID; // +0x38
    unsigned long long _refBulletCommentId; // +0x40
    NSString * _sessionId; // +0x48
    NSData * _mmlistenBypbuff; // +0x50
    id /* block */ _successBlock; // +0x58
    id /* block */ _failBlock; // +0x60
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
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
- (id)mmlistenBypbuff;
- (void)setMmlistenBypbuff:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
