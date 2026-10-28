@interface WCFinderWarningJumpView : WCFinderJumpInfoView
{
    WCFinderJumpInfoIconView * _iconView; // +0x8
    RichTextView * _textView; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 contentVM:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
