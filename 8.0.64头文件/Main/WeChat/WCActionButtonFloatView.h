@interface WCActionButtonFloatView : MMUIView <CAAnimationDelegate>
{
    WCDataItem * _dataItem; // +0x8
    UIButton * _actionButton; // +0x10
    NSString * _title; // +0x18
    CGPoint _showPoint; // +0x20
}
- (id)initWithTitle:(id)arg1;
- (void)showWithItemData:(id)arg1 tipPoint:(CGPoint)arg2;
- (void)hide;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (CGPoint)showPoint;
- (void)setShowPoint:(CGPoint)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
