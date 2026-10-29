@interface MMFinderLiveMusicSettingInteractiveView : UIView <PAGViewListener>
{
    id <MMFinderLiveMusicSettingInteractiveDelegate> _interactiveDelegate; // +0x8
    PAGView * _guideAnimatedView; // +0x10
    MMUILabel * _guideLabel; // +0x18
    double _guideSizeScale; // +0x20
    long long _currentInteractiveState; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addGestureRecognizers;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGuideAnimatedView;
- (void)layoutGuideLabel;
- (void)showGuideAnimatedView;
- (void)onLiveMusicSettingInteractiveTap;
- (BOOL)isShowingGuide;
- (void)stopGuidePlay;
- (void)createGuideAnimatedView;
- (void)createGuideLabel;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (double)scaleValue:(double)arg1;
- (void)createGuideContentScale;
- (CGSize)getGuideContentSize;
- (id)interactiveDelegate;
- (void)setInteractiveDelegate:(id)arg1;
- (id)guideAnimatedView;
- (void)setGuideAnimatedView:(id)arg1;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg1;
- (double)guideSizeScale;
- (void)setGuideSizeScale:(double)arg1;
- (long long)currentInteractiveState;
- (void)setCurrentInteractiveState:(long long)arg1;
- (void).cxx_destruct;
@end

