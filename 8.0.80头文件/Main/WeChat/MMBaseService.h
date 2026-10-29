@interface MMBaseService : NSObject
{
    BOOL m_isServiceRemoved; // +0x8
    BOOL m_isInitFinished; // +0x9
    BOOL m_isAfterInitFinished; // +0xa
    NSRecursiveLock * m_initLock; // +0x10
    MMContext * m_context; // +0x18
}
+ (BOOL)canUseInSafemode;
+ (BOOL)enableCyclicDependencyCheck;
- (id)weakContextObject;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)strongContextObject;
- (id)strongContextObjectWithContext:(id)arg1;
- (void)dealloc;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)unsafeUnwrap;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServiceClearData;
- (BOOL)isServiceRemoved;
- (void)setIsServiceRemoved:(BOOL)arg1;
- (void).cxx_destruct;
@end
