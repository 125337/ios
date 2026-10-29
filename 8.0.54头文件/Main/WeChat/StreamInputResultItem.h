@interface StreamInputResultItem : MMObject
{
    unsigned int _m_uiSequence; // +0x8
    unsigned int _m_uiEndFlag; // +0xc
    NSString * _voiceId; // +0x10
    unsigned long long _m_uiCreateTime; // +0x18
    NSString * _text; // +0x20
    NSArray * _keywordList; // +0x28
}
- (BOOL)lessThanOrEqual:(id)arg1;
- (void)getValueFrom:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned long long)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned int)m_uiSequence;
- (void)setM_uiSequence:(unsigned int)arg1;
- (unsigned int)m_uiEndFlag;
- (void)setM_uiEndFlag:(unsigned int)arg1;
- (id)keywordList;
- (void)setKeywordList:(id)arg1;
- (void).cxx_destruct;
@end

