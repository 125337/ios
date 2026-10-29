@interface WCFinderGameTitleAuthItemView : UIView
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _contentLabel; // +0x10
    AchievementInfo_GameAchievement * _gameAchievement; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDisplayCovered:(BOOL)arg1;
- (void)setGameAchievement:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)gameAchievement;
- (void).cxx_destruct;
@end

