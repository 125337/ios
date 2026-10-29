@interface QAnnotationView : UIView <UIGestureRecognizerDelegate, TBCalloutViewDelegate>
{
    int _internalZIndex; // +0x8
    unsigned long long _internalCollisionType; // +0x10
    CGSize _previousImageViewFrame; // +0x18
    BOOL _selected; // +0x28
    BOOL _canShowCallout; // +0x29
    BOOL _draggable; // +0x2a
    BOOL _selectedBeforeStarting; // +0x2b
    BOOL _internalMarkerHidden; // +0x2c
    int _dragState; // +0x30
    int _collidedViewCount; // +0x34
    long long _collisionRelation; // +0x38
    NSString * _reuseIdentifier; // +0x40
    id <QAnnotation> _annotation; // +0x48
    UIView * _customCalloutView; // +0x50
    UIView * _leftCalloutAccessoryView; // +0x58
    UIView * _rightCalloutAccessoryView; // +0x60
    long long _type; // +0x68
    NSString * _text; // +0x70
    QAnnotationViewTextStyle * _textStyle; // +0x78
    QAnnotationContainerView * _containerView; // +0x80
    NSMutableArray * _collisionChildren; // +0x88
    NSMutableArray * _collisionChildrenToAdd; // +0x90
    UITapGestureRecognizer * _tapGestureGecognizer; // +0x98
    UITapGestureRecognizer * _tapTwiceGestureGecognizer; // +0xa0
    UILongPressGestureRecognizer * _longPressGestureGecognizer; // +0xa8
    UIImageView * _innerMarkerView; // +0xb0
    UIView * _callout; // +0xb8
    UIView * _innerMainMarkerSource; // +0xc0
    CGPoint _centerOffset; // +0xc8
    CGPoint _calloutOffset; // +0xd8
}
+ (Class)layerClass;
- (id)generateMarkerPayload:(id)arg1;
- (id)generateMarkerPayloadFromAnnotationView:(id)arg1;
- (id)generateMarkerPayloadFromChildCollisionView:(id)arg1;
- (id)handlerForMarker:(id)arg1;
- (CGPoint)getAnnoViewScreenAnchor:(id)arg1;
- (CGPoint)getNormalUIViewScreenAnchor:(id)arg1;
- (id)getTransparentImage:(CGSize)arg1 withView:(id)arg2;
- (void)removeEngineMarkerimage:(id)arg1;
- (id)mapView;
- (CGRect)getChildViewScreenRect:(id)arg1;
- (void)addEngineMarker:(id)arg1;
- (void)removeEngineMarker:(id)arg1;
- (void)updateEngineMarkers;
- (void)updateEngineMarker:(id)arg1;
- (void)updateEngineMarkerCollusionStatus:(id)arg1;
- (void)updateCollisionChildZIndex;
- (BOOL)engineMarkerIsHidden:(id)arg1;
- (void)hideEngineMarker:(id)arg1 toHide:(BOOL)arg2;
- (void)updateMarkerLocation:(id)arg1 withMapPoint:(struct)arg2;
- (void)updateSubMarkersBindSyncVisibility:(BOOL)arg1;
- (void)setMapMarker:(id)arg1 MainMarker:(id)arg2 BindSyncVisibility:(BOOL)arg3;
- (void)modifyMarkAngle:(id)arg1;
- (void)modifyMarkAngleFromLayerAnle:(id)arg1;
- (BOOL)getAvoidPOIStatus:(id)arg1;
- (BOOL)getAvoidMarkerStatus:(id)arg1;
- (double)getMarkerAngleFromView:(id)arg1;
- (double)getMarkerAngleFromViewPresentLayer:(id)arg1;
- (BOOL)addQAnnotationViewCollisionChild:(id)arg1;
- (void)addCollisionChild:(id)arg1;
- (BOOL)removeQAnnotationViewCollisionChild:(id)arg1;
- (void)updateQAnnotationViewCollisionChild:(id)arg1;
- (void)setQAnnotationViewCollisionMainView:(id)arg1;
- (BOOL)checkCollisionChildViewIsValid:(id)arg1;
- (void)addTargetForControl:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)notifyContainerAdjustOrder;
- (void)notifyUpdateMarkers;
- (void)removeAllEngineMarkers;
- (BOOL)hasIndoorInfo;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)calloutAccessoryAction:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)innerImageView;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)prepareForReuse;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)updateCenter;
- (CGPoint)screenPoint;
- (void)setZIndex:(int)arg1;
- (int)zIndex;
- (void)setCollisionType:(unsigned long long)arg1;
- (unsigned long long)collisionType;
- (void)setCollisionRelation:(long long)arg1;
- (long long)collisionRelation;
- (void)setType:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)calloutViewDidAppear:(id)arg1;
- (void)calloutViewWillDisappear:(id)arg1;
- (void)updateAnnoViewCollision;
- (BOOL)shouldAddEngineMarker;
- (void)initEngineMarkerBySelf;
- (BOOL)isAnnotationLocked;
- (CGPoint)annotationLockedPosition;
- (void)updateCoordinateWhenLocked;
- (BOOL)supportDragOperation;
- (void)setDragState:(int)arg1 animated:(BOOL)arg2;
- (void)setDragState:(int)arg1;
- (void)updateEngineMarkersPosition;
- (void)createEngineMarkerForSubCollisionView;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(CGSize)arg2;
- (void)calloutViewClicked:(id)arg1;
- (id)constructDefaultCalloutView;
- (id)obtainCallout;
- (void)loadCalloutAnimated:(BOOL)arg1;
- (void)unloadCalloutAnimated:(BOOL)arg1;
- (void)makeCalloutView:(id)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3;
- (void)createDefaultCalloutEngineMarker:(id)arg1;
- (void)removeDefaultCalloutEngineMarker:(id)arg1;
- (id)getDefaultCalloutView;
- (void)tapGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (void)setAnnoViewHideOnly:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setMainMakerKVO:(id)arg1;
- (void)removeMainMakerKVO:(id)arg1;
- (void)initGestureRecognizers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)updateTransform:(id)arg1;
- (void)updateTransformFromPresentlayer:(id)arg1;
- (void)dealloc;
- (id)reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (id)annotation;
- (CGPoint)centerOffset;
- (CGPoint)calloutOffset;
- (void)setCalloutOffset:(CGPoint)arg1;
- (BOOL)isSelected;
- (BOOL)canShowCallout;
- (void)setCanShowCallout:(BOOL)arg1;
- (id)customCalloutView;
- (void)setCustomCalloutView:(id)arg1;
- (id)leftCalloutAccessoryView;
- (id)rightCalloutAccessoryView;
- (BOOL)isDraggable;
- (void)setDraggable:(BOOL)arg1;
- (int)dragState;
- (long long)type;
- (id)text;
- (id)textStyle;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)collisionChildren;
- (void)setCollisionChildren:(id)arg1;
- (id)collisionChildrenToAdd;
- (void)setCollisionChildrenToAdd:(id)arg1;
- (id)tapGestureGecognizer;
- (void)setTapGestureGecognizer:(id)arg1;
- (id)tapTwiceGestureGecognizer;
- (void)setTapTwiceGestureGecognizer:(id)arg1;
- (id)longPressGestureGecognizer;
- (void)setLongPressGestureGecognizer:(id)arg1;
- (id)innerMarkerView;
- (void)setInnerMarkerView:(id)arg1;
- (id)callout;
- (void)setCallout:(id)arg1;
- (BOOL)selectedBeforeStarting;
- (void)setSelectedBeforeStarting:(BOOL)arg1;
- (BOOL)internalMarkerHidden;
- (void)setInternalMarkerHidden:(BOOL)arg1;
- (int)collidedViewCount;
- (void)setCollidedViewCount:(int)arg1;
- (id)innerMainMarkerSource;
- (void)setInnerMainMarkerSource:(id)arg1;
- (void).cxx_destruct;
@end
