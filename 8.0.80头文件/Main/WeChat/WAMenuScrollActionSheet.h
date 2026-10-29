@interface WAMenuScrollActionSheet : MMScrollActionSheet
{
    BOOL _emphasizeGameRewardsWhenAppear; // +0x8
    BOOL _emphasizePCHandoffWhenAppear; // +0x9
    BOOL _useMiniToolListStyle; // +0xa
    BOOL _needPreferredActionInReloadAnimation; // +0xb
    unsigned long long _source; // +0x10
    NSString * _userName; // +0x18
    WAMenuAboveHeaderView * _topView; // +0x20
    WAMenuHeaderView * _headerView; // +0x28
    WAProfileLogicController * _profileLogicController; // +0x30
    UIPanGestureRecognizer * _miniToolDragGesture; // +0x38
    double _miniToolDragStartCenterY; // +0x40
}
- (id)initWithUserName:(id)arg1;
- (BOOL)disableScrollSheetItem:(long long)arg1;
- (double)customIconMargin;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (void)preferredActionInReloadAnimation;
- (void)addSmallRedDotForViewWithTitle:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)relayoutForUpdate;
- (void)emphasizeItemIfNeeded;
- (void)layoutTopView;
- (void)onTopViewTaped;
- (void)setHeaderView:(id)arg1;
- (void)setupMiniToolDragGestureIfNeeded:(id)arg1;
- (void)onMiniToolHeaderPan:(id)arg1;
- (void)tryUpdateData:(id)arg1;
- (void)updatePageInfo;
- (void)configHeaderView:(id)arg1 withCommentInfo:(id)arg2 withoutRecommendModule:(BOOL)arg3;
- (void)configHeaderView:(id)arg1 withActivityInfo:(id)arg2;
- (void)configHeaderView:(id)arg1 withMinitoolInfo:(id)arg2;
- (id)profileLogicController;
- (id)bottomPadddingViewBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (id)topView;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (BOOL)emphasizeGameRewardsWhenAppear;
- (void)setEmphasizeGameRewardsWhenAppear:(BOOL)arg1;
- (BOOL)emphasizePCHandoffWhenAppear;
- (void)setEmphasizePCHandoffWhenAppear:(BOOL)arg1;
- (BOOL)useMiniToolListStyle;
- (void)setUseMiniToolListStyle:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)needPreferredActionInReloadAnimation;
- (void)setNeedPreferredActionInReloadAnimation:(BOOL)arg1;
- (void)setTopView:(id)arg1;
- (id)headerView;
- (void)setProfileLogicController:(id)arg1;
- (id)miniToolDragGesture;
- (void)setMiniToolDragGesture:(id)arg1;
- (double)miniToolDragStartCenterY;
- (void)setMiniToolDragStartCenterY:(double)arg1;
- (void).cxx_destruct;
@end
