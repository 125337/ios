@interface WANativeScrollView : UIView
{
    UIView * _contentView; // +0x8
}
- (id)createContent;
- (void)addSubview:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1;
- (id)getChildView:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void).cxx_destruct;
@end
