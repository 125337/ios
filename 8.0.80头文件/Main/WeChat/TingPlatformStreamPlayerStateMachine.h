@interface TingPlatformStreamPlayerStateMachine : NSObject
{
    BOOL _mHasDequeueBuffer; // +0x8
    BOOL _mHasNotifyStarted; // +0x9
    unsigned long long _mPreState; // +0x10
    unsigned long long _mState; // +0x18
}
- (id)init;
- (void)reset;
- (int)getPlayerStatus;
- (int)doOp:(unsigned long long)arg1;
- (unsigned long long)mPreState;
- (void)setMPreState:(unsigned long long)arg1;
- (unsigned long long)mState;
- (void)setMState:(unsigned long long)arg1;
- (BOOL)mHasDequeueBuffer;
- (void)setMHasDequeueBuffer:(BOOL)arg1;
- (BOOL)mHasNotifyStarted;
- (void)setMHasNotifyStarted:(BOOL)arg1;
@end
