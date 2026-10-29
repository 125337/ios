@interface QueryQRCodeOAuthStateCgi : WCBaseCgi
{
    BOOL _isCancel; // +0x8
    BOOL _hasHandleEcdhRollback; // +0x9
    unsigned int _lastErrcode; // +0xc
    NSString * _uuid; // +0x10
    NSString * _sdkToken; // +0x18
    id /* block */ _completion; // +0x20
}
- (id)initWithUUID:(id)arg1 lastErrcode:(unsigned int)arg2 isCancel:(BOOL)arg3 sdkToken:(id)arg4;
- (void)createRequest;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (unsigned int)lastErrcode;
- (void)setLastErrcode:(unsigned int)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (id)sdkToken;
- (void)setSdkToken:(id)arg1;
- (BOOL)hasHandleEcdhRollback;
- (void)setHasHandleEcdhRollback:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
