@interface MMFinderLiveSettingVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView
{
    BOOL _isTestLiveMode; // +0x8
    BOOL _isChargeableLive; // +0x9
    BOOL _choosePublic; // +0xa
    NSMutableDictionary * _m_dicExistContact; // +0x10
    NSString * _startSelectStr; // +0x18
}
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(BOOL)arg3 isTestLiveMode:(BOOL)arg4 isChargeableLive:(BOOL)arg5 rootVC:(id)arg6;
- (void)initSettingInfo:(id)arg1;
- (id)navTitle;
- (double)getContentHeight;
- (BOOL)isPartVisibilityMode;
- (BOOL)isPublicVisibilityMode;
- (void)onConfirm;
- (void)reloadTableData;
- (id)settingSelectedVisibleFileLists;
- (void)chooseVisibilityMode;
- (id)getChooseVisibilityDetailView;
- (void)updateSettingInfo:(id)arg1;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (id)getDescriptionForCurrentSetting;
- (void)layoutConfirmButton;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)currentRealAllVisibilityFileList:(id)arg1 selectedVisibleFileLists:(id)arg2;
- (id)getCustomViewForCreateVisibleFileList;
- (void)selectTestLiveVisibleContactsFromRecentSessions;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2 viewController:(id)arg3;
- (void)updateDicExistContact;
- (id)m_dicExistContact;
- (BOOL)isTestLiveMode;
- (void)setIsTestLiveMode:(BOOL)arg1;
- (BOOL)isChargeableLive;
- (void)setIsChargeableLive:(BOOL)arg1;
- (void)setM_dicExistContact:(id)arg1;
- (BOOL)choosePublic;
- (void)setChoosePublic:(BOOL)arg1;
- (id)startSelectStr;
- (void)setStartSelectStr:(id)arg1;
- (void).cxx_destruct;
@end
