@interface BrandCustomSharePanelSectionHeaderView : UICollectionReusableView
{
    NSString * _sectionTitle; // +0x8
    UILabel * _sectionTitleLabel; // +0x10
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setSectionTitle:(id)arg1;
- (id)sectionTitle;
- (id)sectionTitleLabel;
- (void)setSectionTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
