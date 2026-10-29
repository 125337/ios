@interface WAOverallAuthListCell : UITableViewCell <MMWebImageViewDelegate, ZZFlexibleLayoutViewProtocol>
{
    UIImage * _defaultHeaderImage; // +0x8
    NSArray * _scopeList; // +0x10
    MMWebImageView * _headImageView; // +0x18
    UIView * _titleDescContainerView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIView * _arrowView; // +0x38
}
+ (double)viewHeightByDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)initSubviews;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)layoutSubviews;
- (id)getFitDescWithDescList:(id)arg1 width:(double)arg2;
- (BOOL)isDescFit:(id)arg1 width:(double)arg2;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleDescContainerView;
- (void)setTitleDescContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

