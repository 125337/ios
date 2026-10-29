@interface WCFinderShadowTipsView : UIView
{
    double _topBottomMargin; // +0x8
    RichTextView * _tipsRichTextView; // +0x10
}
+ (id)genRichTextViewByMaxWidth:(double)arg1;
+ (double)defaultHeightByWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 topBottomMargin:(double)arg2 bgColor:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)tipsRichTextView;
- (void)updateTextColor:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)setUpTips:(id)arg1;
- (double)topBottomMargin;
- (void)setTopBottomMargin:(double)arg1;
- (void)setTipsRichTextView:(id)arg1;
- (void).cxx_destruct;
@end

