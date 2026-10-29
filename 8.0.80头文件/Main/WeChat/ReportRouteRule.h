@interface ReportRouteRule : NSObject
{
    NSNumber * _routeType; // +0x8
    NSNumber * _routeRule; // +0x10
    NSNumber * _isBatchReport; // +0x18
}
+ (id)makeWithRouteType:(id)arg1 routeRule:(id)arg2 isBatchReport:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)routeType;
- (void)setRouteType:(id)arg1;
- (id)routeRule;
- (void)setRouteRule:(id)arg1;
- (id)isBatchReport;
- (void)setIsBatchReport:(id)arg1;
- (void).cxx_destruct;
@end
