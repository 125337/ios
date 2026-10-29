@interface WCTimeLineAdFlipCardIntroduceView : UIView <CAAnimationDelegate>
{
    BOOL _hasIntroduceAnimationPlayed; // +0x8
    WCAdFlipCardInfo * _adFlipCardInfo; // +0x10
    UILabel * _flipIntroduceLabel; // +0x18
    WCAdURLImageView * _leftIconView; // +0x20
    WCAdURLImageView * _rightIconView; // +0x28
    UIPageControl * _pageCtrl; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 adFlipCardInfo:(id)arg2;
- (void)dealloc;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)flipIntroduceLabel;
- (id)leftIconView;
- (id)rightIconView;
- (id)pageCtrl;
- (void)onPageIndexUpdated:(long long)arg1;
- (void)showIntroduceAnimation;
- (void)scheduledIntroduceAnimation;
- (void)switchSubviewsVisibility;
- (void)appendOpacityAnimationFrom:(double)arg1 to:(double)arg2 duration:(double)arg3 toView:(id)arg4 callback:(id /* block */)arg5;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)adFlipCardInfo;
- (void)setAdFlipCardInfo:(id)arg1;
- (void)setFlipIntroduceLabel:(id)arg1;
- (void)setLeftIconView:(id)arg1;
- (void)setRightIconView:(id)arg1;
- (void)setPageCtrl:(id)arg1;
- (BOOL)hasIntroduceAnimationPlayed;
- (void)setHasIntroduceAnimationPlayed:(BOOL)arg1;
- (void).cxx_destruct;
@end
