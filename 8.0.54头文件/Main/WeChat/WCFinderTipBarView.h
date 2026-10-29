@interface WCFinderTipBarView : WCFinderCommonBottomBannerView
{
    UILabel * _topTipsBarLabel; // +0x8
    UIView * _rightTipView; // +0x10
    UIImageView * _rightArrowImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)topTipsBarLabel;
- (id)rightArrowImageView;
- (void)updateTipsBarText:(id)arg1;
- (void)updateTipsBarText:(id)arg1 tipBarUIStyle:(unsigned long long)arg2;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (void)updateContentWithLeftTitle:(id)arg1 rightInfoView:(id)arg2 showRightArrow:(BOOL)arg3;
- (void)onClickTipBarView;
- (void)setTopTipsBarLabel:(id)arg1;
- (id)rightTipView;
- (void)setRightTipView:(id)arg1;
- (void)setRightArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

