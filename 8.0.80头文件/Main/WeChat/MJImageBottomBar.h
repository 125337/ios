@interface MJImageBottomBar : UIView
{
    UIStackView * _panelButtonsContainer; // +0x8
    MMUIButton * _musicButton; // +0x10
    MMUIButton * _textButton; // +0x18
    MMUIButton * _decoButton; // +0x20
    MMUIButton * _doneButton; // +0x28
    id <MJImageBottomBarDelegate> _delegate; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (void)buttonTouchUpInside:(id)arg1;
- (BOOL)shouldShowMusicButton;
- (id)musicButton;
- (id)textButton;
- (id)decoButton;
- (id)doneButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
