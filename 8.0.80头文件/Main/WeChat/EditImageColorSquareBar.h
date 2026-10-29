@interface EditImageColorSquareBar : MMUIView
{
    BOOL _layoutsVertically; // +0x8
    BOOL _useCompactLayout; // +0x9
    id <EditImageColorSquareBarDelegate> _m_delegate; // +0x10
    NSArray * _colorArr; // +0x18
    long long _colorIndex; // +0x20
    UIScrollView * _scrollView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 withDelegate:(id)arg2 withDefaultColorIndex:(long long)arg3;
- (void)initView;
- (void)reloadView;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)colorDescAtIndex:(unsigned long long)arg1;
- (void)setUnSelectedColor;
- (void)setColorBarScrollEnable:(BOOL)arg1;
- (id)colorBarPanGesture;
- (void)onClickColorButton:(id)arg1;
- (void)setColorSquare:(id)arg1;
- (void)setColorSqaureWithIndex:(long long)arg1;
- (void)setSelectColor:(long long)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)layoutsVertically;
- (void)setLayoutsVertically:(BOOL)arg1;
- (BOOL)useCompactLayout;
- (void)setUseCompactLayout:(BOOL)arg1;
- (id)colorArr;
- (void)setColorArr:(id)arg1;
- (long long)colorIndex;
- (void)setColorIndex:(long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
