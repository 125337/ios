@interface WAJSEventHandler_addMapCircles : WAJSEventHandler_BaseEvent
{
    NSMutableArray * _overlays; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)addMapCircle:(id)arg1 circle:(id)arg2;
- (id)overlays;
- (void)setOverlays:(id)arg1;
- (void).cxx_destruct;
@end

