@interface VoiceTransTextMessageCellViewV2 : TextMessageCellView
{
    BOOL _isAnimating; // +0xc0
}
- (BOOL)shouldLayoutIfNeeded;
- (void)prepareForReuse;
- (void)updateUI;
- (void)layoutUI;
- (void)expandFromCollapse;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
@end
