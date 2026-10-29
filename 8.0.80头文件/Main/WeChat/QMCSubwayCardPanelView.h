@interface QMCSubwayCardPanelView : UIView
{
    id /* block */ _onButtonTap; // +0x8
    id /* block */ _onMainJumpTap; // +0x10
    id /* block */ _imageLoader; // +0x18
    NSArray * _rawButtons; // +0x20
    NSDictionary * _mainJump; // +0x28
    UIImageView * _chevronView; // +0x30
    UIView * _buttonContainer; // +0x38
}
- (void)configureWithSlot:(id)arg1;
- (id)currentJumpParams;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_handleButtonTap:(id)arg1;
- (void)_handleLeftAreaTap;
- (void)_loadChevronIcon;
- (void)_reloadIcons;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)rawButtons;
- (void)setRawButtons:(id)arg1;
- (id)mainJump;
- (void)setMainJump:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)buttonContainer;
- (void)setButtonContainer:(id)arg1;
- (void).cxx_destruct;
@end
