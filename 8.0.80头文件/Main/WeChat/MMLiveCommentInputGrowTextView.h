@interface MMLiveCommentInputGrowTextView : MMGrowTextView
{
    CGRect _lastTextMaskFrame; // +0xb8
    CGPoint _lastTextMaskCenter; // +0xd8
    double _measuredTextHeight; // +0xe8
}
- (long long)overrideUserInterfaceStyle;
- (void)initDictationIconIfNeeded;
- (void)layoutSubviews;
- (CGSize)adjustSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showDictationIcon:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideDictationIcon;
- (void)hideDictationIconTemporary:(BOOL)arg1;
- (void)recoverDictationIconTemporary;
- (void)updateLiveDictationTextMask;
@end
