@interface BrandProfileTipsCell : UITableViewCell <ILinkEventExt>
{
    RichTextView * _tipsLabel; // +0x8
    MMUIActivityIndicatorView * _indicatorView; // +0x10
    id <BrandProfileTipsCellDelegate> _delegate; // +0x18
    BrandProfileTipsSectionData * _sectionData; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)setSectionData:(id)arg1;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sectionData;
- (void).cxx_destruct;
@end

