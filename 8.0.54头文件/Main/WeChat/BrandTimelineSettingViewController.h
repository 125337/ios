@interface BrandTimelineSettingViewController : MMUIViewController
{
    BOOL _personalRecommendSwitch; // +0x68
    BOOL _personalRecommendSwitchClickLimit; // +0x69
    BOOL _personalShowUserHeadForPaySwitch; // +0x6a
    BOOL _personalShowUserHeadForPaySwitchClickLimit; // +0x6b
    BOOL _creationCenterNotifySwitch; // +0x6c
    BOOL _creationCenterNotifySwitchClickLimit; // +0x6d
    BOOL _finderRecommendSwitch; // +0x6e
    BOOL _finderRecommendSwitchClickLimit; // +0x6f
    BOOL _hasGotSetting; // +0x70
    int _personalizedOpt; // +0x74
    id <BrandTimelineSettingViewControllerDelegate> _m_delegate; // +0x78
    MMTableViewInfo * _tableViewInfo; // +0x80
    WCTimeLineFooterView * _tableViewFooterView; // +0x88
    WCTableViewSectionManager * _firstSection; // +0x90
    WCTableViewSectionManager * _secondSection; // +0x98
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initFooterView;
- (void)reloadSections;
- (void)genPersonalRecommendSetting;
- (void)genFinderRecommendSetting;
- (void)genPayForHeadSetting;
- (void)genCreationCenterNotifyCountSetting;
- (void)viewDidLayoutSubviews;
- (void)onPersonalRecommendSwitch:(id)arg1;
- (void)onPersonalHeadForPaySwitch:(id)arg1;
- (void)onPersonalCreationCenterNotifySwitch:(id)arg1;
- (void)onFinderRecommendSwitch:(id)arg1;
- (void)_getTimelineSetting;
- (void)showTableViewFooterView;
- (void)_setPersonalRecommendSwitch:(BOOL)arg1;
- (void)_setPersonalHeadForPaySwitch:(BOOL)arg1;
- (void)_setCreationCenterNotifySwitch:(BOOL)arg1;
- (void)_setFinderRecommendSwitch:(BOOL)arg1;
- (void)dealWithPersonalRecommendSwitch:(BOOL)arg1 error:(id)arg2 needReloadSections:(BOOL)arg3;
- (void)dealWithHeadForPaySwitch:(BOOL)arg1 error:(id)arg2 needReloadSections:(BOOL)arg3;
- (void)dealWithCreationCenterNotifySwitch:(BOOL)arg1 error:(id)arg2 needReloadSections:(BOOL)arg3;
- (void)dealWithFinderRecommendSwitch:(BOOL)arg1 error:(id)arg2 needReloadSections:(BOOL)arg3;
- (void)showFailAlertView:(id)arg1 retryBlock:(id /* block */)arg2 returnBlock:(id /* block */)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)tableViewFooterView;
- (void)setTableViewFooterView:(id)arg1;
- (BOOL)personalRecommendSwitch;
- (void)setPersonalRecommendSwitch:(BOOL)arg1;
- (BOOL)personalRecommendSwitchClickLimit;
- (void)setPersonalRecommendSwitchClickLimit:(BOOL)arg1;
- (BOOL)personalShowUserHeadForPaySwitch;
- (void)setPersonalShowUserHeadForPaySwitch:(BOOL)arg1;
- (BOOL)personalShowUserHeadForPaySwitchClickLimit;
- (void)setPersonalShowUserHeadForPaySwitchClickLimit:(BOOL)arg1;
- (BOOL)creationCenterNotifySwitch;
- (void)setCreationCenterNotifySwitch:(BOOL)arg1;
- (BOOL)creationCenterNotifySwitchClickLimit;
- (void)setCreationCenterNotifySwitchClickLimit:(BOOL)arg1;
- (BOOL)finderRecommendSwitch;
- (void)setFinderRecommendSwitch:(BOOL)arg1;
- (BOOL)finderRecommendSwitchClickLimit;
- (void)setFinderRecommendSwitchClickLimit:(BOOL)arg1;
- (id)firstSection;
- (void)setFirstSection:(id)arg1;
- (id)secondSection;
- (void)setSecondSection:(id)arg1;
- (BOOL)hasGotSetting;
- (void)setHasGotSetting:(BOOL)arg1;
- (int)personalizedOpt;
- (void)setPersonalizedOpt:(int)arg1;
- (void).cxx_destruct;
@end

