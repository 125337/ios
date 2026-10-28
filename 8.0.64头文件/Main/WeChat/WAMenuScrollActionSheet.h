@interface WAMenuScrollActionSheet : MMScrollActionSheet
{
    BOOL _highlightGameRewardsWhenAppear; // +0x8
    BOOL _needPreferredActionInReloadAnimation; // +0x9
    unsigned long long _source; // +0x10
    NSString * _userName; // +0x18
    WAMenuAboveHeaderView * _topView; // +0x20
    WAMenuHeaderView * _headerView; // +0x28
    WAProfileLogicController * _profileLogicController; // +0x30
}
- (id)initWithUserName:(id)arg1;
- (void)preferredActionInReloadAnimation;
- (void)dismissAnimated:(BOOL)arg1;
- (void)relayoutForUpdate;
- (void)layoutTopView;
- (void)onTopViewTaped;
- (void)setHeaderView:(id)arg1;
- (void)tryUpdateData:(id)arg1;
- (void)updatePageInfo;
- (void)configHeaderView:(id)arg1 withCommentInfo:(id)arg2 withoutRecommendModule:(BOOL)arg3;
- (void)configHeaderView:(id)arg1 withActivityInfo:(id)arg2;
- (id)profileLogicController;
- (id)bottomPadddingViewBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)topView;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (BOOL)highlightGameRewardsWhenAppear;
- (void)setHighlightGameRewardsWhenAppear:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)needPreferredActionInReloadAnimation;
- (void)setNeedPreferredActionInReloadAnimation:(BOOL)arg1;
- (void)setTopView:(id)arg1;
- (id)headerView;
- (void)setProfileLogicController:(id)arg1;
- (void).cxx_destruct;
@end
