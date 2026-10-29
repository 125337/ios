@interface WCCPUHandler : NSObject
{
    float m_tickTok; // +0x8
    float m_totalCPUCost; // +0xc
    float m_totalTrackingTime; // +0x10
    BOOL m_bTracking; // +0x14
    float m_backgroundTotalCPU; // +0x18
    float m_backgroundTotalSec; // +0x1c
    BOOL m_background; // +0x20
    BOOL m_backgroundCPUTooSmall; // +0x21
}
- (id)init;
- (id)initWithCPULimit:(float)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (BOOL)isBackgroundCPUTooSmall;
- (BOOL)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (void)cultivateBackgroundCpu:(float)arg1 periodTime:(float)arg2;
@end

