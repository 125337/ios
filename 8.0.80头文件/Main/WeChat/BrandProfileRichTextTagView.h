@interface BrandProfileRichTextTagView : UIView <UIGestureRecognizerDelegate>
{
    RichTextView * _richTextView; // +0x8
    NSArray * _tagViews; // +0x10
    id <BrandProfileRichTextTagViewDelegate> _textTagViewDelegate; // +0x18
    NSArray * _tagSizes; // +0x20
    double _limitWidth; // +0x28
    unsigned long long _limitLineNumber; // +0x30
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x38
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x40
}
+ (double)p_totalTagWidthWithSizes:(id)arg1;
+ (double)p_maxTagHeightWithSizes:(id)arg1;
+ (id)p_filterValidSizes:(id)arg1;
+ (id)p_tagSizesFromViews:(id)arg1 sizes:(id)arg2;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 hasTag:(BOOL)arg7 tagImageSize:(CGSize)arg8;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 tagImageSizes:(id)arg7;
+ (long long)getCurrentLinesWithFont:(id)arg1 lineSpacing:(double)arg2 size:(CGSize)arg3;
+ (double)lastLineWidth:(id)arg1;
+ (BOOL)canTagsAddByLineEnd:(id)arg1 tagSizes:(id)arg2 limitWidth:(double)arg3;
+ (BOOL)canTagAddByLineBreak:(id)arg1 limitLineNumber:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupTapGesture;
- (void)onTap;
- (void)onLongPress:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTagViewHidden:(BOOL)arg1;
- (void)setTagView:(id)arg1 size:(CGSize)arg2;
- (void)setTagViews:(id)arg1 sizes:(id)arg2;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3;
- (void)initSubviews;
- (void)layoutTagView;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)tagImageView;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)tagViews;
- (void)setTagViews:(id)arg1;
- (id)textTagViewDelegate;
- (void)setTextTagViewDelegate:(id)arg1;
- (id)tagSizes;
- (void)setTagSizes:(id)arg1;
- (double)limitWidth;
- (void)setLimitWidth:(double)arg1;
- (unsigned long long)limitLineNumber;
- (void)setLimitLineNumber:(unsigned long long)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
