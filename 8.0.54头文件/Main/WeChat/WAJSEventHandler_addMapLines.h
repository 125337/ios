@interface WAJSEventHandler_addMapLines : WAJSEventHandler_BaseEvent
{
    NSMutableArray * _overlays; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)addMapLine:(id)arg1 line:(id)arg2;
- (id)createArrowImage:(CGSize)arg1;
- (id)overlays;
- (void)setOverlays:(id)arg1;
- (void).cxx_destruct;
@end

