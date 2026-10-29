@interface WAJSEventHandler_addMapMarkers : WAJSEventHandler_BaseMap
{
    NSMutableArray * _markersAddMap; // +0x8
    NSMutableArray * _markersAddCluster; // +0x10
    NSMutableArray * _markersId; // +0x18
    NSMutableDictionary * _imageCache; // +0x20
}
+ (id)makeIconImage:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)addMapMarker:(id)arg1 marker:(id)arg2;
- (unsigned long long)parseCollisionType:(id)arg1 isCluster:(BOOL)arg2;
- (id)markersAddMap;
- (void)setMarkersAddMap:(id)arg1;
- (id)markersAddCluster;
- (void)setMarkersAddCluster:(id)arg1;
- (id)markersId;
- (void)setMarkersId:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (void).cxx_destruct;
@end
