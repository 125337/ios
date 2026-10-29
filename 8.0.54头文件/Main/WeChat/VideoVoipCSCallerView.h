@interface VideoVoipCSCallerView : VideoVoipCSView <IRecordPermissionCheckExt>
{
    BOOL _m_hasHangup; // +0xb3
    unsigned int m_dotCountIncresement; // +0xb4
    unsigned int m_callingTimes; // +0xb8
    UIView * m_cameraPreviewView; // +0xc0
    VoipDescriptionButton * m_forceToAudioButton; // +0xc8
    MMTimer * m_notOnlineTimer; // +0xd0
    MMTimer * m_actingTimer; // +0xd8
    VoipDescriptionButton * _m_hangupButton; // +0xe0
}
- (void)autoUpdateMainStatusString;
- (void)updateStatusLabel;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(BOOL)arg7 isShowCSVideo:(BOOL)arg8;
- (BOOL)isCaller;
- (void)showRemoteNotOnlineTips;
- (void)checkAndShowAlertView;
- (void)viewDidLoad;
- (void)layoutCameraPreview;
- (void)viewDidLayoutSubviews;
- (void)onVideoSessionStartComplete;
- (void)call;
- (void)cancelCall;
- (void)realCancelCall;
- (void)initCameraView;
- (void)switchToAudioModeAnimation;
- (void)layoutHangupButton;
- (void)onConfirmSwitchToVoice;
- (void)onClickVideoToVoiceButton;
- (void)switchToAudioViewAnimation;
- (void)showAlertTips;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnCallBanned:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)OnCallOverLoad:(id)arg1 errNo:(int)arg2 errMsg:(id)arg3;
- (void)startCamera;
- (void)OnNoAnswer:(id)arg1;
- (void)OnPreConnect:(id)arg1;
- (void)OnBeAccepted:(id)arg1;
- (void)OnTimeOut:(id)arg1;
- (void)OnBeRejected:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnCallInterrupt:(id)arg1;
- (void)OnAutoHangUp:(id)arg1;
- (void)endCallAfterDelay:(double)arg1;
- (BOOL)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)continueCallAction;
- (id)m_cameraPreviewView;
- (void)setM_cameraPreviewView:(id)arg1;
- (id)m_forceToAudioButton;
- (void)setM_forceToAudioButton:(id)arg1;
- (id)m_notOnlineTimer;
- (void)setM_notOnlineTimer:(id)arg1;
- (id)m_actingTimer;
- (void)setM_actingTimer:(id)arg1;
- (unsigned int)m_dotCountIncresement;
- (void)setM_dotCountIncresement:(unsigned int)arg1;
- (unsigned int)m_callingTimes;
- (void)setM_callingTimes:(unsigned int)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (BOOL)m_hasHangup;
- (void)setM_hasHangup:(BOOL)arg1;
- (void).cxx_destruct;
@end

