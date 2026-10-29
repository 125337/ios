@interface WCFinderHighEntropyHotCommentView : UIView <WCFinderFeedContentVMExt, RichTextLayoutDelegate>
{
    id <WCFinderHighEntropyHotCommentViewDelegate> _delegate; // +0x8
    UILabel * _tagLabel; // +0x10
    RichTextView * _commentTextView; // +0x18
    UIImageView * _thumbIconView; // +0x20
    UILabel * _likeCountLabel; // +0x28
    unsigned long long _suffixType; // +0x30
    NSString * _suffixIconName; // +0x38
    NSString * _currentNormalizedContent; // +0x40
    WCFinderFeedContentVM * _currentContentVM; // +0x48
    WCFinderHighEntropyHotCommentStyleConfig * _styleConfig; // +0x50
    double _textViewTruncatedFY; // +0x58
    double _textViewSuffixReservedWidth; // +0x60
}
+ (id)normalizedContentFromComment:(id)arg1;
+ (double)viewHeightWithContentVM:(id)arg1 maxWidth:(double)arg2;
+ (id)defaultStyleConfig;
+ (id)commentFontWithStyleConfig:(id)arg1;
+ (double)commentLineSpacingWithFont:(id)arg1;
+ (id)tagText;
+ (CGSize)tagSizeWithFont:(id)arg1;
+ (id)attributedTextWithString:(id)arg1 font:(id)arg2 textColor:(id)arg3 lineHeight:(double)arg4 alignment:(long long)arg5;
+ (double)commentTextWidth:(id)arg1 font:(id)arg2;
+ (double)suffixWidthWithComment:(id)arg1;
+ (double)suffixHeightWithComment:(id)arg1;
+ (double)suffixLabelHeightWithFont:(id)arg1;
+ (id)commentTextViewWithContent:(id)arg1 font:(id)arg2 width:(double)arg3 layoutContext:(id)arg4;
+ (double)commentTextHeightWithContent:(id)arg1 comment:(id)arg2 maxWidth:(double)arg3;
+ (BOOL)shouldShowSuffixView;
+ (BOOL)suffixShowIconWithType:(unsigned long long)arg1;
+ (double)suffixElementsMarginWithType:(unsigned long long)arg1;
+ (CGSize)suffixIconSizeWithType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGRect)visibleContentFrame;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbIconColor;
- (void)configureWithContentVM:(id)arg1;
- (id)currentHotComment;
- (void)onTapped;
- (void)onFeedHotCommentChanged:(id)arg1;
- (id)commentFont;
- (void)configureCommentTextViewWithWidth:(double)arg1;
- (void)layoutSuffixWithTextViewOriginY:(double)arg1;
- (double)currentSuffixWidth;
- (void)applyVerticalAlignmentCompensation;
- (void)layoutSuffixAtX:(double)arg1 y:(double)arg2 lineHeight:(double)arg3 hidden:(BOOL)arg4;
- (void)updateSuffixWithComment:(id)arg1;
- (BOOL)_suffixShowIconWithType:(unsigned long long)arg1;
- (BOOL)_suffixTextBeforeIconWithType:(unsigned long long)arg1;
- (double)_suffixElementsMarginWithType:(unsigned long long)arg1;
- (CGSize)_suffixIconSizeWithType:(unsigned long long)arg1;
- (id)_suffixIconColorWithType:(unsigned long long)arg1;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)commentTextView;
- (void)setCommentTextView:(id)arg1;
- (id)thumbIconView;
- (void)setThumbIconView:(id)arg1;
- (id)likeCountLabel;
- (void)setLikeCountLabel:(id)arg1;
- (unsigned long long)suffixType;
- (void)setSuffixType:(unsigned long long)arg1;
- (id)suffixIconName;
- (void)setSuffixIconName:(id)arg1;
- (id)currentNormalizedContent;
- (void)setCurrentNormalizedContent:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (double)textViewTruncatedFY;
- (void)setTextViewTruncatedFY:(double)arg1;
- (double)textViewSuffixReservedWidth;
- (void)setTextViewSuffixReservedWidth:(double)arg1;
- (void).cxx_destruct;
@end
