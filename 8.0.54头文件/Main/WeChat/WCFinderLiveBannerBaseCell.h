@interface WCFinderLiveBannerBaseCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    BOOL _isScrollAnimating; // +0x8
    MMFinderLiveBannerCellViewModel * _bannerVM; // +0x10
    id /* block */ _viewEventAction; // +0x18
    MMWebImageView * _bgView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIImageView * _arrowView; // +0x30
    UIButton * _button; // +0x38
}
+ (long long)titleWidthByInfo:(id)arg1;
+ (CGSize)bannerSizeByInfo:(id)arg1;
+ (CGSize)viewSizeByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUIIfNeeded;
- (void)onButtonLongPress;
- (id)bannerInfo;
- (void)setBannerVM:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)startScrollAnimation:(BOOL)arg1;
- (void)stopScrollAnimation;
- (BOOL)showDeleteAnimationWithCompleteAction:(id /* block */)arg1;
- (void)forceStopPagAnimation;
- (id)bannerVM;
- (id /* block */)viewEventAction;
- (void)setViewEventAction:(id /* block */)arg1;
- (BOOL)isScrollAnimating;
- (void)setIsScrollAnimating:(BOOL)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

