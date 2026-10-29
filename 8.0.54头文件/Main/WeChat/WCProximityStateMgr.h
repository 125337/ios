@interface WCProximityStateMgr : MMUserService <MicroMessengerAppStateMgrExt, MMServiceProtocol>
{
    BOOL _isInProximityState; // +0x8
    BOOL _startProximityState; // +0x9
    BOOL _isUnReliableStartState; // +0xa
    BOOL _isProximityStateRecogning; // +0xb
    BOOL _shouldFixScreenOff; // +0xc
    BOOL _shouldChangeBrightness; // +0xd
    float _gFactor; // +0x10
    int _touchCountWhenProximityState; // +0x14
    NSHashTable * _objectsTable; // +0x18
    CMMotionManager * _motionManager; // +0x20
    NSRecursiveLock * _lock; // +0x28
    long long _proximityStateErrorCountExpt; // +0x30
}
- (void)onServiceInit;
- (void)dealloc;
- (void)StartProximityMonitorWithObject:(id)arg1;
- (void)StartProximityMonitorWithObject:(id)arg1 scene:(int)arg2;
- (void)StopProximityMonitorWithObject:(id)arg1;
- (void)StopAllMonitoringProximity;
- (void)StopAllMonitoringProximityWithScene:(int)arg1;
- (BOOL)IsInProximityState;
- (BOOL)IsProximityStateRecogning;
- (void)checkDelegateTable;
- (void)startRecognizering;
- (void)stopRecognizering;
- (void)closeToEarRecognByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)startProximityMonitoring;
- (void)stopProximityMonitoring;
- (void)startObserveProximityChangeNotify;
- (void)stopObserveProximityChangeNotify;
- (void)notifyCloseEar;
- (void)notifyAwayFromEar;
- (void)onProximityStateChange:(id)arg1;
- (void)onReceivedTouchEvent;
- (void)didEnterBackground;
- (id)objectsTable;
- (void)setObjectsTable:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (float)gFactor;
- (void)setGFactor:(float)arg1;
- (BOOL)isInProximityState;
- (void)setIsInProximityState:(BOOL)arg1;
- (BOOL)startProximityState;
- (void)setStartProximityState:(BOOL)arg1;
- (BOOL)isUnReliableStartState;
- (void)setIsUnReliableStartState:(BOOL)arg1;
- (BOOL)isProximityStateRecogning;
- (void)setIsProximityStateRecogning:(BOOL)arg1;
- (BOOL)shouldFixScreenOff;
- (void)setShouldFixScreenOff:(BOOL)arg1;
- (BOOL)shouldChangeBrightness;
- (void)setShouldChangeBrightness:(BOOL)arg1;
- (int)touchCountWhenProximityState;
- (void)setTouchCountWhenProximityState:(int)arg1;
- (long long)proximityStateErrorCountExpt;
- (void)setProximityStateErrorCountExpt:(long long)arg1;
- (void).cxx_destruct;
@end

