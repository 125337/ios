@interface WCFinderPortraitPressRateEduView : UIView
{
    UILabel * _tipsLabel; // +0x8
    UIImageView * _tipsImgView; // +0x10
    CGSize _layoutSize; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)animateToShow;
- (void)animateToHideWithCompletion:(id /* block */)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)tipsImgView;
- (void)setTipsImgView:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

