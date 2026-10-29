@interface QMarkerManager : NSObject
{
    QMediator * _mediator; // +0x8
    QMapContext * _mapContext; // +0x10
    NSMutableArray * _markerStorage; // +0x18
}
- (id)init;
- (id)markers;
- (void)updateMarkerImage:(id)arg1 fromPreviousImage:(id)arg2;
- (void)updateMarkerZIndex:(id)arg1;
- (void)updateMarkerIsHidden:(id)arg1;
- (void)updateMarkerIsEnable:(id)arg1;
- (void)updateMarkerCenterOffset:(id)arg1;
- (void)updateMarkerCoordinate:(id)arg1;
- (void)updateMarkerAlpha:(id)arg1;
- (void)setDisplayLevel:(id)arg1 level:(long long)arg2;
- (void)addNativeMarker:(id)arg1;
- (void)removeNativeMarker:(id)arg1;
- (id)generateNativeMarkerPayload:(id)arg1;
- (CGPoint)getMarkerAnchor:(CGPoint)arg1 imageFrame:(CGSize)arg2;
- (id)handlerForNativeMarker:(id)arg1;
- (id)getmarkerFromID:(int)arg1;
- (id)processMarkerImage:(id)arg1 fromPreviousImage:(id)arg2;
- (void)updateMarkerStatus:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (id)markerStorage;
- (void)setMarkerStorage:(id)arg1;
- (void).cxx_destruct;
@end

