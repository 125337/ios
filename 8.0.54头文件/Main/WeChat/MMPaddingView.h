@interface MMPaddingView : UIView
{
    UIView * _child; // +0x8
    UIEdgeInsets _padding; // +0x10
}
+ (id)Padding:(UIEdgeInsets)arg1 child:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithPadding:(UIEdgeInsets)arg1 child:(id)arg2;
- (void)setPadding:(UIEdgeInsets)arg1;
- (UIEdgeInsets)padding;
- (id)child;
- (void).cxx_destruct;
@end

