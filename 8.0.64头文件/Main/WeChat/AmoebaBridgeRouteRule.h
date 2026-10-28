@interface AmoebaBridgeRouteRule : NSObject
{
    BOOL _isRtReport; // +0x8
    BOOL _isBatchReport; // +0x9
    unsigned int _routeType; // +0xc
    unsigned int _routeRule; // +0x10
}
- (unsigned int)routeType;
- (void)setRouteType:(unsigned int)arg1;
- (unsigned int)routeRule;
- (void)setRouteRule:(unsigned int)arg1;
- (BOOL)isRtReport;
- (void)setIsRtReport:(BOOL)arg1;
- (BOOL)isBatchReport;
- (void)setIsBatchReport:(BOOL)arg1;
@end
