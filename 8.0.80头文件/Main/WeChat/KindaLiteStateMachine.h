@interface KindaLiteStateMachine : NSObject
{
    id /* block */ _stateChangeHandler; // +0x8
    long long _state; // +0x10
    id /* block */ _sessionIdProvider; // +0x18
    id <KindaLiteEffects> _effects; // +0x20
}
- (id)initWithSessionIdProvider:(id /* block */)arg1 effects:(id)arg2;
- (long long)current;
- (id)stateName:(long long)arg1;
- (id)effectNameForItem:(id)arg1;
- (id)effectsSummary:(id)arg1;
- (void)dispatchStartRequested:(id)arg1 data:(id)arg2;
- (void)dispatchStopRequested;
- (void)dispatchLiteAppDestroyed;
- (void)dispatchJsRunning;
- (void)dispatchJsPaying;
- (void)dispatchJsPaySucceeded;
- (void)dispatchStartFailed;
- (void)dispatchStartCancelled;
- (id)effect:(long long)arg1;
- (void)dispatchWithReducer:(id /* block */)arg1 reason:(id)arg2;
- (void)reportUnexpectedEvent:(id)arg1;
- (void)transitionTo:(long long)arg1 reason:(id)arg2;
- (id /* block */)stateChangeHandler;
- (void)setStateChangeHandler:(id /* block */)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id /* block */)sessionIdProvider;
- (void)setSessionIdProvider:(id /* block */)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;
- (void).cxx_destruct;
@end
