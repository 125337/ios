@interface AuthorizeCheckBox : UIImageView
{
    BOOL _selected; // +0x8
    id /* block */ _selectBlock; // +0x10
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)internalInit;
- (void)setSelected:(BOOL)arg1;
- (void)addSelectAction:(id /* block */)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)selected;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

