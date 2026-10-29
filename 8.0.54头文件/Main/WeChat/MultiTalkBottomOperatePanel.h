@interface MultiTalkBottomOperatePanel : UIView <_TtP6WeChat23CarPlayVoIPTalkDelegate_>
{
    BOOL _isInScreenSharingAudienceMode; // +0x8
    BOOL _isSpeakerReady; // +0x9
    BOOL _isPanGesturing; // +0xa
    BOOL _videoButtonOn; // +0xb
    BOOL _microphoneButtonOn; // +0xc
    BOOL _speakerButtonOn; // +0xd
    BOOL _isVideoButtonEnable; // +0xe
    int _layoutType; // +0x10
    unsigned int _deviceStatus; // +0x14
    id <MultiTalkBottomOperatePanelDelegate> _delegate; // +0x18
    long long _multiPathCellularTips; // +0x20
    UIView * _contentsView; // +0x28
    VoipDescriptionButton * _videoButton; // +0x30
    VoipDescriptionButton * _microphoneButton; // +0x38
    VoipDescriptionButton * _speakerButton; // +0x40
    VoipDescriptionButton * _hangupButton; // +0x48
    MMUIButton * _arrowButtonUp; // +0x50
    MMUIButton * _arrowButtonDown; // +0x58
    UIView * _backgroundView; // +0x60
    double _panMovement; // +0x68
    unsigned long long _panStatus; // +0x70
    UIView * _multiPathCellularTipsView; // +0x78
    UILabel * _multiPathCellularTipsLabel; // +0x80
    UIImageView * _multiPathCellularArrowView; // +0x88
}
+ (BOOL)isiPhoneWithNotch;
+ (id)normalVoipDescriptButtonBackImage;
+ (id)voipHangupButtonBackImage;
+ (id)voipSelectHangupAndAcceptButtonBackImage;
+ (id)selectedVoipDescriptButtonBackImage;
+ (id)disabledVoipDescriptButtonBackImage;
+ (id)createBasicVoipDescriptionButton;
+ (double)preferredHeight;
+ (double)preferredHeightForLayoutType:(int)arg1 isInScreenSharingAudienceMode:(BOOL)arg2;
+ (double)preferredHeightForLayoutType:(int)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)topForLayoutType:(int)arg1;
- (UIEdgeInsets)voIPDescriptionButtonImageEdgeInsetsWithLayoutType:(int)arg1 isInScreenSharingAudienceMode:(BOOL)arg2;
- (id)createArrowButton;
- (double)panGestureTotalOffset;
- (double)currentPanGestureOffsetPercent;
- (double)currentButtonTitleAlpha;
- (double)currentButtonSideLength;
- (double)foldedButtonLeftRightMargin;
- (double)currentButtonLeftRightMargin;
- (void)updateMultiPathCellularTipsView;
- (void)layoutContentsView;
- (void)layoutBackgroundView;
- (void)layoutVideoButton;
- (void)layoutMicrophoneButton;
- (void)layoutSpeakerButton;
- (void)layoutHangupButton;
- (void)layoutArrowButton;
- (void)animateToChangeLayout;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)showAirplayLoadingState:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1 andLayoutType:(int)arg2;
- (void)layoutSubviews;
- (void)setMultiPathCellularTips:(long long)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reportOperationArrowBtnExposeOrClick:(BOOL)arg1 Expand:(BOOL)arg2;
- (void)reportOperationArrowBtnExposeWithRoomKey:(unsigned long long)arg1 roomId:(unsigned long long)arg2;
- (void)updateSpeakerButtonSelected:(BOOL)arg1;
- (void)updateVideoButtonSelected:(BOOL)arg1;
- (void)updateMicrophoneButtonSelected:(BOOL)arg1;
- (void)updateSpeakerButtonEnabled:(BOOL)arg1;
- (void)updateVideoButtonEnabled:(BOOL)arg1;
- (BOOL)isSpeakerButtonEnable;
- (BOOL)isSpeakerButtonSelected;
- (BOOL)isMicrophoneButtonSelected;
- (BOOL)isVideoButtonSelected;
- (int)getCurrentLayoutType;
- (void)changeToPanelFoldedLayout;
- (void)changeToPanelLayoutFromFolded;
- (void)handleOperationPanelPanGesture:(id)arg1;
- (void)onTapMultiPathCellularTipsView;
- (void)onVideoButtonClick;
- (void)onMicrophoneButtonClick;
- (void)onSpeakerButtonClick;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)onHangupButtonClick;
- (void)onFlipCameraButtonClick;
- (void)onArrowButtonClick;
- (void)onCarPlayVoIPTalkTemplateClickHangup;
- (void)onCarPlayVoIPTalkTemplateClickMute;
- (BOOL)isMicrOpen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)multiPathCellularTips;
- (BOOL)isInScreenSharingAudienceMode;
- (void)setIsInScreenSharingAudienceMode:(BOOL)arg1;
- (BOOL)isSpeakerReady;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)videoButton;
- (void)setVideoButton:(id)arg1;
- (id)microphoneButton;
- (void)setMicrophoneButton:(id)arg1;
- (id)speakerButton;
- (void)setSpeakerButton:(id)arg1;
- (id)hangupButton;
- (void)setHangupButton:(id)arg1;
- (id)arrowButtonUp;
- (void)setArrowButtonUp:(id)arg1;
- (id)arrowButtonDown;
- (void)setArrowButtonDown:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isPanGesturing;
- (void)setIsPanGesturing:(BOOL)arg1;
- (double)panMovement;
- (void)setPanMovement:(double)arg1;
- (unsigned long long)panStatus;
- (void)setPanStatus:(unsigned long long)arg1;
- (BOOL)videoButtonOn;
- (void)setVideoButtonOn:(BOOL)arg1;
- (BOOL)microphoneButtonOn;
- (void)setMicrophoneButtonOn:(BOOL)arg1;
- (BOOL)speakerButtonOn;
- (void)setSpeakerButtonOn:(BOOL)arg1;
- (int)layoutType;
- (void)setLayoutType:(int)arg1;
- (id)multiPathCellularTipsView;
- (void)setMultiPathCellularTipsView:(id)arg1;
- (id)multiPathCellularTipsLabel;
- (void)setMultiPathCellularTipsLabel:(id)arg1;
- (id)multiPathCellularArrowView;
- (void)setMultiPathCellularArrowView:(id)arg1;
- (BOOL)isVideoButtonEnable;
- (void)setIsVideoButtonEnable:(BOOL)arg1;
- (unsigned int)deviceStatus;
- (void)setDeviceStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

