@interface WCFinderShadowBubbleView : UIView
{
    BOOL _useRawContent; // +0x8
    unsigned int _shadowBubbleType; // +0xc
    UIView * _bubbleBGView; // +0x10
    WCFinderRichTextView * _bubbleTextView; // +0x18
    UIView * _textViewContainer; // +0x20
    UIImageView * _triangleBView; // +0x28
    UIColor * _bkColor; // +0x30
    UIColor * _fontColor; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 bkColor:(id)arg2 fontColor:(id)arg3;
- (BOOL)updateShadowBubbleViewWithCustomTitle:(id)arg1 labelMaxWid:(double)arg2;
- (id)replaceDynamicIconColorWithContent:(id)arg1 colorString:(id)arg2;
- (BOOL)updateShadowBubbleViewWithType:(unsigned int)arg1 labelMaxWid:(double)arg2;
- (void)updateBottomTipsLayoutWithOffset:(double)arg1;
- (void)updateTopTipsLayoutWithOffset:(double)arg1;
- (unsigned int)shadowBubbleType;
- (void)setShadowBubbleType:(unsigned int)arg1;
- (id)bubbleBGView;
- (void)setBubbleBGView:(id)arg1;
- (id)bubbleTextView;
- (void)setBubbleTextView:(id)arg1;
- (id)textViewContainer;
- (void)setTextViewContainer:(id)arg1;
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
