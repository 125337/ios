@interface TimeRecordWrap : NSObject
{
    timeval m_msCurTime; // +0x8
}
- (id)initWithTime:(timeval)arg1;
- (timeval)m_msCurTime;
- (void)setM_msCurTime:(timeval)arg1;
@end

