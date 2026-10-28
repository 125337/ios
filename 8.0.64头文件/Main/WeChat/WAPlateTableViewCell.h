@interface WAPlateTableViewCell : MMBaseMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    BOOL _enableToggle; // +0x31
    double _edgeLeft; // +0x38
    NSString * _titleDesc; // +0x40
    MMUILabel * _titleLable; // +0x48
    UIImageView * _toggledImageView; // +0x50
}
+ (double)viewHeight;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateView;
- (double)edgeLeft;
- (void)setEdgeLeft:(double)arg1;
- (id)titleDesc;
- (void)setTitleDesc:(id)arg1;
- (BOOL)enableToggle;
- (void)setEnableToggle:(BOOL)arg1;
- (id)titleLable;
- (void)setTitleLable:(id)arg1;
- (id)toggledImageView;
- (void)setToggledImageView:(id)arg1;
- (void).cxx_destruct;
@end
