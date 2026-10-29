@interface MMLiveFlowCancelationActionRegistration : NSObject
{
    id _userInfo; // +0x8
    NSString * _identifierStorage; // +0x10
    MMLiveFlowCancelationToken * _token; // +0x18
    id /* block */ _action; // +0x20
    unsigned long long _dispatchTarget; // +0x28
}
- (id)initWithCancelationToken:(id)arg1 action:(id /* block */)arg2 userInfo:(id)arg3 dispatchTarget:(unsigned long long)arg4;
- (id)identifier;
- (void)unregister;
- (void)invokeAction;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)identifierStorage;
- (void)setIdentifierStorage:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (unsigned long long)dispatchTarget;
- (void)setDispatchTarget:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
