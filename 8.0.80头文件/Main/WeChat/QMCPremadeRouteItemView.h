@interface QMCPremadeRouteItemView : UIView <UIGestureRecognizerDelegate, QMCScalable>
{
    BOOL _isCardSelected; // +0x8
    id /* block */ _onCardTap; // +0x10
    id /* block */ _onTitleTap; // +0x18
    id /* block */ _onButtonTap; // +0x20
    id /* block */ _imageLoader; // +0x28
    UIImageView * _titleIconView; // +0x30
    UILabel * _distanceLabel; // +0x38
    UIView * _titleDivider; // +0x40
    UILabel * _titleLabel; // +0x48
    UIImageView * _chevronView; // +0x50
    UIView * _tagsContainer; // +0x58
    UIStackView * _tagStack; // +0x60
    UIStackView * _upperStack; // +0x68
    UIView * _separatorLine; // +0x70
    UIView * _routePointsRow; // +0x78
    QMCActionButton * _actionButton; // +0x80
    NSDictionary * _buttonJumpData; // +0x88
    NSDictionary * _currentBizData; // +0x90
    double _scaleFactor; // +0x98
    double _lastTagLayoutWidth; // +0xa0
    NSLayoutConstraint * _chevronWidthConstraint; // +0xa8
    NSLayoutConstraint * _chevronHeightConstraint; // +0xb0
    NSLayoutConstraint * _titleIconWidthConstraint; // +0xb8
    NSLayoutConstraint * _titleIconHeightConstraint; // +0xc0
    NSLayoutConstraint * _titleDividerHeightConstraint; // +0xc8
    NSLayoutConstraint * _titleDividerWidthConstraint; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)_setupItemViews;
- (void)setCardSelected:(BOOL)arg1;
- (void)qmc_applyScale:(double)arg1;
- (void)configureWithBizData:(id)arg1;
- (void)_cardTapped;
- (void)_titleTapped;
- (void)_actionButtonTapped;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_configureTags:(id)arg1 style:(id)arg2;
- (void)_configureRoutePointsWithStartName:(id)arg1 startMarker:(id)arg2 endName:(id)arg3 endMarker:(id)arg4 toArrow:(id)arg5;
- (id)_makePointIconWithMarker:(id)arg1 fallbackColor:(id)arg2;
- (id)_makePointLabelWithText:(id)arg1;
- (void)_configureRightButton:(id)arg1;
- (id)_cardBgColor;
- (id)_separatorColor;
- (id)_titleDividerColor;
- (id)_routePointTextColor;
- (id)_colorFromString:(id)arg1 fallback:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id /* block */)onTitleTap;
- (void)setOnTitleTap:(id /* block */)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (id)distanceLabel;
- (void)setDistanceLabel:(id)arg1;
- (id)titleDivider;
- (void)setTitleDivider:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)tagsContainer;
- (void)setTagsContainer:(id)arg1;
- (id)tagStack;
- (void)setTagStack:(id)arg1;
- (id)upperStack;
- (void)setUpperStack:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)routePointsRow;
- (void)setRoutePointsRow:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)buttonJumpData;
- (void)setButtonJumpData:(id)arg1;
- (id)currentBizData;
- (void)setCurrentBizData:(id)arg1;
- (BOOL)isCardSelected;
- (void)setIsCardSelected:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (double)lastTagLayoutWidth;
- (void)setLastTagLayoutWidth:(double)arg1;
- (id)chevronWidthConstraint;
- (void)setChevronWidthConstraint:(id)arg1;
- (id)chevronHeightConstraint;
- (void)setChevronHeightConstraint:(id)arg1;
- (id)titleIconWidthConstraint;
- (void)setTitleIconWidthConstraint:(id)arg1;
- (id)titleIconHeightConstraint;
- (void)setTitleIconHeightConstraint:(id)arg1;
- (id)titleDividerHeightConstraint;
- (void)setTitleDividerHeightConstraint:(id)arg1;
- (id)titleDividerWidthConstraint;
- (void)setTitleDividerWidthConstraint:(id)arg1;
- (void).cxx_destruct;
@end
