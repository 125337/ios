@interface WCFinderJumpInfoBubbleView : WCFinderJumpInfoView
{
    MMWebImageView * _iconImageView; // +0x8
    RichTextView * _textView; // +0x10
    double _leftMargin; // +0x18
    unsigned long long _currentUIStyle; // +0x20
    double _maxTextAreaWidth; // +0x28
    double _maxWidth; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UILabel * _adLabel; // +0x40
    UILabel * _subtitleLabel; // +0x48
}
- (id)init;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)_setupSubtitleLabel:(id)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (id)getIconUrl;
- (void)addShape:(id)arg1;
- (void)layoutUI;
- (void)onActionButtonDidClick;
- (id)iconImageView;
- (id)textView;
- (id)arrowImageView;
- (id)adLabel;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (unsigned long long)currentUIStyle;
- (void)setCurrentUIStyle:(unsigned long long)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
