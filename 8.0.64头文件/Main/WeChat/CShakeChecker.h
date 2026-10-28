@interface CShakeChecker : MMObject
{
    id <ShakeCheckerDelegate> m_delegate; // +0x8
    CMMotionManager * m_motionMgr; // +0x10
    HighpassFilter * m_filter; // +0x18
    NSOperationQueue * m_queue; // +0x20
}
- (void)setM_Delegate:(id)arg1;
- (id)init;
- (void)startCheck;
- (void)stopCheck;
- (void)dealloc;
- (void).cxx_destruct;
@end
