@interface BrandProfileItemUnderlineCell : BrandProfileItemBaseCell
{
    UIImageView * _quoteImageView; // +0x8
    RichTextView * _underlineTextView; // +0x10
    UIImageView * _sourceImageView; // +0x18
    MMUILabel * _sourceLabel; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)quoteImageView;
- (void)setQuoteImageView:(id)arg1;
- (id)underlineTextView;
- (void)setUnderlineTextView:(id)arg1;
- (id)sourceImageView;
- (void)setSourceImageView:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (void).cxx_destruct;
@end
