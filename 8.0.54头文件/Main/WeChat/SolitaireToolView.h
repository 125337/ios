@interface SolitaireToolView : UIView
{
    id <SolitaireToolViewDelegate> _delegate; // +0x8
    UIView * _buttonContainerView; // +0x10
}
- (id)init;
- (void)initView;
- (id)getButtonTitle:(int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getButtonImage:(int)arg1;
- (id)getButtonHLImage:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg1;
- (void).cxx_destruct;
@end

