@interface MMLiveConnectMicStatisticsItemView : UIView
{
    BOOL _showTipsIconView; // +0x8
    id <MMLiveConnectMicStatisticsItemViewDelegate> _actionDelegate; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _valueLabel; // +0x20
    UIImageView * _tipsIconView; // +0x28
    UIView * _tipsIconContainerView; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
}
- (id)initWithShowTipsIconView:(BOOL)arg1;
- (void)layoutSubviews;
- (void)configUI;
- (void)handleTapGesture:(id)arg1;
- (void)layoutUI;
- (void)updateTitle:(id)arg1 value:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (BOOL)showTipsIconView;
- (void)setShowTipsIconView:(BOOL)arg1;
- (id)tipsIconView;
- (void)setTipsIconView:(id)arg1;
- (id)tipsIconContainerView;
- (void)setTipsIconContainerView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
