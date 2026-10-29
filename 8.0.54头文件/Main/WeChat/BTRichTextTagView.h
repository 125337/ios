@interface BTRichTextTagView : UIView
{
    RichTextView * _richTextView; // +0x8
    UIView * _tagView; // +0x10
    NSString * _tagAccessibilityLabel; // +0x18
    double _limitWidth; // +0x20
    unsigned long long _limitLineNumber; // +0x28
    double _customTextTagLeftSpacing; // +0x30
    double _customTextTagBottomSpacing; // +0x38
}
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 hasTag:(BOOL)arg7 tagSize:(CGSize)arg8 spacingDic:(id)arg9;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 outArrStyles:(id *)arg7 hasTag:(BOOL)arg8 tagSize:(CGSize)arg9 spacingDic:(id)arg10;
+ (double)lastLineWidth:(id)arg1;
+ (BOOL)canTagAddByLineEnd:(id)arg1 tagSize:(CGSize)arg2 limitWidth:(double)arg3;
+ (BOOL)canTagAddByLineBreak:(id)arg1 limitLineNumber:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTagViewHidden:(BOOL)arg1;
- (void)setTagView:(id)arg1 size:(CGSize)arg2;
- (void)setTagViewAccessibilityLabel:(id)arg1;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3 content:(id)arg4 spacingDic:(id)arg5;
- (void)fitSize;
- (void)setSubviewOrigin;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)tagAccessibilityLabel;
- (void)setTagAccessibilityLabel:(id)arg1;
- (double)limitWidth;
- (void)setLimitWidth:(double)arg1;
- (unsigned long long)limitLineNumber;
- (void)setLimitLineNumber:(unsigned long long)arg1;
- (double)customTextTagLeftSpacing;
- (void)setCustomTextTagLeftSpacing:(double)arg1;
- (double)customTextTagBottomSpacing;
- (void)setCustomTextTagBottomSpacing:(double)arg1;
- (void).cxx_destruct;
@end

