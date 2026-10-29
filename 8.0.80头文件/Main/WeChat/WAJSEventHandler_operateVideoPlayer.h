@interface WAJSEventHandler_operateVideoPlayer : WAJSEventHandler_BaseEvent
{
    BOOL _shouldRouteToService; // +0x8
    long long _dest; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentSnapshot;
- (BOOL)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (BOOL)shouldRouteToService;
- (void)setShouldRouteToService:(BOOL)arg1;
- (long long)dest;
- (void)setDest:(long long)arg1;
@end
