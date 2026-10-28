@interface WCFinderCommentImageLongPressRowView : UIView
{
    UIImageView * _coverView; // +0x8
    UIView * _cardView; // +0x10
    WCFinderSizingRichTextView * _titleView; // +0x18
    UIImageView * _finderLogo; // +0x20
    UILabel * _summaryView; // +0x28
    UIImageView * _arrowView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_doLayout;
- (void)setTitle:(id)arg1 coverUrl:(id)arg2;
- (void)layoutSubviews;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)finderLogo;
- (void)setFinderLogo:(id)arg1;
- (id)summaryView;
- (void)setSummaryView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
