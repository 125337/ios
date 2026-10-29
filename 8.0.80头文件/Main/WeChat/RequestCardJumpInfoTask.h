@interface RequestCardJumpInfoTask : NSObject
{
    int _cardType; // +0x8
    unsigned int _reqType; // +0xc
    id /* block */ _successCallback; // +0x10
    id /* block */ _failedCallback; // +0x18
    NSString * _passBuffer; // +0x20
    NSString * _path; // +0x28
    NSString * _key; // +0x30
    unsigned long long _executeTime; // +0x38
}
- (id)getKey;
- (id /* block */)successCallback;
- (void)setSuccessCallback:(id /* block */)arg1;
- (id /* block */)failedCallback;
- (void)setFailedCallback:(id /* block */)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (id)passBuffer;
- (void)setPassBuffer:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)reqType;
- (void)setReqType:(unsigned int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned long long)executeTime;
- (void)setExecuteTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
