@interface QMapNetworkBaseProcessor : NSObject
{
    NSMutableDictionary * _rules; // +0x8
}
- (id)init;
- (void)registerReportEvent:(id)arg1;
- (void)onRequest:(id)arg1;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (id)rules;
- (void)setRules:(id)arg1;
- (void).cxx_destruct;
@end
