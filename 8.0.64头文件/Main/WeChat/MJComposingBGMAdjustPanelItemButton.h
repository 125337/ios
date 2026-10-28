@interface MJComposingBGMAdjustPanelItemButton : MMUIView
{
    BOOL _isSelected; // +0x8
    MMUIButton * _button; // +0x10
    MMUILabel * _label; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configIcon:(id)arg1 forState:(unsigned long long)arg2;
- (void)configText:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)button;
- (id)label;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
