@interface MMAssetSelectCheckButton : MMUIButton
{
    long long m_selectedIndex; // +0x8
    UILabel * m_selectedIndexView; // +0x10
    UIImageView * m_singleSelectedIndexView; // +0x18
    UIImage * m_normalImage; // +0x20
    UIImage * m_selectedImage; // +0x28
    UIColor * m_backgroundColor; // +0x30
    UIView * _notSelectedView; // +0x38
    UIView * _selectionBlurView; // +0x40
    CGRect _selectedIndexViewFrame; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2;
- (void)setSelectedIndexViewFrame:(CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (id)selectedIndexText;
- (void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setSingleSelectedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setSingleSelectedIndex:(long long)arg1 animated:(BOOL)arg2 animationDuration:(double)arg3;
- (id)selectedView;
- (id)singleSelectedView;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2 animationDuration:(double)arg3;
- (id)notSelectedView;
- (id)selectionBlurView;
- (void)setSelectedIndexViewHidden:(BOOL)arg1;
- (CGRect)selectedIndexViewFrame;
- (void)setNotSelectedView:(id)arg1;
- (void)setSelectionBlurView:(id)arg1;
- (void).cxx_destruct;
@end

