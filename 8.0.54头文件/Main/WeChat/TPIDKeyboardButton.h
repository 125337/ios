@interface TPIDKeyboardButton : UIButton
{
    UILabel * subtitleLabel; // +0x8
    UIImage * _highlightedImage; // +0x10
}
- (unsigned long long)accessibilityTraits;
- (void)setKeyboardBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)hiddenKeyboardPressedState:(BOOL)arg1;
- (void)dealloc;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)highlightedImage;
- (void)setHighlightedImage:(id)arg1;
@end

