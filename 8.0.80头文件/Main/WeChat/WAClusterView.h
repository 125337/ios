@interface WAClusterView : QMUClusterAnnotationView <WAMapAnnotationViewDelegate>
{
    id <WAClusterViewDelegate> _delegate; // +0x8
    UIButton * _tapButton; // +0x10
    WAMapAnnotationView * _markerView; // +0x18
}
- (void)setClusterCount:(unsigned long long)arg1;
- (void)setClusterMarker:(id)arg1;
- (void)onClicked;
- (void)calloutClickAction:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onMapAnnotationViewTap:(id)arg1;
- (void)onMapLabelClick:(id)arg1;
- (void)onAnnotationZIndexChangeTo:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tapButton;
- (void)setTapButton:(id)arg1;
- (id)markerView;
- (void)setMarkerView:(id)arg1;
- (void).cxx_destruct;
@end
