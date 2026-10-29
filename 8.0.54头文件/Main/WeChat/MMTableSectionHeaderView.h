@interface MMTableSectionHeaderView : UITableViewHeaderFooterView
{
    UIView * _selectedBackgroundView; // +0x8
    UILabel * _selectedLabel; // +0x10
    UIImageView * _selectedStarImageView; // +0x18
    BOOL _sectionSelected; // +0x20
    WCColorProxy * _colorProxy; // +0x28
    UILabel * _titleLabel; // +0x30
    UIImageView * _starImageView; // +0x38
    UIImageView * _backgroundImageView; // +0x40
    UIColor * _selectedBackgroundColor; // +0x48
    UIView * _bottomLineView; // +0x50
    UIView * _topLineView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (id)colorProxy;
- (void)reloadView;
- (void)setSectionSelected:(BOOL)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)prepareForReuse;
- (void)setColorProxy:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)starImageView;
- (void)setStarImageView:(id)arg1;
- (id)backgroundImageView;
- (id)selectedBackgroundColor;
- (void)setSelectedBackgroundColor:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (BOOL)sectionSelected;
- (void).cxx_destruct;
@end

