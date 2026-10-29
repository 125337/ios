@interface WAMapAnnotationView : QAnnotationView
{
    BOOL _fixedCallout; // +0x8
    BOOL _isCalloutViewShow; // +0x9
    WAMapMarker * _marker; // +0x10
    id <WAMapAnnotationViewDelegate> _delegate; // +0x18
    UIButton * _tapButton; // +0x20
    UIImageView * _markerImage; // +0x28
    NSDictionary * _calloutParam; // +0x30
    UIView * _calloutCoverView; // +0x38
    id _calloutTarget; // +0x40
    SEL _calloutAction; // +0x48
    unsigned long long _calloutControlEvents; // +0x50
    WAMapCalloutView * _calloutView; // +0x58
    PaddingLabel * _paddingLabel; // +0x60
    UIView * _pointView; // +0x68
    CGAffineTransform _calloutTrans; // +0x70
}
- (id)initWithMarker:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initWithMarker:(id)arg1;
- (void)initPointView;
- (void)buildMarkerContent;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setZIndex:(int)arg1;
- (void)initMarkerImage;
- (void)updateMarkerLayout;
- (void)updateMarkerRotate;
- (void)updateCalloutLayout;
- (void)initCallout;
- (void)addCalloutTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addCalloutView;
- (void)removeCalloutView;
- (void)tryToGetCalloutViewIfNeed;
- (void)updateCalloutView;
- (void)initLabel;
- (void)onClicked;
- (void)onCalloutClicked;
- (void)onMapLabelClick:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)marker;
- (void)setMarker:(id)arg1;
- (BOOL)fixedCallout;
- (void)setFixedCallout:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tapButton;
- (void)setTapButton:(id)arg1;
- (id)markerImage;
- (void)setMarkerImage:(id)arg1;
- (id)calloutParam;
- (void)setCalloutParam:(id)arg1;
- (id)calloutCoverView;
- (void)setCalloutCoverView:(id)arg1;
- (id)calloutTarget;
- (void)setCalloutTarget:(id)arg1;
- (SEL)calloutAction;
- (void)setCalloutAction:(SEL)arg1;
- (unsigned long long)calloutControlEvents;
- (void)setCalloutControlEvents:(unsigned long long)arg1;
- (id)calloutView;
- (void)setCalloutView:(id)arg1;
- (BOOL)isCalloutViewShow;
- (void)setIsCalloutViewShow:(BOOL)arg1;
- (CGAffineTransform)calloutTrans;
- (void)setCalloutTrans:(CGAffineTransform)arg1;
- (id)paddingLabel;
- (void)setPaddingLabel:(id)arg1;
- (id)pointView;
- (void)setPointView:(id)arg1;
- (void).cxx_destruct;
@end

