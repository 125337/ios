@interface MMMsgReferPartBlurView : UIView
{
    BOOL _isBehindBlur; // +0x8
    MMReferPartialInfo * _referPartial; // +0x10
    UIColor * _fromColor; // +0x18
    UIColor * _toColor; // +0x20
    RichTextView * _richTextView; // +0x28
    double _start; // +0x30
    double _end; // +0x38
}
- (id)initWithRichTextView:(id)arg1 referPartial:(id)arg2 isBehindBlur:(BOOL)arg3;
- (void)updateBlurView;
- (void)setReferTextBlurColor:(id)arg1;
- (void)updateFrontBlurView;
- (void)updateBehindBlurView;
- (void)updateGradientLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)referPartial;
- (void)setReferPartial:(id)arg1;
- (id)fromColor;
- (void)setFromColor:(id)arg1;
- (id)toColor;
- (void)setToColor:(id)arg1;
- (BOOL)isBehindBlur;
- (void)setIsBehindBlur:(BOOL)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (double)start;
- (void)setStart:(double)arg1;
- (double)end;
- (void)setEnd:(double)arg1;
- (void).cxx_destruct;
@end
