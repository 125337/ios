@interface TextStateCompositeCardView : UIView
{
    unsigned int _masks; // +0x8
    TextStateFullScreenCardContentView * _contentView; // +0x10
    TextStateMediaContainerView * _mediaView; // +0x18
    double _topPadding; // +0x20
    double _bottomPadding; // +0x28
    double _forceAspectRatio; // +0x30
    long long _contactInfoViewSource; // +0x38
    TextStateModel * _textState; // +0x40
    CContact * _contact; // +0x48
    ColorGradientView * _topGradientView; // +0x50
    ColorGradientView * _bottomGradientView; // +0x58
    UIButton * _muteButton; // +0x60
    NSString * _speakerViewExpReportedTextStateId; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initStates;
- (void)initSubviews;
- (void)didMoveToSuperview;
- (BOOL)hasAudioMedia;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)onTapMuteButton;
- (void)updateMuteButtonState;
- (BOOL)isSpeakerButtonVisible;
- (void)reportSpeakerExposureIfNeeded;
- (void)reportSpeakerViewClkWithSoundStatus:(long long)arg1;
- (void)setMuteButtonTemporarilyHidden:(BOOL)arg1;
- (BOOL)muteButtonTemporarilyHidden;
- (void)updateMuteButtonFrame;
- (void)setShowsBorder:(BOOL)arg1;
- (BOOL)showsBorder;
- (void)setContactInfoViewSource:(long long)arg1;
- (void)layoutSubviews;
- (void)setUsername:(id)arg1 textState:(id)arg2;
- (void)setMasks:(unsigned int)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setBottomPadding:(double)arg1;
- (id)topMaskView;
- (id)bottomMaskView;
- (void)setForceAspectRatio:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (unsigned int)masks;
- (double)topPadding;
- (double)bottomPadding;
- (double)forceAspectRatio;
- (long long)contactInfoViewSource;
- (id)textState;
- (void)setTextState:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)muteButton;
- (void)setMuteButton:(id)arg1;
- (id)speakerViewExpReportedTextStateId;
- (void)setSpeakerViewExpReportedTextStateId:(id)arg1;
- (void).cxx_destruct;
@end
