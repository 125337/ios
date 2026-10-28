@interface MultitalkMinimizeView : UIImageView
{
    UIImageView * m_iconImageView; // +0x8
    UILabel * m_descriptionLabel; // +0x10
    MMTimerLabel * m_timerLabel; // +0x18
    unsigned long long _frameMode; // +0x20
    unsigned long long _descMode; // +0x28
    NSString * _extendAccessibilityString; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initIconView;
- (void)initDescView;
- (void)initTimerView;
- (void)changeFrameMode:(unsigned long long)arg1;
- (void)updateSubviews;
- (void)updateSubviewsByFrameMode;
- (void)updateSubviewsByDescMode;
- (void)startTimer;
- (void)updateTimerForIlinkToMultiTalk:(double)arg1;
- (void)clearDesc;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (id)timerLabelTextColor;
- (id)normalDescTextColor;
- (id)endingDescTextColor;
- (id)m_iconImageView;
- (void)setM_iconImageView:(id)arg1;
- (id)m_descriptionLabel;
- (void)setM_descriptionLabel:(id)arg1;
- (id)m_timerLabel;
- (void)setM_timerLabel:(id)arg1;
- (unsigned long long)frameMode;
- (void)setFrameMode:(unsigned long long)arg1;
- (unsigned long long)descMode;
- (void)setDescMode:(unsigned long long)arg1;
- (id)extendAccessibilityString;
- (void)setExtendAccessibilityString:(id)arg1;
- (void).cxx_destruct;
@end
