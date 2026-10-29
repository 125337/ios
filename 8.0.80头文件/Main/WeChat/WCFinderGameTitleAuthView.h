@interface WCFinderGameTitleAuthView : UIView
{
    BOOL _displayCovered; // +0x8
    NSMutableArray * _authIconViews; // +0x10
    AchievementInfo * _achievementInfo; // +0x18
}
+ (BOOL)shouldDispalyWithAchievementInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithAchievementInfo:(id)arg1;
- (void)setDisplayCovered:(BOOL)arg1;
- (void)reLayoutElements;
- (void)onClickGameAchievement:(id)arg1;
- (BOOL)displayCovered;
- (id)authIconViews;
- (void)setAuthIconViews:(id)arg1;
- (id)achievementInfo;
- (void)setAchievementInfo:(id)arg1;
- (void).cxx_destruct;
@end
