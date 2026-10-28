@interface ChatBotInnerShadowView : UIView
{
    ChatBotInnerShadowLayer * _innerShadowLayer; // +0x8
}
- (void)_init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (int)shadowMask;
- (void)setShadowMask:(int)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowOpacity;
- (void)setShadowOpacity:(double)arg1;
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)innerShadowLayer;
- (void).cxx_destruct;
@end
