@interface KidsWatchActionCardView : UIView
{
    double _cornerRadius; // +0x8
    double _buttonWidth; // +0x10
    unsigned long long _action; // +0x18
    id /* block */ _tapHandler; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _contentLabel; // +0x30
    KidsWatchButton * _actionButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setButtonWidth:(double)arg1;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)onTapActionButton;
- (double)cornerRadius;
- (double)buttonWidth;
- (unsigned long long)action;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
