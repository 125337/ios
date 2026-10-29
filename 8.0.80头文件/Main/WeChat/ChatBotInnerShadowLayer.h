@interface ChatBotInnerShadowLayer : CAShapeLayer
{
    int _shadowMask; // +0x8
}
- (id)init;
- (void)layoutSublayers;
- (void)setShadowMask:(int)arg1;
- (void)setShadowColor:(CGColor *)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowOffset:(CGSize)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (int)shadowMask;
@end
