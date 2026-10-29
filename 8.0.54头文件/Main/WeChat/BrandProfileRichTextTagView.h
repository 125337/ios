@interface BrandProfileRichTextTagView : UIView <UIGestureRecognizerDelegate>
{
    RichTextView * _richTextView; // +0x8
    UIView * _tagImageView; // +0x10
    id <BrandProfileRichTextTagViewDelegate> _textTagViewDelegate; // +0x18
    UIView * _tagView; // +0x20
    double _limitWidth; // +0x28
    unsigned long long _limitLineNumber; // +0x30
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x38
}
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 limitWidth:(double)arg3 lineSpacing:(double)arg4 limitLineNumber:(unsigned long long)arg5 outArrStyles:(id *)arg6 hasTag:(BOOL)arg7 tagImageSize:(CGSize)arg8;
+ (long long)getCurrentLinesWithFont:(id)arg1 lineSpacing:(double)arg2 size:(CGSize)arg3;
+ (double)lastLineWidth:(id)arg1;
+ (BOOL)canTagAddByLineEnd:(id)arg1 tagSize:(CGSize)arg2 limitWidth:(double)arg3;
+ (BOOL)canTagAddByLineBreak:(id)arg1 limitLineNumber:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupTapGesture;
- (void)onTap;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTagViewHidden:(BOOL)arg1;
- (void)setTagView:(id)arg1 size:(CGSize)arg2;
- (void)updateWithArrStyles:(id)arg1 limitWidth:(double)arg2 limitLineNumber:(unsigned long long)arg3;
- (void)initSubviews;
- (void)layoutTagView;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)tagImageView;
- (id)textTagViewDelegate;
- (void)setTextTagViewDelegate:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (double)limitWidth;
- (void)setLimitWidth:(double)arg1;
- (unsigned long long)limitLineNumber;
- (void)setLimitLineNumber:(unsigned long long)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

