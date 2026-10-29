@interface MMScrollStackCell : UIView
{
    BOOL _isHighlightable; // +0x8
    id /* block */ _onTap; // +0x10
    MMScrollStack * _stack; // +0x18
    UIView * _contentView; // +0x20
}
- (id)initWithView:(id)arg1 stack:(id)arg2;
- (void)initView;
- (void)setOnTap:(id /* block */)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isHighlightable;
- (void)setIsHighlightable:(BOOL)arg1;
- (id /* block */)onTap;
- (id)stack;
- (void)setStack:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

