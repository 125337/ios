@interface WASessionArrowTitleView : MMUIView
{
    BOOL _isFromBusiness; // +0x8
    id <WASessionArrowTitleViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _subTitleLabel; // +0x30
    UIView * _rightView; // +0x38
    UIImageView * _arrowView; // +0x40
    double _maxWidth; // +0x48
    UIButton * _profileButton; // +0x50
}
- (id)initWithTitleTypeIsFromBusiness:(BOOL)arg1 maxWidth:(double)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setRightView:(id)arg1;
- (void)layoutSubviews;
- (void)onClickTitle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFromBusiness;
- (void)setIsFromBusiness:(BOOL)arg1;
- (id)title;
- (id)subTitle;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightView;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)profileButton;
- (void)setProfileButton:(id)arg1;
- (void).cxx_destruct;
@end

