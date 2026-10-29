@interface EmoticonMixedPreviewCell : UICollectionViewCell
{
    MMWebImageView * _webImageView; // +0x8
    UIView * _packHintView; // +0x10
    UILabel * _packHintLabel; // +0x18
    UIView * _moreView; // +0x20
    UIImageView * _moreImg; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)webImageView;
- (id)packHintView;
- (id)moreView;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)updateWithEmojiSummary:(id)arg1;
- (void)updateForMore;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setWebImageView:(id)arg1;
- (void)setPackHintView:(id)arg1;
- (id)packHintLabel;
- (void)setPackHintLabel:(id)arg1;
- (void)setMoreView:(id)arg1;
- (id)moreImg;
- (void)setMoreImg:(id)arg1;
- (void).cxx_destruct;
@end

