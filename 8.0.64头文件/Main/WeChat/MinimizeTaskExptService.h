@interface MinimizeTaskExptService : MMUserService <WAAppTaskMgrExt, MMWebViewControllerExtention, MMServiceProtocol>
{
    BOOL _isOpenStarSwitch; // +0x8
    BOOL _isOpenMultiContentSwitch; // +0x9
    BOOL _isEnableStateTaskRestore; // +0xa
    BOOL _isEnableStarSearch; // +0xb
    BOOL _isSingleRowStyleEnable; // +0xc
}
- (void)onServiceInitOnEdu;
- (BOOL)shouldShowMinimizeEntryReddot:(id)arg1;
- (BOOL)minimizeEntryClicked;
- (void)markMinimizeEntryReddotAction:(id)arg1 action:(long long)arg2;
- (BOOL)minimizeEducationExped;
- (BOOL)checkShouldShowMinimizeEdu:(id)arg1;
- (void)markMinimizeEduHasShow:(id)arg1;
- (void)resetAllMinimizeEduAndReddotMark;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (void)EX_WebViewControllerDidAppear:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initMinimizeSwitches;
- (BOOL)isMinimizeEntryArranged;
- (BOOL)isMinimizeEntryShowReddot;
- (BOOL)isOpenStarSwitch;
- (void)setIsOpenStarSwitch:(BOOL)arg1;
- (BOOL)isOpenMultiContentSwitch;
- (void)setIsOpenMultiContentSwitch:(BOOL)arg1;
- (BOOL)isEnableStateTaskRestore;
- (void)setIsEnableStateTaskRestore:(BOOL)arg1;
- (BOOL)isEnableStarSearch;
- (void)setIsEnableStarSearch:(BOOL)arg1;
- (BOOL)isSingleRowStyleEnable;
- (void)setIsSingleRowStyleEnable:(BOOL)arg1;
@end
