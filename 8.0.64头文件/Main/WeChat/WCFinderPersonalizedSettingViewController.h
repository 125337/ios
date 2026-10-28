@interface WCFinderPersonalizedSettingViewController : MMUIViewController
{
    unsigned long long _options; // +0x70
    WCTableViewManager * _tableViewManager; // +0x78
    WCFinderCustomPanelSheet * _panelSheet; // +0x80
    UIButton * _frequentlyQuestionButton; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)configureTableView;
- (void)configureQuestionButton;
- (void)reloadTableView;
- (void)addPersonalizedRecommendationSet;
- (void)changePersonalizedRecommendationVideo;
- (void)changePersonalizedRecommendationLive;
- (void)_didTapCategoryCell;
- (void)_didTapQuestionButton;
- (void)changePersonalizedRecommendationSwitch:(int)arg1;
- (BOOL)getCurrentSwitchFlagWithScene:(int)arg1;
- (void)cancelAlertAction:(id)arg1;
- (void)clickCloseRecommendVideo;
- (void)clickCloseRecommendLive;
- (void)changeRecommendSceneValue:(int)arg1;
- (void)registerYReportSdk;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)panelSheet;
- (void)setPanelSheet:(id)arg1;
- (id)frequentlyQuestionButton;
- (void)setFrequentlyQuestionButton:(id)arg1;
- (void).cxx_destruct;
@end
