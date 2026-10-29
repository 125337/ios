@interface DialectChatExptMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isEnable; // +0x8
    BOOL _voiceTransFeedbackEnabled; // +0x9
    BOOL _quickTransTipDailyEnabled; // +0xa
    unsigned int _inputGuideType; // +0xc
    unsigned int _quickTransTipClickCountLimit; // +0x10
    unsigned int _inputGuideExposureLimit; // +0x14
    unsigned int _inputGuideUsageLimit; // +0x18
}
- (void)onServiceInit;
- (BOOL)shouldShowDialectQuickTransTip;
- (void)recordDialectQuickTransTipClick;
- (void)recordDialectQuickTransTipExposure;
- (BOOL)shouldShowDailyQuickTransTip;
- (BOOL)canShowDialectInputGuide;
- (void)recordDialectInputGuideExposure;
- (void)recordDialectInputGuideUsage;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (BOOL)voiceTransFeedbackEnabled;
- (void)setVoiceTransFeedbackEnabled:(BOOL)arg1;
- (unsigned int)inputGuideType;
- (void)setInputGuideType:(unsigned int)arg1;
- (unsigned int)quickTransTipClickCountLimit;
- (void)setQuickTransTipClickCountLimit:(unsigned int)arg1;
- (BOOL)quickTransTipDailyEnabled;
- (void)setQuickTransTipDailyEnabled:(BOOL)arg1;
- (unsigned int)inputGuideExposureLimit;
- (void)setInputGuideExposureLimit:(unsigned int)arg1;
- (unsigned int)inputGuideUsageLimit;
- (void)setInputGuideUsageLimit:(unsigned int)arg1;
@end
