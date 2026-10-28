@interface MFBannerBtn : UIButton <MFBanner>
{
    UIImageView * _arrowImageView; // +0x8
    MMUIActivityIndicatorView * _indicatorView; // +0x10
}
- (void)setRightArrowHidden:(BOOL)arg1;
- (void)setRightArrowImage:(id)arg1;
- (void)setArrowImageClickable:(BOOL)arg1;
- (void)onArrowImageClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitleIcon:(id)arg1;
- (void)setTitleIcon:(id)arg1 color:(id)arg2;
- (void)setTitleIcon:(id)arg1 color:(id)arg2 horizonFlip:(BOOL)arg3;
- (void)setTitleIconImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)makeActivityView;
- (void)removeActivityView;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
