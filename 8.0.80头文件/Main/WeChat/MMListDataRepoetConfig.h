@interface MMListDataRepoetConfig : NSObject
{
    NSString * _dr_viewId; // +0x8
    NSMutableArray * _reportPolicyArray; // +0x10
    NSMutableArray * _routeRuleArray; // +0x18
    id /* block */ _dr_dynamicParamsBlock; // +0x20
}
- (id)init;
- (void)addReportPolicy:(unsigned long long)arg1 routeRule:(unsigned long long)arg2 rtReport:(BOOL)arg3;
- (id)dr_viewId;
- (void)setDr_viewId:(id)arg1;
- (id)reportPolicyArray;
- (void)setReportPolicyArray:(id)arg1;
- (id)routeRuleArray;
- (void)setRouteRuleArray:(id)arg1;
- (id /* block */)dr_dynamicParamsBlock;
- (void)setDr_dynamicParamsBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
