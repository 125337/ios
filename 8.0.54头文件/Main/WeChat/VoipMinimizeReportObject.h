@interface VoipMinimizeReportObject : MMObject
{
    unsigned int m_clickMinimizeButtonTime; // +0x8
    unsigned int m_clickMinimizeButtonCount; // +0xc
    unsigned int m_startVoipTime; // +0x10
}
- (id)init;
- (void)reportMinimizeButtonClickForVideo;
- (void)reportMinimizeButtonClickForAudio;
- (void)reportMinimizeModeTimeForVideo;
- (void)reportMinimizeModeTimeForAudio;
- (void)recordVoipStartTime;
- (void)reportTotalMinimizeCountWithTotalTalkTime;
- (unsigned int)m_clickMinimizeButtonTime;
- (void)setM_clickMinimizeButtonTime:(unsigned int)arg1;
- (unsigned int)m_clickMinimizeButtonCount;
- (void)setM_clickMinimizeButtonCount:(unsigned int)arg1;
- (unsigned int)m_startVoipTime;
- (void)setM_startVoipTime:(unsigned int)arg1;
@end

