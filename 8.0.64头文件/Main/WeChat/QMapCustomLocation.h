@interface QMapCustomLocation : NSObject
{
    BOOL _isThreadExit; // +0x8
    int _loopCount; // +0xc
    id <QMapCustomLocationDelegate> _delegate; // +0x10
    NSThread * _locationCheckThread; // +0x18
    QMapRepeatTimer * _timer; // +0x20
    NSMutableArray * _interlandDataSafetyManangerArray; // +0x28
    _opaque_pthread_rwlock_t _lock; // +0x30
}
+ (id)shareInstance;
- (id)init;
- (void)callParseCustomLocationDelegate;
- (void)checkLocationIsInland:(id)arg1;
- (void)startCustomLocationCheckingLoop:(double)arg1;
- (void)callObtainLocationSourceFromDifferentTarget;
- (void)triggerParseQMapCustomLocationSourceDelegate;
- (void)createLocationParsingThread;
- (void)threadStart:(id)arg1;
- (void)increaseLoopCount;
- (void)decreaseLoopCount;
- (int)loopCount;
- (void)dealloc;
- (void)registerDataSafetyMananger:(id)arg1;
- (void)unregisterDataSafetyMananger:(id)arg1;
- (void)triggerInternalLocationCheck;
- (void)obtainUselocationFromDataSafetyInternalManager;
- (void)checkLocationIsInlandByInternalLocations:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)locationCheckThread;
- (void)setLocationCheckThread:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isThreadExit;
- (void)setIsThreadExit:(BOOL)arg1;
- (void)setLoopCount:(int)arg1;
- (_opaque_pthread_rwlock_t)lock;
- (void)setLock:(_opaque_pthread_rwlock_t)arg1;
- (id)interlandDataSafetyManangerArray;
- (void)setInterlandDataSafetyManangerArray:(id)arg1;
- (void).cxx_destruct;
@end
