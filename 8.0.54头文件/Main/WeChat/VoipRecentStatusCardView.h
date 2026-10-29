@interface VoipRecentStatusCardView : UIView
{
    BOOL _isCloseBtnHidden; // +0x8
    UIView * _contentsView; // +0x10
    id /* block */ _didClickCloseButtonCallback; // +0x18
    UIView * _closeView; // +0x20
    UIImageView * _closeLogoImageView; // +0x28
    UIView * _closeHotView; // +0x30
}
- (id)init;
- (void)layoutSubviews;
- (void)onClickCloseViewWithSender:(id)arg1;
- (double)preferredHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onCardShow;
- (void)onTerminate;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (BOOL)isCloseBtnHidden;
- (void)setIsCloseBtnHidden:(BOOL)arg1;
- (id /* block */)didClickCloseButtonCallback;
- (void)setDidClickCloseButtonCallback:(id /* block */)arg1;
- (id)closeView;
- (void)setCloseView:(id)arg1;
- (id)closeLogoImageView;
- (void)setCloseLogoImageView:(id)arg1;
- (id)closeHotView;
- (void)setCloseHotView:(id)arg1;
- (void).cxx_destruct;
@end

