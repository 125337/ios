@interface MMFinderLiveTrailingButtonTextView : UIView <RichTextLayoutDelegate>
{
    id /* block */ _onTrailingButtonTapped; // +0x8
    RichTextView * _subtitleTextView; // +0x10
    MMUIButton * _detailButton; // +0x18
    MMFinderLiveTrailingButtonTextViewStyle * _style; // +0x20
}
- (id)initWithStyle:(id)arg1;
- (void)sizeToFitWithMaxWidth:(double)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)initSubviews;
- (void)reloadUIWithCurrentStyle;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onButtonTapped;
- (id /* block */)onTrailingButtonTapped;
- (void)setOnTrailingButtonTapped:(id /* block */)arg1;
- (id)subtitleTextView;
- (void)setSubtitleTextView:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void).cxx_destruct;
@end

