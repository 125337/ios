@interface CBTAsstMiniToolViewController : MMUIViewController <ChatBotMiniToolListViewDelegate, CBTReddotObserverBase>
{
    ChatBotMiniToolListView * _toolListView; // +0x70
    MMUIButton * _backBtn; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMUILabel * _subtitleLabel; // +0x88
    MMUILabel * _navTitleLabel; // +0x90
    double _titleAreaHeight; // +0x98
    NSSet * _reddotAppIds; // +0xa0
    NSDictionary * _reddotIdByAppId; // +0xa8
    NSDictionary * _reddotIdsByAppId; // +0xb0
    CBTReddotObserver * _reddotObserver; // +0xb8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutBackBtn;
- (void)layoutNavTitleLabel;
- (void)layoutTitleLabel;
- (void)layoutSubtitleLabel;
- (void)updateTitlePositionWithOffset:(double)arg1;
- (void)setupToolListView;
- (double)safeAreaTop;
- (void)loadUserToolList;
- (void)loadReddotDataWithConsumeUnmatched:(BOOL)arg1;
- (void)consumeReddotIfNeededForAppId:(id)arg1;
- (void)onReddotChanged:(id)arg1;
- (void)onReddotItemConsumed:(long long)arg1;
- (BOOL)checkAndShowToolCountLimitTipForScene:(id)arg1;
- (void)miniToolListViewDidTapCreateTool:(id)arg1;
- (void)miniToolListView:(id)arg1 didTapLiteAppTool:(id)arg2 isRecommend:(BOOL)arg3;
- (void)miniToolListView:(id)arg1 didTapWeAppTool:(id)arg2 isRecommend:(BOOL)arg3;
- (long long)widgetTypeForTool:(id)arg1 listView:(id)arg2 isRecommend:(BOOL)arg3;
- (void)miniToolListView:(id)arg1 didScroll:(id)arg2;
- (void)openLiteAppWithToolInfo:(id)arg1;
- (id)createLiteAppStore;
- (void)openWeAppWithToolInfo:(id)arg1 isRecommend:(BOOL)arg2;
- (void)openRecommendWeAppWithToolInfo:(id)arg1;
- (void)openUserWeAppWithToolInfo:(id)arg1;
- (id)recommendToolInfoWithAppId:(id)arg1;
- (void)miniToolListView:(id)arg1 didDeleteToolAtIndex:(long long)arg2 toolInfo:(id)arg3;
- (void)miniToolListView:(id)arg1 didTapEditToolAtIndex:(long long)arg2 toolInfo:(id)arg3;
- (void)miniToolListView:(id)arg1 willDisplayToolInfo:(id)arg2 atIndex:(long long)arg3 isRecommend:(BOOL)arg4;
- (void)miniToolListView:(id)arg1 didSwipeOpenToolInfo:(id)arg2 atIndex:(long long)arg3 editEnabled:(BOOL)arg4;
- (long long)indexForTool:(id)arg1 isRecommend:(BOOL)arg2;
- (id)toolCellParamsWithToolInfo:(id)arg1 index:(long long)arg2 widgetType:(long long)arg3;
- (void)reportViewEventWithViewId:(id)arg1 eventId:(id)arg2 toolInfo:(id)arg3 index:(long long)arg4 widgetType:(long long)arg5;
- (void)reportCreateWidgetClick;
- (void)reportUpperLimitTipExposure;
- (void)reportToolCellClickWithToolInfo:(id)arg1 index:(long long)arg2 widgetType:(long long)arg3;
- (void)close;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)toolListView;
- (void)setToolListView:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)navTitleLabel;
- (void)setNavTitleLabel:(id)arg1;
- (double)titleAreaHeight;
- (void)setTitleAreaHeight:(double)arg1;
- (id)reddotAppIds;
- (void)setReddotAppIds:(id)arg1;
- (id)reddotIdByAppId;
- (void)setReddotIdByAppId:(id)arg1;
- (id)reddotIdsByAppId;
- (void)setReddotIdsByAppId:(id)arg1;
- (id)reddotObserver;
- (void)setReddotObserver:(id)arg1;
- (void).cxx_destruct;
@end
