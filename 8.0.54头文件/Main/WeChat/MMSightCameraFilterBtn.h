@interface MMSightCameraFilterBtn : MMUIButton
{
    UIView * _colorView; // +0x8
    UILabel * _filterTitleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)updateWithFilterItem:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)colorView;
- (void)setColorView:(id)arg1;
- (id)filterTitleLabel;
- (void)setFilterTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

