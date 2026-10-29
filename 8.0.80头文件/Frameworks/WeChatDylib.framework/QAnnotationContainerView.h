@interface QAnnotationContainerView : UIView
{
    BOOL _hasTriggerAnnoViewWithEngineMarker; // +0x8
    QMediator * _mediator; // +0x10
    QMapContext * _mapContext; // +0x18
    id <QAnnotationContainerViewDelegate> _delegate; // +0x20
    TBOrderedSafeDictionary * _annotationStorage; // +0x28
    NSMutableDictionary * _collisionViewStorage; // +0x30
    NSMapTable * _engineMarkerIDToAnnotationViewMap; // +0x38
}
- (int)addEngineMarker:(id)arg1;
- (void)removeEngineMarker:(id)arg1;
- (void)updateEngineMarker:(id)arg1 withPayload:(id)arg2;
- (void)updateMarkerCollisionStatus:(id)arg1 avoidAnnotation:(BOOL)arg2 avoidOtherMarker:(BOOL)arg3;
- (void)updateTextMarkerCollisionStatus:(id)arg1 avoidAnnotation:(BOOL)arg2 avoidOtherMarker:(BOOL)arg3;
- (void)updateZIndex:(int)arg1 withMarkerID:(int)arg2;
- (void)removeEngineMarkerimage:(id)arg1;
- (BOOL)engineMarkerIsHidden:(id)arg1;
- (void)setEngineMarkerHidden:(id)arg1 toHide:(BOOL)arg2;
- (void)updateMarkerLocation:(id)arg1 withLocation:(struct)arg2;
- (void)setMapMarker:(id)arg1 MainMarker:(id)arg2 BindSyncVisibility:(BOOL)arg3;
- (void)modifyMarker:(id)arg1 angle:(double)arg2;
- (void)addCollionViewToContainer:(id)arg1;
- (void)removeCollionViewFromContainer:(id)arg1;
- (id)getCollisionViewFromMarkerID:(int)arg1;
- (void)notifyMapViewMarkersShow:(id)arg1;
- (void)notifyMapViewMarkersHide:(id)arg1;
- (void)callCollisionViewDidHideDelegate:(id)arg1 hideViews:(id)arg2;
- (void)callCollisionViewDidShowDelegate:(id)arg1 showViews:(id)arg2;
- (id)getViewsThatShouldHide:(id)arg1;
- (id)getViewsThatShouldShow:(id)arg1;
- (void)aggregateMainMarkers:(id)arg1 toResultDict:(id)arg2;
- (void)executeCollisionRelationAloneShowLogic:(id)arg1 showDict:(id)arg2;
- (void)dealWithMainMarker:(id)arg1 hideLogictWithHiddenIDs:(id)arg2 andOutputDict:(id)arg3;
- (void)aggregateSubMarkers:(id)arg1 toResultDict:(id)arg2;
- (void)dealWithSubMarker:(id)arg1 showLogicWithOutoutDict:(id)arg2;
- (void)mapContextDidMapStatusChangedAfterDraw:(id)arg1;
- (void)mapContext:(id)arg1 markerOverlayShown:(id)arg2 markerOverlayAvoided:(id)arg3;
- (void)setMapContext:(id)arg1;
- (void)updateAllAnnotations;
- (void)updateAnnotationView:(id)arg1;
- (void)updateVisibilityForAnnotationView:(id)arg1;
- (id)callDelegateViewForAnnotation:(id)arg1;
- (void)callDelegateDidAddAnnotationViews:(id)arg1;
- (id)callDelegateCustomCalloutForAnnotationView:(id)arg1;
- (void)callDelegateAnnotationViewDidSelect:(id)arg1;
- (void)callDelegateAnnotationViewDidDeselect:(id)arg1;
- (void)callDelegateAnnotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)callDelegateAnnotationViewCalloutTapped:(id)arg1;
- (void)callDelegateAnnotationViewTapped:(id)arg1;
- (void)callDelegateAnnotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)coordinateForPoint:(CGPoint)arg1;
- (void)scrollMapToCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)adjustOrderOfAnnotationView:(id)arg1;
- (void)searchAnnotationViewIndex:(id)arg1 startIndex:(int)arg2 endIndex:(int)arg3 annoView:(id)arg4;
- (id)notifyCustomCalloutForAnnotationView:(id)arg1;
- (void)notifyAnnotationViewDidSelect:(id)arg1;
- (void)notifyAnnotationViewDidDeselect:(id)arg1;
- (void)notifyAnnotationView:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;
- (void)notifyAnnotationViewCalloutTapped:(id)arg1;
- (void)notifyAnnotationView:(id)arg1 calloutAccessoryControlTapped:(id)arg2;
- (void)notifyAnnotationViewTapped:(id)arg1;
- (id)annotations;
- (id)selectedAnnotations;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)bringAnnotationToFront:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)didAddSubview:(id)arg1;
- (id)calloutViewForAnnotation:(id)arg1;
- (void)createEngineMarkerForAnnotationViews;
- (void)setupSelf;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)annotationViewForEngineMarkerID:(int)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)mapContext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)annotationStorage;
- (void)setAnnotationStorage:(id)arg1;
- (id)collisionViewStorage;
- (void)setCollisionViewStorage:(id)arg1;
- (id)engineMarkerIDToAnnotationViewMap;
- (void)setEngineMarkerIDToAnnotationViewMap:(id)arg1;
- (BOOL)hasTriggerAnnoViewWithEngineMarker;
- (void)setHasTriggerAnnoViewWithEngineMarker:(BOOL)arg1;
- (void).cxx_destruct;
@end
