@interface WCFinderProfileRedPacketEventView : UIView
{
    NSNumber * _theStyle; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
    CGSize _mIntrinsicContentSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (long long)style;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 style:(long long)arg3;
- (void)_updateEventView;
- (void)setStyle:(long long)arg1;
- (void)didMoveToSuperview;
- (void)ensureStyle;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)setBigCardStyle;
- (void)setupThinkStyle:(id)arg1 subTitle:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)onTapClose;
- (void)onClickSelf;
- (id)theStyle;
- (void)setTheStyle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (CGSize)mIntrinsicContentSize;
- (void)setMIntrinsicContentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
