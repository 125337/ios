@interface MMLocationPinView : QAnnotationView
{
    AnnotationSelectContentView * m_pinView; // +0x8
    UIImageView * m_shadowView; // +0x10
    UIImageView * m_pointView; // +0x18
    ThreeWayExpandImageView * m_calloutView; // +0x20
    MMUIActivityIndicatorView * m_loadingView; // +0x28
    UILabel * m_labelLocation; // +0x30
    UILabel * m_labelPOIName; // +0x38
    BOOL m_bCallOutViewEnable; // +0x40
    UIView * m_extraContentView; // +0x48
}
+ (double)pinViewHeight;
- (void)setM_bCallOutViewEnable:(BOOL)arg1;
- (void)setUpFrame;
- (void)setDownFrame;
- (BOOL)m_bIsCalloutHidden;
- (void)stopAllAnimation;
- (void)onAnimationFinish;
- (void)doDownAnimation;
- (void)doUpAnimation;
- (void)setLocationText:(id)arg1 POIName:(id)arg2;
- (void)setLoadingStatus;
- (void)setContainerFrame:(CGRect)arg1;
- (void)updatePinView;
- (void)showCallOutViewAnimated:(BOOL)arg1 Duration:(double)arg2;
- (void)hideCallOutViewAnimated:(BOOL)arg1 Duration:(double)arg2;
- (void)initView;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)applyPinViewScale:(double)arg1;
- (BOOL)m_bCallOutViewEnable;
- (id)m_extraContentView;
- (void)setM_extraContentView:(id)arg1;
- (void).cxx_destruct;
@end

