@interface WCFinderProfileRedPacketEventView : UIView
{
    NSNumber * _theStyle; // +0x8
    CGSize _mIntrinsicContentSize; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void)didMoveToSuperview;
- (void)ensureStyle;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)setBigCardStyle;
- (void)setupThinkStyle:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)onTapClose;
- (void)onClickSelf;
- (id)theStyle;
- (void)setTheStyle:(id)arg1;
- (CGSize)mIntrinsicContentSize;
- (void)setMIntrinsicContentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

