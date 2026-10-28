@interface MMServiceCenter : NSObject
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_dictService; // +0x10
    id m_context; // +0x18
    BOOL m_isCallClearData; // +0x20
    BOOL m_shouldAssert; // +0x21
    unsigned long long m_userState; // +0x28
}
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (BOOL)isServiceExist:(Class)arg1;
- (id)getService:(Class)arg1;
- (void)setService:(id)arg1 for:(Class)arg2;
- (void)removeService:(Class)arg1;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callMemoryWarning;
- (void)callClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)callClearMemoryCacheInBackground;
- (void)callPauseBackgroundTask:(unsigned long long)arg1;
- (void)callResumeBackgroundTask:(unsigned long long)arg1;
- (void)removeAllServices;
- (void)callClearData;
- (void)callClearDataAfter;
- (void)commonInClearData:(id)arg1;
- (void)userWillLogin;
- (void)userDidLogout;
- (void).cxx_destruct;
@end
