@interface VoipMinimizeView : MultitalkMinimizeView
{
    BOOL _isAudioMode; // +0x8
    UIView * _m_tipsMaskView; // +0x10
    UIVisualEffectView * _captureVisualEffectView; // +0x18
    double _minimizeViewIconSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (double)minimizeViewIconSize;
- (void)layoutSubviews;
- (void)updateSubviewsByFrameMode;
- (void)layoutBlurVideoView;
- (void)updateSubviewsByDescMode;
- (id)timerLabelTextColor;
- (id)normalDescTextColor;
- (id)endingDescTextColor;
- (void)reset;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (id)m_tipsMaskView;
- (void)setM_tipsMaskView:(id)arg1;
- (id)captureVisualEffectView;
- (void)setCaptureVisualEffectView:(id)arg1;
- (void)setMinimizeViewIconSize:(double)arg1;
- (void).cxx_destruct;
@end
