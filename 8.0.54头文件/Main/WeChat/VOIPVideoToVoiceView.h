@interface VOIPVideoToVoiceView : MMUIView <VoipUIManagerExt, VoiceViewSpeakerModeCheckExt, WCAudioSessionExt, IVoipCXMgrExt, MMTipsViewControllerDelegate>
{
    BOOL m_isOperating; // +0x8
    BOOL _isCaller; // +0x9
    BOOL _isSpeakerReady; // +0xa
    BOOL _isInitSpeakModeOpen; // +0xb
    BOOL _isRecentStatusUnFolded; // +0xc
    BOOL _isRecentStatusCardViewShowLogged; // +0xd
    BOOL _canClickAddMembersBtn; // +0xe
    unsigned int _deviceStatus; // +0x10
    CContact * m_contact; // +0x18
    UIImageView * m_backgroundView; // +0x20
    UILabel * m_remoteNameLabel; // +0x28
    VoipDescriptionButton * m_hangupButton; // +0x30
    VoipDescriptionButton * m_micButton; // +0x38
    VoipDescriptionButton * m_speakerButton; // +0x40
    MultiTalkHDHeadView * m_remoteHeadImageView; // +0x48
    MMTimerLabel * m_timer; // +0x50
    UIImageView * m_blurView; // +0x58
    MMHeadImageView * m_blurHeadImageView; // +0x60
    id <VOIPVideoToVoiceViewDelegate> m_delegate; // +0x68
    VoipRecentStatusCardView<VoipRecentStatusProperties> * _recentStatusCardView; // +0x70
    VoipRecentStatusUnFoldButton * _recentStatusUnFoldButton; // +0x78
    UIView * _recentStatusUnFoldHotView; // +0x80
    VoipRecentStatusFoldButton * _recentStatusFoldButton; // +0x88
    UIView * _recentStatusFoldHotView; // +0x90
    UIView * _recentStatusContentsView; // +0x98
    NSString * _recentStatusUserName; // +0xa0
    unsigned long long _openFrom; // +0xa8
    MMUIButton * _m_addMemberButton; // +0xb0
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 openFrom:(unsigned long long)arg2 contact:(id)arg3 delegate:(id)arg4;
- (void)initView;
- (void)layoutSubviews;
- (BOOL)isRecentStatusEnable;
- (void)layoutRecentStatus;
- (void)layoutRecentStatusWithAnimate:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)layoutRecentStatusWithAnimate:(BOOL)arg1;
- (void)layoutRecentStatusUnFoldButton;
- (void)layoutRecentStatusUnFoldHotView;
- (void)onClickRecentStatusUnFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusFoldButton;
- (void)layoutRecentStatusFoldHotView;
- (void)onClickRecentStatusFoldHotViewWithSender:(id)arg1;
- (void)layoutRecentStatusContentsView;
- (void)layoutRecentSitutaionCardView;
- (void)layoutTimerView;
- (void)layoutBackground;
- (void)initMinimizeButton;
- (void)onSmallSwitchButtonClick;
- (void)layoutAddMemberButton;
- (void)onAddMemberButtonClick;
- (void)enbaleClickAddMembersBtn;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)layoutBlurView;
- (void)layoutHeadView;
- (void)layoutNameView;
- (void)layoutSpeakerButton;
- (void)layoutMicButton;
- (void)updateMicButtonText;
- (void)layoutHangupButton;
- (void)updateSpeakBtnStatusBySpeakMode:(BOOL)arg1 deviceStatus:(unsigned int)arg2;
- (void)updateMicBtnStatusByMicMode:(BOOL)arg1;
- (void)checkAndUpdateProximity;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)onClickHandup;
- (void)updateSpeakerButton;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)showAirplayLoading;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)updateProximityWithPort:(id)arg1;
- (void)VoIPUpdateProximityWithPort:(int)arg1;
- (void)VoIPMPUpdateSpeakerButtonStatus:(int)arg1 name:(id)arg2 hasOutput:(BOOL)arg3;
- (void)onClickMicButton;
- (void)reverseMicButtonState;
- (void)startTimer;
- (void)startOperate:(BOOL)arg1;
- (void)foldupRecentStatus;
- (void)getVoiceViewSpeakerMode:(BOOL *)arg1;
- (void)OnVoipCXSetMuted;
- (void)OnVoipCXHungUp;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_remoteNameLabel;
- (void)setM_remoteNameLabel:(id)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (id)m_micButton;
- (void)setM_micButton:(id)arg1;
- (id)m_speakerButton;
- (void)setM_speakerButton:(id)arg1;
- (id)m_remoteHeadImageView;
- (void)setM_remoteHeadImageView:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (id)m_blurHeadImageView;
- (void)setM_blurHeadImageView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isOperating;
- (void)setM_isOperating:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (id)recentStatusCardView;
- (void)setRecentStatusCardView:(id)arg1;
- (BOOL)isSpeakerReady;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (BOOL)isInitSpeakModeOpen;
- (void)setIsInitSpeakModeOpen:(BOOL)arg1;
- (BOOL)isRecentStatusUnFolded;
- (void)setIsRecentStatusUnFolded:(BOOL)arg1;
- (id)recentStatusUnFoldButton;
- (void)setRecentStatusUnFoldButton:(id)arg1;
- (id)recentStatusUnFoldHotView;
- (void)setRecentStatusUnFoldHotView:(id)arg1;
- (id)recentStatusFoldButton;
- (void)setRecentStatusFoldButton:(id)arg1;
- (id)recentStatusFoldHotView;
- (void)setRecentStatusFoldHotView:(id)arg1;
- (id)recentStatusContentsView;
- (void)setRecentStatusContentsView:(id)arg1;
- (id)recentStatusUserName;
- (void)setRecentStatusUserName:(id)arg1;
- (BOOL)isRecentStatusCardViewShowLogged;
- (void)setIsRecentStatusCardViewShowLogged:(BOOL)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (unsigned int)deviceStatus;
- (void)setDeviceStatus:(unsigned int)arg1;
- (id)m_addMemberButton;
- (void)setM_addMemberButton:(id)arg1;
- (BOOL)canClickAddMembersBtn;
- (void)setCanClickAddMembersBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

