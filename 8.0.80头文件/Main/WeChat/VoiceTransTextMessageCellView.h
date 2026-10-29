@interface VoiceTransTextMessageCellView : TextMessageCellView
{
    BOOL _isAnimating; // +0xc0
}
- (void)layoutContentView;
- (void)addSendingView;
- (BOOL)shouldLayoutIfNeeded;
- (void)updateUI;
- (void)layoutUI;
- (void)onVoiceTransEnd;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
@end
