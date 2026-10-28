@interface WCFinderFavTemplateCgi : WCFinderBaseCgi
{
    unsigned int _opType; // +0x8
    unsigned int _fromScene; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _templateID; // +0x18
    unsigned long long _timestampMs; // +0x20
    NSString * _sessionBuffer; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithFinderUsername:(id)arg1 templateID:(id)arg2 timeStampMs:(unsigned long long)arg3 opType:(unsigned int)arg4 fromScene:(unsigned int)arg5 sessionBuffer:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (unsigned long long)timestampMs;
- (void)setTimestampMs:(unsigned long long)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
