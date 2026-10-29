@interface MMLiveMiniGamePkOverlayView : UIView
{
    id /* block */ _onBackToGameButtonClicked; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _messageLabel; // +0x18
    UIButton * _backToGameButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)handleBackToGameButtonClicked;
- (id /* block */)onBackToGameButtonClicked;
- (void)setOnBackToGameButtonClicked:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)backToGameButton;
- (void)setBackToGameButton:(id)arg1;
- (void).cxx_destruct;
@end
