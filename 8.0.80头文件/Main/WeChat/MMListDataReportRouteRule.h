@interface MMListDataReportRouteRule : NSObject
{
    BOOL _isRtReport; // +0x8
    BOOL _isBatchReport; // +0x9
    unsigned long long _routeType; // +0x10
    unsigned long long _routeRule; // +0x18
}
- (unsigned long long)routeType;
- (void)setRouteType:(unsigned long long)arg1;
- (unsigned long long)routeRule;
- (void)setRouteRule:(unsigned long long)arg1;
- (BOOL)isRtReport;
- (void)setIsRtReport:(BOOL)arg1;
- (BOOL)isBatchReport;
- (void)setIsBatchReport:(BOOL)arg1;
@end
