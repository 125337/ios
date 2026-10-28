@interface MJMovieTextButton : MMUIButton
{
    unsigned long long _style; // +0x8
    MMTextView * _textView; // +0x10
    MMTextView * _placeholderView; // +0x18
}
+ (id)buildTextViewWithFont:(id)arg1 maximumNumberOfLines:(unsigned long long)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setupViews;
- (void)setText:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)textView;
- (id)placeholderView;
- (id)_textView;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextView:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void).cxx_destruct;
@end
