@interface WCFinderNotifyAchievementTableViewCell : WCFinderNotifyUnifiedTableViewCell
{
    UIView * _achievementContainer; // +0x8
    UIView * _iconBgView; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _achievementTitleLabel; // +0x20
    UILabel * _achievementTimeLabel; // +0x28
    UILabel * _achievementContentLabel; // +0x30
}
+ (id)iconImageWithAchievementType:(unsigned long long)arg1;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)achievementTextMaxWidthWithFullWidth:(double)arg1 hasThumb:(BOOL)arg2 metrics:(id)arg3;
+ (double)widthForText:(id)arg1 font:(id)arg2;
+ (double)heightForText:(id)arg1 font:(id)arg2 width:(double)arg3 maxLines:(unsigned long long)arg4;
+ (struct)titleTextMetricsForText:(id)arg1 width:(double)arg2 maxLines:(unsigned long long)arg3;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)applyAchievementLayoutMetrics:(id)arg1;
- (id)achievementContainer;
- (void)setAchievementContainer:(id)arg1;
- (id)iconBgView;
- (void)setIconBgView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)achievementTitleLabel;
- (void)setAchievementTitleLabel:(id)arg1;
- (id)achievementTimeLabel;
- (void)setAchievementTimeLabel:(id)arg1;
- (id)achievementContentLabel;
- (void)setAchievementContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
