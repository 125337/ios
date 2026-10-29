@interface MSELoadingView : UIView
{
    BOOL _bLoading; // +0x8
    UIView * _bgView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIActivityIndicatorView * _indicatorView; // +0x20
}
- (id)init;
- (void)initView;
- (void)setLabelText:(id)arg1;
- (void)startLoading;
- (void)startLoadingButAnimatingAfterDelay:(double)arg1;
- (void)stopLoading;
- (void)stopLoadingInternal;
- (void)showActivityIndicatorViewAnimation;
- (void)autoLayoutInCenter;
- (BOOL)bLoading;
- (void)setBLoading:(BOOL)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end

