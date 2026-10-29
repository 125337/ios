@interface TouchRecordCardView : UIView
{
    BOOL _isLoading; // +0x8
    BOOL _showHintLabel; // +0x9
    unsigned long long _recordMode; // +0x10
    UILabel * _hintLabel; // +0x18
    UILabel * _label; // +0x20
    UIButton * _button; // +0x28
    UIButton * _roundedButton; // +0x30
    UIButton * _cancelButton; // +0x38
    UILabel * _cancelLabel; // +0x40
    WCRecordFBNormalView * _voiceControlPeakView; // +0x48
    WCRecordFBNormalView * _cancelStateVoiceControlPeakView; // +0x50
    MMLoadingIndicatorView * _loadingIndicatorView; // +0x58
    UIView * _contentView; // +0x60
    NSDate * _firstShowHintLabelDate; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setRecordMode:(unsigned long long)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)updateDisplay;
- (void)layoutSubviews;
- (void)handleTouches:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)triggerVibrationFeedback;
- (id)voiceControlPeakView;
- (id)cancelStateVoiceControlPeakView;
- (unsigned long long)recordMode;
- (BOOL)isLoading;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)roundedButton;
- (void)setRoundedButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)cancelLabel;
- (void)setCancelLabel:(id)arg1;
- (void)setVoiceControlPeakView:(id)arg1;
- (void)setCancelStateVoiceControlPeakView:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (BOOL)showHintLabel;
- (void)setShowHintLabel:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)firstShowHintLabelDate;
- (void)setFirstShowHintLabelDate:(id)arg1;
- (void).cxx_destruct;
@end
