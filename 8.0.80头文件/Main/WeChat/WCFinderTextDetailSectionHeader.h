@interface WCFinderTextDetailSectionHeader : UICollectionReusableView <WCFinderSizingRichTextDelegate>
{
    id <WCFinderTextDetailItemDelegate> _delegate; // +0x8
    _WCFinderTextDetailSection * _section; // +0x10
    WCFinderSizingRichTextView * _titleView; // +0x18
    WCFinderSizingRichTextLayout * _titleLayout; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSection:(id)arg1;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)section;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)titleLayout;
- (void)setTitleLayout:(id)arg1;
- (void).cxx_destruct;
@end
