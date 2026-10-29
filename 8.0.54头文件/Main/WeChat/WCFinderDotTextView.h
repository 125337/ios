@interface WCFinderDotTextView : UIView
{
    RichTextView * _textView; // +0x8
    UIView * _dotView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)dotView;
- (id)textView;
- (void)updateFont:(id)arg1 content:(id)arg2;
- (void)setTextView:(id)arg1;
- (void)setDotView:(id)arg1;
- (void).cxx_destruct;
@end

