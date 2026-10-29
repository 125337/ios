@interface WAPrivacyUsageRecordCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _timeLabel; // +0x10
    UILabel * _pluginDescLabel; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (id)getTimeFormatString:(unsigned int)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)initSubviews;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)pluginDescLabel;
- (void)setPluginDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

