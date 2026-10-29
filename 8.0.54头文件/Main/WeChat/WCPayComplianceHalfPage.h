@interface WCPayComplianceHalfPage : NSObject <MMUseCaseCallback>
{
    id /* block */ _actionHandler; // +0x8
    long long _sessionId; // +0x10
}
+ (id)showWithData:(id)arg1 closedActionHandler:(id /* block */)arg2;
+ (id)showWithPbData:(id)arg1 closedActionHandler:(id /* block */)arg2;
- (void)show:(id)arg1;
- (void)close;
- (void)call:(id)arg1;
- (id /* block */)actionHandler;
- (void)setActionHandler:(id /* block */)arg1;
- (long long)sessionId;
- (void)setSessionId:(long long)arg1;
- (void).cxx_destruct;
@end

