@interface WASMPageSheetBellringView : UIView
{
    BOOL _selected; // +0x8
    MMUIButton * _button; // +0x10
    UIButton * _iconButton; // +0x18
    id /* block */ _selectedAction; // +0x20
    id /* block */ _showTipsView; // +0x28
}
+ (CGSize)viewSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)onSelectedButtonClickWithShowToast:(BOOL)arg1 toastText:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)selected;
- (id)button;
- (void)setButton:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id /* block */)selectedAction;
- (void)setSelectedAction:(id /* block */)arg1;
- (id /* block */)showTipsView;
- (void)setShowTipsView:(id /* block */)arg1;
- (void).cxx_destruct;
@end
