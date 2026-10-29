@interface AmoebaBridgeStandardPageEvent : NSObject
{
    unsigned int _pageId; // +0x8
    unsigned long long _time; // +0x10
    NSString * _eventId; // +0x18
    NSString * _pageName; // +0x20
    NSMutableDictionary * _params; // +0x28
    NSMutableArray * _routeRules; // +0x30
    AmoebaBridgePageInfo * _sourcePageInfo; // +0x38
    AmoebaBridgePageInfo * _refPageInfo; // +0x40
}
- (id)init;
- (unsigned long long)time;
- (void)setTime:(unsigned long long)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (unsigned int)pageId;
- (void)setPageId:(unsigned int)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)routeRules;
- (void)setRouteRules:(id)arg1;
- (id)sourcePageInfo;
- (void)setSourcePageInfo:(id)arg1;
- (id)refPageInfo;
- (void)setRefPageInfo:(id)arg1;
- (void).cxx_destruct;
@end
