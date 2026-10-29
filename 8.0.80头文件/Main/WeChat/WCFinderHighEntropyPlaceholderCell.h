@interface WCFinderHighEntropyPlaceholderCell : UITableViewCell
{
    UIView * _bottomSeparator; // +0x8
    WCFinderSizingRichTextView * _wordingTextView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (id)wordingColor;
- (void)updateWordingAppearance;
- (void)updateArrowImage;
- (void)traitCollectionDidChange:(id)arg1;
- (id)bottomSeparator;
- (void)setBottomSeparator:(id)arg1;
- (id)wordingTextView;
- (void)setWordingTextView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
