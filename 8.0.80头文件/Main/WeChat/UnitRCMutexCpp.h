@interface UnitRCMutexCpp : UnitRCObjcBaseProxyClass <UnitRCMutex>
+ (id)create;
- (BOOL)tryLock;
- (void)lock;
- (void)unlock;
@end
