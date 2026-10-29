@interface AmbBindRouteInfo : NSObject
{
    BOOL _isRtReport; // +0x8
    unsigned long long _routeType; // +0x10
    unsigned long long _routeRule; // +0x18
    unsigned long long _isBatchReport; // +0x20
}
- (id)toDic;
- (unsigned long long)routeType;
- (void)setRouteType:(unsigned long long)arg1;
- (unsigned long long)routeRule;
- (void)setRouteRule:(unsigned long long)arg1;
- (BOOL)isRtReport;
- (void)setIsRtReport:(BOOL)arg1;
- (unsigned long long)isBatchReport;
- (void)setIsBatchReport:(unsigned long long)arg1;
@end
