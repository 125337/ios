@interface IPadCompactReporter : MMUserService <MMKernelExt, IVOIPUILogicMgrExt, VoipUIManagerExt, MMServiceProtocol>
{
    BOOL _checkVisionPlatform; // +0x8
}
- (void)onServiceInit;
- (void)reportAction:(long long)arg1;
- (void)reportMainTabIndexChange:(unsigned long long)arg1;
- (void)reportFindFriendRowSelect:(unsigned long long)arg1;
- (void)onServiceEnterForeground;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 startInApp:(BOOL)arg3 isEarMode:(BOOL)arg4 isAudioMode:(BOOL)arg5 from:(unsigned long long)arg6;
- (void)onVoipAccept:(id)arg1;
- (void)onManulLoginOK;
- (void)onManulLogOut;
- (void)onKickQuit;
- (BOOL)checkVisionPlatform;
- (void)setCheckVisionPlatform:(BOOL)arg1;
@end

