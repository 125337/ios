@interface WAProfileRelatedBrandCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    WAHeaderStackDisplayView * _headerStackView; // +0x18
    UIImageView * _arrowView; // +0x20
    WAProfileRelatedViewModel * _viewModel; // +0x28
    unsigned long long _showIconCount; // +0x30
}
+ (double)viewHeightByDataModel:(id)arg1;
+ (double)cellHeight;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)updateCellRelatedListWith:(id)arg1;
- (void)updateCellTitle;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
