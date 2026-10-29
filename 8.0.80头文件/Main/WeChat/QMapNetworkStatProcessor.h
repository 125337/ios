@interface QMapNetworkStatProcessor : QMapNetworkBaseProcessor
- (void)onRequest:(id)arg1;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (id)checkMatchEventId:(id)arg1;
- (void)onReport:(id)arg1;
- (id)constructRuleKey:(id)arg1;
@end
