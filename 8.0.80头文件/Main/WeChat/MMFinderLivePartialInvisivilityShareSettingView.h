@interface MMFinderLivePartialInvisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView
{
    MMFinderLivePartialInvisivilitySettingInfo * _partialInvisibleInfo; // +0x8
}
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(BOOL)arg3 rootVC:(id)arg4;
- (void)initSettingInfo:(id)arg1;
- (id)navTitle;
- (double)getContentHeight;
- (void)reloadTableData;
- (void)updateSettingInfo:(id)arg1;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2 viewController:(id)arg3;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (id)getRightViewByCurrentVisibleTags:(double)arg1;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)getCustomViewForCreateVisibleFileList;
- (void)selectVisibleContactsFromRecentSessions;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)selectVisibleTags;
- (id)partialInvisibleInfo;
- (void)setPartialInvisibleInfo:(id)arg1;
- (void).cxx_destruct;
@end
