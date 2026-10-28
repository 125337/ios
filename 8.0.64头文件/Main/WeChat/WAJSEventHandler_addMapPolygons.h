@interface WAJSEventHandler_addMapPolygons : WAJSEventHandler_BaseEvent
{
    NSMutableArray * _overlays; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)addMapPolygon:(id)arg1 polygon:(id)arg2;
- (id)overlays;
- (void)setOverlays:(id)arg1;
- (void).cxx_destruct;
@end
