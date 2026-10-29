@interface FavRecordReferView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView * _thumbImageView; // +0x8
    UIView * _highlightView; // +0x10
    UIView * _referLineView; // +0x18
    RichTextView * _richTextView; // +0x20
}
+ (CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 outArrStyles:(id *)arg4 hasImage:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithSize:(CGSize)arg1 arrStyles:(id)arg2;
- (void)setThumbImage:(id)arg1;
- (void)onStateChanged:(id)arg1;
- (void)onTouchEffect;
- (void)onTouchRemoveEffect;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)thumbImageView;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)referLineView;
- (void)setReferLineView:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end
