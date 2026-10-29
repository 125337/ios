@interface WCFinderPersonalizedSettingViewController : MMUIViewController
{
    unsigned long long _options; // +0x68
    WCTableViewManager * _tableViewManager; // +0x70
    WCFinderCustomPanelSheet * _panelSheet; // +0x78
}
- (void)viewDidLoad;
- (void)configureTableView;
- (void)reloadTableView;
- (void)addPersonalizedRecommendationSet;
- (void)changePersonalizedRecommendationVideo;
- (void)changePersonalizedRecommendationLive;
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
- (void).cxx_destruct;
@end

