@interface DarkModeManager : MMUserService <WCMainWindowExt, MMServiceProtocol>
{
    BOOL _skipNextReport; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)launchReport;
- (void)changeDarkModeConfigType:(long long)arg1;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)reportAction:(long long)arg1;
- (BOOL)skipNextReport;
- (void)setSkipNextReport:(BOOL)arg1;
@end
