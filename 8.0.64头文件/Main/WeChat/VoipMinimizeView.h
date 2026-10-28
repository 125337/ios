@interface VoipMinimizeView : MultitalkMinimizeView
{
    BOOL _isAudioMode; // +0x8
    UIView * _m_tipsMaskView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateSubviewsByFrameMode;
- (void)updateSubviewsByDescMode;
- (id)timerLabelTextColor;
- (id)normalDescTextColor;
- (id)endingDescTextColor;
- (void)reset;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (id)m_tipsMaskView;
- (void)setM_tipsMaskView:(id)arg1;
- (void).cxx_destruct;
@end
