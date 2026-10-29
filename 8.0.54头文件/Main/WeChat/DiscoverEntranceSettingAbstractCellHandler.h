@interface DiscoverEntranceSettingAbstractCellHandler : WCTableViewCellHandler <ServiceAuthExt, DiscoverEntranceSettingSheetViewDelegate>
{
    BOOL _enabledEntrace; // +0x8
    BOOL _enabledReddot; // +0x9
    unsigned long long _rowType; // +0x10
    DiscoverEntranceSettingReporter * _reporter; // +0x18
    id <DiscoverEntranceSettingHandlerDelegate> _delegate; // +0x20
    WCTableViewNormalCellManager * _cellMgr; // +0x28
    DiscoverEntranceSettingSheetView * _sheetView; // +0x30
}
- (void)setRowType:(unsigned long long)arg1;
- (id)genCellManager;
- (void)showSettingSheetView;
- (id)makeSettingSheetView;
- (id)title;
- (BOOL)originalEntraceSwitchOn;
- (id)iconImage;
- (BOOL)hasReddotAbility;
- (BOOL)originalReddotSwitchOn;
- (CGSize)iconSize;
- (id)statusDesc;
- (void)updateRightDescription;
- (unsigned long long)serviceAuthType;
- (BOOL)isWeixinServiceForOversea;
- (BOOL)willShowWeChatAuthorization;
- (unsigned long long)settingEntrancePluginType;
- (unsigned long long)settingEntranceSwitchType;
- (unsigned long long)reddotCtrlFlagMask;
- (void)onSwitchChanged:(id)arg1 switchType:(unsigned long long)arg2 sheetView:(id)arg3;
- (void)onSheetDisppearWithSwitchChanged:(id)arg1;
- (void)onEntranceSwitchChanged:(id)arg1;
- (void)saveNewReddotEnableValue:(BOOL)arg1;
- (void)saveNewEntranceValue:(BOOL)arg1;
- (void)sendEntranceValueToServer:(BOOL)arg1;
- (void)showAuthViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2;
- (void)showCloseViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2 titile:(id)arg3 description:(id)arg4;
- (void)showCloseViewWithSwitchType:(unsigned long long)arg1 oSwitch:(id)arg2 titile:(id)arg3 description:(id)arg4 confirmTitle:(id)arg5;
- (void)cancelWeChatServiceAuth:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (unsigned long long)rowType;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)enabledEntrace;
- (void)setEnabledEntrace:(BOOL)arg1;
- (BOOL)enabledReddot;
- (void)setEnabledReddot:(BOOL)arg1;
- (id)cellMgr;
- (void)setCellMgr:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end

