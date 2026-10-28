@interface WCAdvertiseDeviceMotionInfoManager : MMObject
{
    CMMotionManager * _motionManager; // +0x8
    NSObject * _motionManagerLock; // +0x10
    NSMutableDictionary * _attachedObjects; // +0x18
    CMDeviceMotion * _lastMotion; // +0x20
}
+ (id)getInstance;
- (id)init;
- (void)initNotificationObserver;
- (void)removeNotificationObserver;
- (void)onViewDidEnterBackground:(id)arg1;
- (void)attachDeviceMotionManagerWithObject:(id)arg1;
- (void)detachDeviceMotionManagerWithObject:(id)arg1;
- (void)delayUpdateLastMotion;
- (id)fetchCurrentDeviceMotion;
- (BOOL)didMotionDataUpdatedSinceLastMotion:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (id)motionManagerLock;
- (void)setMotionManagerLock:(id)arg1;
- (id)attachedObjects;
- (void)setAttachedObjects:(id)arg1;
- (id)lastMotion;
- (void)setLastMotion:(id)arg1;
- (void).cxx_destruct;
@end
