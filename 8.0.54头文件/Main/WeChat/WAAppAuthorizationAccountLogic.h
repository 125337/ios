@interface WAAppAuthorizationAccountLogic : NSObject
{
    NSString * _appId; // +0x8
    NSString * _scopeKey; // +0x10
}
- (id)initWithAppId:(id)arg1 scopeKey:(id)arg2;
- (void)requestSwitchAuthState:(unsigned int)arg1 accountId:(id)arg2 completeAction:(id /* block */)arg3;
- (void)requestDeleteAcctountById:(id)arg1 completeAction:(id /* block */)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)scopeKey;
- (void)setScopeKey:(id)arg1;
- (void).cxx_destruct;
@end

