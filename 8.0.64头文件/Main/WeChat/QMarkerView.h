@interface QMarkerView : QOverlayView
{
    BOOL _isHidden; // +0x8
    BOOL _userInteractionEnabled; // +0x9
    BOOL _draggable; // +0xa
    BOOL _canshowCallout; // +0xb
    BOOL _forceLoad; // +0xc
    BOOL _internalCalloutShowing; // +0xd
    int _dragState; // +0x10
    int _geotype; // +0x14
    double _alpha; // +0x18
    double _rotation; // +0x20
    NSString * _title; // +0x28
    NSString * _subtitle; // +0x30
    UIImage * _image; // +0x38
    unsigned long long _collisionType; // +0x40
    UIView * _customCalloutView; // +0x48
    QMarkerViewAnimationLayer * _animationLayer; // +0x50
    NSString * _iconPath; // +0x58
    NSString * _imgInstruction; // +0x60
    UIView * _internalCustomCallout; // +0x68
    QMarkerCalloutView * _markerCalloutView; // +0x70
    CGPoint _centerOffset; // +0x78
    CGPoint _scale; // +0x88
    CGPoint _internalScale; // +0x98
}
- (void)hideCalloutView;
- (void)displayCalloutView;
- (void)internalShowCalloutView:(BOOL)arg1;
- (void)internalRefreshCalloutView;
- (void)updateCalloutPositionFromMarkerPropertiesChanged;
- (void)updateCalloutViewCollision;
- (void)hideCalloutIfNeeded;
- (void)addEngineMarkerForCalloutView;
- (void)internalShowCustomCalloutView;
- (void)internalHideCustomCalloutView;
- (void)swapDisplayCustomCalloutViewByRefreshCalloutView;
- (void)updateScreenPointForCustomCallout;
- (id)basiMapView;
- (id)initWithMarker:(id)arg1;
- (id)animationLayer;
- (void)dealloc;
- (void)setIsHidden:(BOOL)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)setAlpha:(double)arg1;
- (void)setScale:(CGPoint)arg1;
- (void)setRotation:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setCollisionType:(unsigned long long)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setDragState:(int)arg1;
- (void)setDragState:(int)arg1 animated:(BOOL)arg2;
- (void)updateCenterCoordinate:(CLLocationCoordinate2D)arg1;
- (void)showCalloutView:(BOOL)arg1;
- (void)refreshCalloutView;
- (BOOL)isHidden;
- (CGPoint)centerOffset;
- (double)alpha;
- (CGPoint)scale;
- (double)rotation;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (BOOL)userInteractionEnabled;
- (BOOL)draggable;
- (void)setDraggable:(BOOL)arg1;
- (id)image;
- (unsigned long long)collisionType;
- (int)dragState;
- (BOOL)canshowCallout;
- (void)setCanshowCallout:(BOOL)arg1;
- (id)customCalloutView;
- (void)setCustomCalloutView:(id)arg1;
- (void)setAnimationLayer:(id)arg1;
- (BOOL)forceLoad;
- (void)setForceLoad:(BOOL)arg1;
- (int)geotype;
- (void)setGeotype:(int)arg1;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (id)imgInstruction;
- (void)setImgInstruction:(id)arg1;
- (BOOL)internalCalloutShowing;
- (void)setInternalCalloutShowing:(BOOL)arg1;
- (CGPoint)internalScale;
- (void)setInternalScale:(CGPoint)arg1;
- (id)internalCustomCallout;
- (void)setInternalCustomCallout:(id)arg1;
- (id)markerCalloutView;
- (void)setMarkerCalloutView:(id)arg1;
- (void).cxx_destruct;
@end
