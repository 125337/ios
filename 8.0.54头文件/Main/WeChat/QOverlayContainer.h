@interface QOverlayContainer : NSObject
{
    QMediator * _mediator; // +0x8
    QMapContext * _mapContext; // +0x10
    QTextManager * _textManager; // +0x18
    TBOrderedSafeDictionary * _viewContainer; // +0x20
}
- (id)init;
- (void)setMapContext:(id)arg1;
- (void)setupTextSystem;
- (void)update:(double)arg1;
- (id)searchClickedOverlay:(int)arg1;
- (void)updateOverlayZIndex:(int)arg1 overlayView:(id)arg2;
- (void)updateAllOverlays;
- (void)updateOverlayIfIndoor:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (void)addPolylineView:(id)arg1;
- (void)addPolygonView:(id)arg1;
- (void)addCircleView:(id)arg1;
- (void)addArcView:(id)arg1;
- (void)setHiddenForOverlayView:(id)arg1 hidden:(BOOL)arg2;
- (void)setOverlayScaleRange:(id)arg1 minScale:(int)arg2 maxScale:(int)arg3;
- (void)removeOverlayView:(id)arg1;
- (void)refreshOverlayView:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (void)updateDisplayLevel:(id)arg1;
- (void)updateAlpha:(id)arg1;
- (void)updateCollideLabel:(id)arg1;
- (void)updatePolyLineViewPoints:(id)arg1;
- (void)updatePolylineViewSegStyle:(id)arg1;
- (void)updatePolylineViewRGBAColorStyle:(id)arg1;
- (void)updatePolylineViewSegColor:(id)arg1;
- (void)updatePolylineView:(id)arg1 changeStyleFromStartToCurrentPoint:(CLLocationCoordinate2D)arg2 searchFrom:(int)arg3 toColor:(BOOL)arg4;
- (void)updatePolylineView:(id)arg1 turnArrowIndex:(int)arg2;
- (void)updatePolylineView:(id)arg1 turnArrowColor:(id)arg2 borderColor:(id)arg3;
- (void)updatePolylineGradientStyle:(id)arg1;
- (void)updatePolylineArrowSpacing:(id)arg1;
- (void)updatePolylineCollideLabel:(id)arg1;
- (void)updateArcViewRGBAColorStyle:(id)arg1;
- (void)updatePolygonViewStrokeStyle:(id)arg1;
- (void)updatePolygonStrokePoints:(id)arg1;
- (void)updatePolygonViewFillStyle:(id)arg1;
- (void)updateCircleView:(id)arg1;
- (id)checkClickInfoAtMapPoint:(struct)arg1;
- (id)payloadForPolyline:(id)arg1;
- (id)payloadForPolygon:(id)arg1;
- (id)payloadForCircle:(id)arg1;
- (id)handlerForPolylineView:(id)arg1;
- (id)handlerForPolygonView:(id)arg1;
- (id)handlerForCircleView:(id)arg1;
- (id)strokePayloadForPolygonView:(id)arg1;
- (id)getPolylineViewForPolygon:(id)arg1;
- (id)getTexturePolylineViewForPolygon:(id)arg1;
- (id)generatePolyline:(id)arg1;
- (void)setUpPolygonStrokelineProperty:(id)arg1 polygonView:(id)arg2;
- (id)circleImageForPolygonStroke:(id)arg1;
- (id)createPolylineViewFromArcView:(id)arg1;
- (void)setNeedsDisplay;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)mapContext;
- (id)textManager;
- (void)setTextManager:(id)arg1;
- (id)viewContainer;
- (void)setViewContainer:(id)arg1;
- (void).cxx_destruct;
@end

