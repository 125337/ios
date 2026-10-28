@interface AmoebaRouteRule : NSObject
{
    BOOL _isRtReport; // +0x8
    BOOL _isBatchReport; // +0x9
    unsigned long long _routeType; // +0x10
    unsigned long long _routeRule; // +0x18
    id /* block */ _callbackBlock; // +0x20
    NSString * _callbackKey; // +0x28
}
- (id)toString;
- (unsigned long long)routeType;
- (void)setRouteType:(unsigned long long)arg1;
- (unsigned long long)routeRule;
- (void)setRouteRule:(unsigned long long)arg1;
- (BOOL)isRtReport;
- (void)setIsRtReport:(BOOL)arg1;
- (BOOL)isBatchReport;
- (void)setIsBatchReport:(BOOL)arg1;
- (id /* block */)callbackBlock;
- (void)setCallbackBlock:(id /* block */)arg1;
- (id)callbackKey;
- (void)setCallbackKey:(id)arg1;
- (void).cxx_destruct;
@end
