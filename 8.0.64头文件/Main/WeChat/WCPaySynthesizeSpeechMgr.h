@interface WCPaySynthesizeSpeechMgr : MMUserService <WCPayLogicMgrExt, WCPaySynthesizeSpeechCgiDelegate, IMsgExt, IMMAudioPlayerQueueExt, MMKernelExt, MMServiceProtocol, VoIPPushKitExt>
{
    float _m_lastVolume; // +0x8
    WCPaySynthesizeSpeechCgi * _m_voiceCgi; // +0x10
    MPVolumeView * _m_privateVoulmeView; // +0x18
    double _m_volumeViewSupportMinVersion; // +0x20
    double _m_volumeViewSupportMaxVersion; // +0x28
    WavAudioPlayer * _m_wavAudioPlayer; // +0x30
}
- (id)init;
- (void)checkVolumViewSupportVersion;
- (void)onServiceInit;
- (void)checkMainPosAndExtensionPosIsSame;
- (void)onAuthOK;
- (void)saveNSEShareUserData;
- (void)deleteSounsData;
- (void)showLocalNotification:(id)arg1 isVoiceReqSuccess:(BOOL)arg2;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)checkSwitchStatsAndRequestSpeech:(id)arg1;
- (void)requestLocalSpeechSynthesize:(id)arg1;
- (void)setAudioSessionActive;
- (void)checkAndSaveDefaultSpeechPos;
- (void)playLocalSpeech:(id)arg1;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)removeCurrentSpeechConfig;
- (void)requestForSynthesizeSpeech:(id)arg1;
- (void)OnGetWCPayVoiceRespOK:(id)arg1;
- (void)OnGetWCPayVoiceRespErrorWithSpeechMsg:(id)arg1;
- (void)playSynthesizeSound:(id)arg1;
- (id)m_privateVoulmeView;
- (void)forceSetVolumeView;
- (void)removeVolumeView;
- (void)forceSetSystemVolume;
- (void)onMMAudioPlayerQueuePlayEnd;
- (void)setSystemVolume:(float)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)PushLocalNotification:(id)arg1 identifier:(id)arg2;
- (void)OnGetWCPayExtensionInfoMsg:(id)arg1;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)arg1;
- (id)notificaitonIdentifier:(long long)arg1;
- (id)m_voiceCgi;
- (void)setM_voiceCgi:(id)arg1;
- (void)setM_privateVoulmeView:(id)arg1;
- (float)m_lastVolume;
- (void)setM_lastVolume:(float)arg1;
- (double)m_volumeViewSupportMinVersion;
- (void)setM_volumeViewSupportMinVersion:(double)arg1;
- (double)m_volumeViewSupportMaxVersion;
- (void)setM_volumeViewSupportMaxVersion:(double)arg1;
- (id)m_wavAudioPlayer;
- (void)setM_wavAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end
