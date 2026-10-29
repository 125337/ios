@interface MMFinderLiveSpinnerLabel : UIView
{
    UILabel * _primaryLabel; // +0x8
    UILabel * _alternativeLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (BOOL)adjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setText:(id)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)setAttributedText:(id)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 completionBlock:(id /* block */)arg4;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)primaryLabel;
- (void)setPrimaryLabel:(id)arg1;
- (id)alternativeLabel;
- (void)setAlternativeLabel:(id)arg1;
- (void).cxx_destruct;
@end
