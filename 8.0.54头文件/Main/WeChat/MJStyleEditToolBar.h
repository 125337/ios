@interface MJStyleEditToolBar : UIView
{
    id /* block */ _cancelBlock; // +0x8
    id /* block */ _doneBlock; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _doneButton; // +0x20
    MMUIButton * _cancelButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id)titleLabel;
- (id)doneButton;
- (id)cancelButton;
- (void).cxx_destruct;
@end

