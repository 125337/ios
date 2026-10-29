@interface MMFinderLiveFansGroupDailyIntimacyTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    MMUILabel * _dailyTaskLabel; // +0x10
    MMUILabel * _speedupLabel; // +0x18
    MMUILabel * _dailyMaxIntimacy; // +0x20
    MMUILabel * _dailyCurIntimacy; // +0x28
    MMFinderLiveFansGroupIntimacyInfo * _intimacyInfo; // +0x30
}
+ (double)getPreferHeightWithIntimacyInfo:(id)arg1;
+ (double)getCellBottomPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)configWithIntimacyInfo:(id)arg1;
- (void)layoutDailyTaskLabel;
- (id)dailyTaskLabel;
- (void)setDailyTaskLabel:(id)arg1;
- (id)speedupLabel;
- (void)setSpeedupLabel:(id)arg1;
- (id)dailyMaxIntimacy;
- (void)setDailyMaxIntimacy:(id)arg1;
- (id)dailyCurIntimacy;
- (void)setDailyCurIntimacy:(id)arg1;
- (id)intimacyInfo;
- (void)setIntimacyInfo:(id)arg1;
- (void).cxx_destruct;
@end
