@interface WCFinderTextDetailItemView : UICollectionViewCell <WCFinderSizingRichTextDelegate>
{
    WCFinderSizingRichTextView * _titleView; // +0x8
    WCFinderSizingRichTextView * _detailView; // +0x10
    WCFinderSizingRichTextLayout * _titleLayout; // +0x18
    WCFinderSizingRichTextLayout * _detailLayout; // +0x20
    UIImageView * _arrowIcon; // +0x28
    id <WCFinderTextDetailItemDelegate> _delegate; // +0x30
    MoreInfoItem * _item; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (void)layoutSubviews;
- (void)onExpandableRichTextViewTapped:(id)arg1;
- (BOOL)accessibilityActivate;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)titleLayout;
- (void)setTitleLayout:(id)arg1;
- (id)detailLayout;
- (void)setDetailLayout:(id)arg1;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void).cxx_destruct;
@end
