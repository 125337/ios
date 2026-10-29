@interface WCFinderBlurBubbleView : UIView
{
    BOOL _hasTriangleArrow; // +0x8
    BOOL _useRawContent; // +0x9
    UIView * _bubbleBGView; // +0x10
    WCFinderCustomImageRichTextView * _bubbleTextView; // +0x18
    UIView * _textViewContainer; // +0x20
    UIView * _triangleBViewShadowView; // +0x28
    UIImageView * _triangleBView; // +0x30
    UIColor * _bkColor; // +0x38
    UIColor * _fontColor; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 bkColor:(id)arg2 fontColor:(id)arg3;
- (BOOL)updateBlurBubbleViewWithCustomTitle:(id)arg1 labelMaxWid:(double)arg2;
- (id)replaceDynamicIconColorWithContent:(id)arg1 colorString:(id)arg2;
- (void)updateBottomTipsLayoutWithOffset:(double)arg1;
- (BOOL)hasTriangleArrow;
- (void)setHasTriangleArrow:(BOOL)arg1;
- (id)bubbleBGView;
- (void)setBubbleBGView:(id)arg1;
- (id)bubbleTextView;
- (void)setBubbleTextView:(id)arg1;
- (id)textViewContainer;
- (void)setTextViewContainer:(id)arg1;
- (id)triangleBViewShadowView;
- (void)setTriangleBViewShadowView:(id)arg1;
- (id)triangleBView;
- (void)setTriangleBView:(id)arg1;
- (id)bkColor;
- (void)setBkColor:(id)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (BOOL)useRawContent;
- (void)setUseRawContent:(BOOL)arg1;
- (void).cxx_destruct;
@end

