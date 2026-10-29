@interface WCFinderLiveStarterChooseGameSearchPanelView : MMPageSheetBaseView <WCFinderGameLiveListViewControllerDelegate>
{
    BOOL _showSearch; // +0x8
    id <MMFinderLiveStarterChooseGameSearchDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    WCFinderGameLiveListViewController * _gameListViewController; // +0x20
    MMLiveTaskId * _liveTaskId; // +0x28
    NSMutableArray * _gameUserInfoList; // +0x30
}
- (id)initWithTaskId:(id)arg1 gameUserInfoList:(id)arg2 showSearch:(BOOL)arg3 contentViewHeight:(double)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)leftButtonAction;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)gameListViewController;
- (void)setGameListViewController:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)gameUserInfoList;
- (void)setGameUserInfoList:(id)arg1;
- (BOOL)showSearch;
- (void)setShowSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end

