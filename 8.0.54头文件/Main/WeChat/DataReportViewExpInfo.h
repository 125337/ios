@interface DataReportViewExpInfo : NSObject
{
    unsigned long long _viewHash; // +0x8
    unsigned long long _expType; // +0x10
    NSString * _viewUniqueId; // +0x18
    NSDictionary * _viewParams; // +0x20
    NSArray * _routeRules; // +0x28
    unsigned long long _time; // +0x30
    unsigned long long _reportPolicy; // +0x38
}
- (unsigned long long)viewHash;
- (void)setViewHash:(unsigned long long)arg1;
- (unsigned long long)expType;
- (void)setExpType:(unsigned long long)arg1;
- (id)viewUniqueId;
- (void)setViewUniqueId:(id)arg1;
- (id)viewParams;
- (void)setViewParams:(id)arg1;
- (id)routeRules;
- (void)setRouteRules:(id)arg1;
- (unsigned long long)time;
- (void)setTime:(unsigned long long)arg1;
- (unsigned long long)reportPolicy;
- (void)setReportPolicy:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

