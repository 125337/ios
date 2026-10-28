@interface SystemVolumeMgr : MMUserService <MMServiceProtocol>
{
    int m_volumeCheckType; // +0x8
    int m_volumeSetType; // +0xc
    float m_lastMediaVolume; // +0x10
    float m_lastPhoneCallVolume; // +0x14
    float m_lastVolume; // +0x18
    BOOL m_volumeChecking; // +0x1c
    NSMutableArray * m_volumeSetByProgrammingQueue; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startVolumeCheck;
- (void)stopVolumeCheck;
- (BOOL)isVolumeChecking;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 reason:(int)arg2;
- (void)setVolumeVisible:(float)arg1;
- (void)silentVolumeOnBecomeActive;
- (void)restoreVolumeOnResignActive:(float)arg1;
- (float)currentVolume;
- (void)mm_setVolume:(float)arg1 type:(int)arg2 reason:(int)arg3 increaseCount:(BOOL)arg4;
- (void)startVolumeCheckByNotification;
- (void)stopVolumeCheckByNotification;
- (void)volumeChangedBeforeIOS15:(id)arg1;
- (void)volumeChangedAfterIOS15:(id)arg1;
- (void)mm_onVolumeChangeTo:(float)arg1 reason:(id)arg2 audioCategory:(id)arg3;
- (BOOL)isUseVoiceProcessingIO;
- (void).cxx_destruct;
@end
