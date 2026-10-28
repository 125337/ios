@interface WAJSEventHandler_addMapVisualLayer : WAJSEventHandler_BaseEvent
{
    NSMutableArray * _markersAddMap; // +0x8
    NSMutableArray * _markersAddCluster; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (id)markersAddMap;
- (void)setMarkersAddMap:(id)arg1;
- (id)markersAddCluster;
- (void)setMarkersAddCluster:(id)arg1;
- (void).cxx_destruct;
@end
