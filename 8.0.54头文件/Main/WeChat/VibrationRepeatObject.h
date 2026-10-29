@interface VibrationRepeatObject : NSObject <NotMainQueueTimerDelegate>
{
    BOOL _m_hasHoldBackgroundTask; // +0x8
    int _m_outAppVibrationCount; // +0xc
    NSTimer * _m_inAppTimer; // +0x10
    NotMainQueueTimer * _m_outAppTimer; // +0x18
    NSLock * _m_backgroundTaskLock; // +0x20
}
- (id)init;
- (void)repeatInAppVibration;
- (void)repeatOutAppVibration;
- (void)stopInAppVibration;
- (void)stopOutAppVibration;
- (void)dealloc;
- (void)callInAppVibration;
- (void)callOutAppVibration;
- (void)onNotMainQueueTimerCallback;
- (void)holdBackgroundTask;
- (void)releaseBackgroundTask;
- (id)m_inAppTimer;
- (void)setM_inAppTimer:(id)arg1;
- (id)m_outAppTimer;
- (void)setM_outAppTimer:(id)arg1;
- (int)m_outAppVibrationCount;
- (void)setM_outAppVibrationCount:(int)arg1;
- (BOOL)m_hasHoldBackgroundTask;
- (void)setM_hasHoldBackgroundTask:(BOOL)arg1;
- (id)m_backgroundTaskLock;
- (void)setM_backgroundTaskLock:(id)arg1;
- (void).cxx_destruct;
@end

