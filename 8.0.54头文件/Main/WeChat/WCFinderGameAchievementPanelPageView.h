@interface WCFinderGameAchievementPanelPageView : UICollectionViewCell
{
    AchievementInfo_GameAchievement * _gameAchievement; // +0x8
    MMWebImageView * _iconView; // +0x10
    MMWebImageView * _hdIconView; // +0x18
    UILabel * _itemNameLabel; // +0x20
    WCFinderLinearView * _achievementView; // +0x28
    UILabel * _achievementNameLabel; // +0x30
}
+ (double)displayHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setGameAchievement:(id)arg1;
- (void)layoutSubviews;
- (id)gameAchievement;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)hdIconView;
- (void)setHdIconView:(id)arg1;
- (id)itemNameLabel;
- (void)setItemNameLabel:(id)arg1;
- (id)achievementView;
- (void)setAchievementView:(id)arg1;
- (id)achievementNameLabel;
- (void)setAchievementNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

