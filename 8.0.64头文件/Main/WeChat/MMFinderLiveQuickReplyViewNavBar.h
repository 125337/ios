@interface MMFinderLiveQuickReplyViewNavBar : UIView
{
    id /* block */ _actionCallback; // +0x8
    MMUIButton * _leftButton; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    FixTitleColorButton * _rightButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateCompleteButtonState:(BOOL)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutSubTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (id)titleLabel;
- (id)subTitleLabel;
- (void)onTapDone;
- (void)onTapCancel;
- (void)headerButtonAction:(BOOL)arg1;
- (id /* block */)actionCallback;
- (void)setActionCallback:(id /* block */)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void).cxx_destruct;
@end
