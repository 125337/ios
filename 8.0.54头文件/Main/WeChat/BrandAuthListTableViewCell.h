@interface BrandAuthListTableViewCell : UITableViewCell
{
    double _superWith; // +0x8
    MMWebImageView * _headerView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    UIView * _seperatorLineView; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSuperWidth:(double)arg1;
- (void)applyScopeItem:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)getScopeDescString:(id)arg1;
- (id)concatWords:(id)arg1 andMaxIndexs:(long long)arg2;
- (BOOL)checkLargerThanOne:(id)arg1;
- (id)headerView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)arrowView;
- (id)seperatorLineView;
- (double)superWith;
- (void)setSuperWith:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setSeperatorLineView:(id)arg1;
- (void).cxx_destruct;
@end

