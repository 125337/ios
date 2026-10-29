@interface DataReportEventData : NSObject
{
    BOOL _isBringPageInfo; // +0x8
    NSObject * _target; // +0x10
    NSString * _eventId; // +0x18
    NSMutableDictionary * _params; // +0x20
    NSMutableArray * _routeRules; // +0x28
    unsigned long long _time; // +0x30
}
- (id)init;
- (void)withParams:(id)arg1;
- (void)withRouteRules:(id)arg1;
- (id)toString;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)routeRules;
- (void)setRouteRules:(id)arg1;
- (BOOL)isBringPageInfo;
- (void)setIsBringPageInfo:(BOOL)arg1;
- (unsigned long long)time;
- (void)setTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

