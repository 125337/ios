@interface VOIPVideoToVoiceView : MMUIView <VoipUIManagerExt, VoiceViewSpeakerModeCheckExt, WCAudioSessionExt, IVoipCXMgrExt, MMTipsViewControllerDelegate>
{
    BOOL m_isOperating; // +0x8
    BOOL _isCaller; // +0x9
    BOOL _isSpeakerReady; // +0xa
    BOOL _isAudioInterruption; // +0xb
    BOOL _isAddMemberDisable; // +0xc
    BOOL _isRecentStatusUnFolded; // +0xd
    BOOL _isRecentStatusCardViewShowLogged; // +0xe
    BOOL _remoteSupportNewScreenProject; // +0xf
    BOOL _canClickAddMembersBtn; // +0x10
    unsigned int _deviceStatus; // +0x14
    CContact * m_contact; // +0x18
    UIImageView * m_backgroundView; // +0x20
    UILabel * m_remoteNameLabel; // +0x28
    VoipDescriptionButton * m_hangupButton; // +0x30
    VoipDescriptionButton * m_micButton; // +0x38
    VoipDescriptionButton * m_speakerButton; // +0x40
    MultiTalkHDHeadView * m_remoteHeadImageView; // +0x48
    MMTimerLabel * m_timer; // +0x50
    UIImageView * m_blurView; // +0x58
    id <VOIPVideoToVoiceViewDelegate> m_delegate; // +0x60
    VoipRecentStatusCardView<VoipRecentStatusProperties> * _recentStatusCardView; // +0x68
    VoIPEnhanceVoiceCoordinator * _enhanceVoiceCoordinator; // +0x70
    VoipRecentStatusUnFoldButton * _recentStatusUnFoldButton; // +0x78
    UIView * _recentStatusUnFoldHotView; // +0x80
    VoipRecentStatusFoldButton * _recentStatusFoldButton; // +0x88
    UIView * _recentStatusFoldHotView; // +0x90
    UIView * _recentStatusContentsView; // +0x98
    NSString * _recentStatusUserName; // +0xa0
    unsigned long long _openFrom; // +0xa8
    MMUIButton * _m_addMemberButton; // +0xb0
    MMUIButton * _screenProjectButton; // +0xb8
    _TtC6WeChat22VoIPExtOperateMenuView * _screenProjectSourceMenu; // +0xc0
    MMUIButton * _m_minimizeButton; // +0xc8
}
- (BOOL)isSpeakerOn;
- (double)hangupButtonTopInView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 openFrom:(unsigned long long)arg2 contact:(id)arg3 delegate:(id)arg4;
- (void)initView;
- (unsigned int)getCurrentDeviceStatus;
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
- (double)recentStatusCardHeightForWidth:(double)arg1;
- (void)layoutRecentSitutaionCardView;
- (void)layoutTimerView;
- (void)layoutBackground;
- (void)initMinimizeButton;
- (void)onTalkMemberDidTapped:(id)arg1;
- (void)onSmallSwitchButtonClick;
- (void)changeToMinimizeView;
- (BOOL)shouldShowScreenProjectButton;
- (BOOL)shouldUseNewScreenProjectNavigationButtonStyle;
- (void)updateMinimizeButtonStyle:(id)arg1;
- (void)configScreenProjectSourceMenu;
- (void)reportScreenProjectEntryExposureIfNeeded;
- (void)layoutScreenProjectButton;
- (void)layoutTopRightButtons;
- (void)updateAddMemberButtonStyle;
- (void)layoutAddMemberButton;
- (void)onScreenProjectButtonClick;
- (id)screenProjectPresentingViewController;
- (void)onScreenProjectSelectFile;
- (void)onScreenProjectSelectMedia;
- (void)onAddMemberButtonClick;
- (void)enbaleClickAddMembersBtn:(BOOL)arg1;
- (void)refreshScreenProjectButton;
- (void)updateRemoteSupportNewScreenProject:(BOOL)arg1;
- (void)onRemoteSupportNewScreenProjectChanged:(BOOL)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)layoutBlurView;
- (void)layoutHeadView;
- (double)voipAudioTimerBottomForHeadLayout;
- (void)layoutHeadViewFrame;
- (double)voipAudioSolvedHeadTop;
- (void)layoutNameView;
- (void)layoutNameViewFrame;
- (BOOL)shouldUseAudioOptimizedPanel;
- (void)setAudioPanelDescription:(id)arg1 forButton:(id)arg2 offsetY:(double)arg3;
- (void)layoutAudioOptimizedPanelIfNeeded;
- (void)layoutSpeakerButton;
- (void)layoutMicButton;
- (void)updateMicButtonText;
- (void)layoutHangupButton;
- (void)updateSpeakBtnStatusBySpeakMode:(BOOL)arg1 deviceStatus:(unsigned int)arg2;
- (void)updateMicBtnStatusByMicMode:(BOOL)arg1;
- (void)syncMicButtonWithMicOpen:(BOOL)arg1;
- (void)checkAndUpdateProximity;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)onClickHandup;
- (void)updateSpeakerButtonWhenStartedSuccess:(BOOL)arg1 canShowAirPlay:(BOOL)arg2 hasChanged:(BOOL)arg3;
- (void)updateSpeakerButton;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (void)showAirplayLoading;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2 shouldIgnoreToast:(BOOL)arg3;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2 force:(BOOL)arg3;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)updateProximityBySpeakerButtonState;
- (void)updateProximityWithPort:(id)arg1;
- (void)onClickMicButton;
- (void)reverseMicButtonState;
- (void)startTimer;
- (void)startOperate:(BOOL)arg1;
- (void)showEnhanceVoiceBubble;
- (void)hideEnhanceVoiceBubble;
- (void)layoutEnhanceVoiceBubble;
- (void)foldupRecentStatus;
- (void)getVoiceViewSpeakerMode:(BOOL *)arg1;
- (void)OnVoipCXSetMuted2:(BOOL)arg1;
- (void)OnVoipCXHungUp:(unsigned long long)arg1;
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
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isOperating;
- (void)setM_isOperating:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (id)recentStatusCardView;
- (void)setRecentStatusCardView:(id)arg1;
- (id)enhanceVoiceCoordinator;
- (void)setEnhanceVoiceCoordinator:(id)arg1;
- (BOOL)isSpeakerReady;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (BOOL)isAddMemberDisable;
- (void)setIsAddMemberDisable:(BOOL)arg1;
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
- (id)screenProjectButton;
- (void)setScreenProjectButton:(id)arg1;
- (id)screenProjectSourceMenu;
- (void)setScreenProjectSourceMenu:(id)arg1;
- (BOOL)remoteSupportNewScreenProject;
- (void)setRemoteSupportNewScreenProject:(BOOL)arg1;
- (BOOL)canClickAddMembersBtn;
- (void)setCanClickAddMembersBtn:(BOOL)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (void).cxx_destruct;
@end
