@interface SilentModeMgr : MMUserService <SystemVolumeExt, ElderModeExt, MMNotificationViewControllerDelegate, WCAudioSessionExt, MMServiceProtocol>
{
    BOOL _allowPlaySoundTemporary; // +0x8
    BOOL _isUsingEarPhone; // +0x9
    MMNotificationViewController * _tipsController; // +0x10
    double _restoreVolume; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBecomeActive;
- (void)onWillResignActive;
- (BOOL)isOn;
- (void)setAllowPlaySoundTemporary:(BOOL)arg1;
- (void)reloadSilentLogic:(BOOL)arg1;
- (BOOL)shouldSilentWhenLeaveOrEnterApp;
- (void)onTouchUpVolumeButton:(double)arg1;
- (void)onTouchDownVolumeButton:(double)arg1;
- (void)showTipsView;
- (void)reportVolumeChangeTo0:(int)arg1;
- (void)notificationViewDidDisappear:(id)arg1;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSilentModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSystemVolumeChangeFrom:(float)arg1 to:(float)arg2 reason:(int)arg3;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (BOOL)allowPlaySoundTemporary;
- (id)tipsController;
- (void)setTipsController:(id)arg1;
- (double)restoreVolume;
- (void)setRestoreVolume:(double)arg1;
- (BOOL)isUsingEarPhone;
- (void)setIsUsingEarPhone:(BOOL)arg1;
- (void).cxx_destruct;
@end
