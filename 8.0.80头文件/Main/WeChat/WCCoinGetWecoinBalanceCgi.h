@interface WCCoinGetWecoinBalanceCgi : WCBaseCgi
{
    BOOL _isPolling; // +0x8
    id /* block */ _callback; // +0x10
    long long _maxPollCount; // +0x18
    double _pollInterval; // +0x20
    long long _currentAttempt; // +0x28
    id <WCCoinBalancePollDelegate> _pollDelegate; // +0x30
}
- (id)init;
- (void)getWecoinBalance:(id /* block */)arg1;
- (void)pollWecoinBalanceWithMaxCount:(long long)arg1 interval:(double)arg2 delegate:(id)arg3;
- (void)firePollAttempt;
- (void)handlePollResultWithResponse:(id)arg1 success:(BOOL)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (BOOL)isPolling;
- (void)setIsPolling:(BOOL)arg1;
- (long long)maxPollCount;
- (void)setMaxPollCount:(long long)arg1;
- (double)pollInterval;
- (void)setPollInterval:(double)arg1;
- (long long)currentAttempt;
- (void)setCurrentAttempt:(long long)arg1;
- (id)pollDelegate;
- (void)setPollDelegate:(id)arg1;
- (void).cxx_destruct;
@end
