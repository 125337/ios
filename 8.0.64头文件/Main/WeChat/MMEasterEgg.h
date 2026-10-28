@interface MMEasterEgg : NSObject
{
    NSString * m_nsEmoji; // +0x8
    NSDate * m_oBeginDate; // +0x10
    NSDate * m_oEndDate; // +0x18
    unsigned int m_uiReport; // +0x20
    NSMutableArray * m_arrKeyWords; // +0x28
    NSArray * m_arrSupportLanguages; // +0x30
    long long _type; // +0x38
    long long _effectType; // +0x40
    NSString * _magicEmojiEffectId; // +0x48
    NSArray * _eggAnimations; // +0x50
    MMEasterEggTopAnimation * _eggTopAnimation; // +0x58
    id <MMEasterEggActivityInfo> _activityInfo; // +0x60
}
- (BOOL)isEffective;
- (BOOL)checkAsciiMatch:(id)arg1 range:(_NSRange)arg2;
- (id)matchKeyWord:(id)arg1 matchRange:(_NSRange *)arg2 keywordToLocationDict:(id)arg3;
- (BOOL)supportInteractiveEgg;
- (id)m_nsEmoji;
- (void)setM_nsEmoji:(id)arg1;
- (id)m_oBeginDate;
- (void)setM_oBeginDate:(id)arg1;
- (id)m_oEndDate;
- (void)setM_oEndDate:(id)arg1;
- (unsigned int)m_uiReport;
- (void)setM_uiReport:(unsigned int)arg1;
- (id)m_arrKeyWords;
- (void)setM_arrKeyWords:(id)arg1;
- (id)m_arrSupportLanguages;
- (void)setM_arrSupportLanguages:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)effectType;
- (void)setEffectType:(long long)arg1;
- (id)magicEmojiEffectId;
- (void)setMagicEmojiEffectId:(id)arg1;
- (id)eggAnimations;
- (void)setEggAnimations:(id)arg1;
- (id)eggTopAnimation;
- (void)setEggTopAnimation:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (void).cxx_destruct;
@end
