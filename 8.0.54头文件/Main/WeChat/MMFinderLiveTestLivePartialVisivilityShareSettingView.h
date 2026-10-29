@interface MMFinderLiveTestLivePartialVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView
{
    MMFinderLiveTestLivePartialVisivilitySettingInfo * _testLiveSettingInfo; // +0x8
}
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(BOOL)arg3 rootVC:(id)arg4;
- (void)initSettingInfo:(id)arg1;
- (id)navTitle;
- (double)getContentHeight;
- (void)reloadTableData;
- (void)updateSettingInfo:(id)arg1;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (id)getDescriptionForCurrentSetting;
- (void)layoutConfirmButton;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)getCustomViewForCreateVisibleFileList;
- (void)selectTestLiveVisibleContactsFromRecentSessions;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (id)testLiveSettingInfo;
- (void)setTestLiveSettingInfo:(id)arg1;
- (void).cxx_destruct;
@end

