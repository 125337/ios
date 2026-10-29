@interface MinimizeTaskStateInfo : MMObject <PBCoding>
{
    BOOL _disableCloseBtn; // +0x8
    BOOL _showPlayNextBtn; // +0x9
    BOOL _showPlayPauseBtn; // +0xa
    BOOL _canOpenFromStateView; // +0xb
    BOOL _fixedStateViewWidth; // +0xc
    BOOL _isPlaying; // +0xd
    BOOL _showVoiceInputBtn; // +0xe
    BOOL _isVoiceInputLoading; // +0xf
    BOOL _isVoiceControlRecording; // +0x10
    BOOL _showVoiceControlPeak; // +0x11
    BOOL _isVoiceInputHighlighted; // +0x12
    BOOL _showTalkingState; // +0x13
    BOOL _ignoreIcon; // +0x14
    BOOL _didStartVoiceRecorder; // +0x15
    BOOL _showBizVoiceInputBtn; // +0x16
    BOOL _greenDotShow; // +0x17
    BOOL _greenDotShrink; // +0x18
    id <MinimizeTaskStateInfoDelegate> _delegate; // +0x20
    unsigned long long _playNextBtnStatus; // +0x28
    long long _bizVoiceState; // +0x30
    long long _bizVoiceSpeedFactor; // +0x38
}
+ (void)PBArrayAdd_disableCloseBtn;
+ (void)PBArrayAdd_showPlayNextBtn;
+ (void)PBArrayAdd_showPlayPauseBtn;
+ (void)PBArrayAdd_canOpenFromStateView;
+ (void)PBArrayAdd_fixedStateViewWidth;
+ (void)PBArrayAdd_showVoiceInputBtn;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableCloseBtn;
- (void)setDisableCloseBtn:(BOOL)arg1;
- (BOOL)showPlayNextBtn;
- (void)setShowPlayNextBtn:(BOOL)arg1;
- (unsigned long long)playNextBtnStatus;
- (void)setPlayNextBtnStatus:(unsigned long long)arg1;
- (BOOL)showPlayPauseBtn;
- (void)setShowPlayPauseBtn:(BOOL)arg1;
- (BOOL)canOpenFromStateView;
- (void)setCanOpenFromStateView:(BOOL)arg1;
- (BOOL)fixedStateViewWidth;
- (void)setFixedStateViewWidth:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)showVoiceInputBtn;
- (void)setShowVoiceInputBtn:(BOOL)arg1;
- (BOOL)isVoiceInputLoading;
- (void)setIsVoiceInputLoading:(BOOL)arg1;
- (BOOL)isVoiceControlRecording;
- (void)setIsVoiceControlRecording:(BOOL)arg1;
- (BOOL)showVoiceControlPeak;
- (void)setShowVoiceControlPeak:(BOOL)arg1;
- (BOOL)isVoiceInputHighlighted;
- (void)setIsVoiceInputHighlighted:(BOOL)arg1;
- (BOOL)showTalkingState;
- (void)setShowTalkingState:(BOOL)arg1;
- (BOOL)ignoreIcon;
- (void)setIgnoreIcon:(BOOL)arg1;
- (BOOL)didStartVoiceRecorder;
- (void)setDidStartVoiceRecorder:(BOOL)arg1;
- (BOOL)showBizVoiceInputBtn;
- (void)setShowBizVoiceInputBtn:(BOOL)arg1;
- (long long)bizVoiceState;
- (void)setBizVoiceState:(long long)arg1;
- (long long)bizVoiceSpeedFactor;
- (void)setBizVoiceSpeedFactor:(long long)arg1;
- (BOOL)greenDotShow;
- (void)setGreenDotShow:(BOOL)arg1;
- (BOOL)greenDotShrink;
- (void)setGreenDotShrink:(BOOL)arg1;
- (void).cxx_destruct;
@end
