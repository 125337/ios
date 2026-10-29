@interface MMFinderLiveRecommandSettingSheet : MMPageSheetBaseView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    WCTableViewManager * _tableViewManager; // +0x10
    FinderLiveUserAttrUserSetting * _userSetting; // +0x18
}
+ (id)showWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureUI;
- (void)configureOptionTableView;
- (void)addSettingSections;
- (void)addRecommendToFriendsSettingsSection;
- (void)addRecommendAeraSettingsSection;
- (id)genAllCityCell;
- (id)genSomeCityCell;
- (id)genSelectCityCellWithStr:(id)arg1 size:(CGSize)arg2;
- (void)openSelectCityInfo;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (void)updateDataOnSubmitPickCity:(id)arg1 vc:(id)arg2;
- (void)sendRecommendOption;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id)getCurrentRightButton;
- (double)tableViewWidth;
- (double)fixedHeight;
- (id)liveTask;
- (id)commonSelectIcon;
- (id)genUpdatedLiteAppQuery;
- (id)getTranslateRecommendCitiesMaxString;
- (id)cornerShapeWithSize:(CGSize)arg1 byRoundingCorners:(unsigned long long)arg2;
- (id)headerViewWithTitle:(id)arg1 height:(double)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)userSetting;
- (void)setUserSetting:(id)arg1;
- (void).cxx_destruct;
@end

