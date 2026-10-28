@interface MJInspectorToolBar : MMUIView
{
    BOOL _canPassthroughGesture; // +0x8
    id /* block */ _cancelBlock; // +0x10
    id /* block */ _doneBlock; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIButton * _doneButton; // +0x28
    MMUIButton * _cancelButton; // +0x30
}
+ (id)instanceWithTitle:(id)arg1;
- (void)setupViews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (BOOL)canPassthroughGesture;
- (void)setCanPassthroughGesture:(BOOL)arg1;
- (id)titleLabel;
- (id)doneButton;
- (id)cancelButton;
- (void).cxx_destruct;
@end
