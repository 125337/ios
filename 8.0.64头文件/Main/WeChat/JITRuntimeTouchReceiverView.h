@interface JITRuntimeTouchReceiverView : UIView
{
    JITRuntimeView * _view; // +0x8
    NSArray * _sortDescriptors; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 runtimeView:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)convertTouches:(id)arg1;
- (void)handleTouches:(id)arg1 timestamp:(double)arg2 touches:(id)arg3 changedTouches:(id)arg4;
- (id)view;
- (void)setView:(id)arg1;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (void).cxx_destruct;
@end
