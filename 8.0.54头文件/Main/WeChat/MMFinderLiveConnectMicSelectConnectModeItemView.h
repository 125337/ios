@interface MMFinderLiveConnectMicSelectConnectModeItemView : UIView
{
    UILabel * _titleLabel; // +0x8
    UIView * _separatorLine; // +0x10
    UIImageView * _selectedIconView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configAllSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithTitle:(id)arg1;
- (void)updateSelectedIconHidden:(BOOL)arg1;
- (void)toggle;
- (void)unToggle;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)selectedIconView;
- (void)setSelectedIconView:(id)arg1;
- (void).cxx_destruct;
@end

