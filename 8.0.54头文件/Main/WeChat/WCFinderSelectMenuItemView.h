@interface WCFinderSelectMenuItemView : UIControl
{
    NSString * _title; // +0x8
    double _cornerRadius; // +0x10
    RichTextView * _textView; // +0x18
}
+ (double)estimatedHeight;
- (id)initWithFrame:(CGRect)arg1;
- (double)getMaxWidth;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (double)cornerRadius;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

