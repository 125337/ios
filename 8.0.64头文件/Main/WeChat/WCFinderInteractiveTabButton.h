@interface WCFinderInteractiveTabButton : UIView
{
    BOOL _brickStyle; // +0x8
    UIButton * _btn; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)update:(id)arg1 selected:(BOOL)arg2;
- (BOOL)brickStyle;
- (void)setBrickStyle:(BOOL)arg1;
- (id)btn;
- (void)setBtn:(id)arg1;
- (void).cxx_destruct;
@end
