@interface MMContextManager : NSObject
{
    NSMutableArray * m_contexts; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    MMContext * m_activeContext; // +0x18
    unsigned int m_loginContextTimes; // +0x20
    unsigned int m_loginNonGuestContextTimes; // +0x24
    NSString * _documentPath; // +0x28
    NSString * _libraryCachePath; // +0x30
}
+ (id)defaultManager;
- (id)init;
- (void)initContextEnvironment;
- (id)newGuestContext;
- (id)newContextWithUser:(id)arg1 uin:(Uin64Adapter)arg2;
- (void)loginByContext:(id)arg1;
- (void)logout:(id)arg1;
- (id)allContexts;
- (id)activeUserContext;
- (id)contextByUin:(Uin64Adapter)arg1;
- (id)contextByMarsContext:(const void *)arg1;
- (id)contextByMarsLongLinkName:(const char *)arg1;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callMemoryWarning;
- (void)callClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)callClearMemoryCacheInBackground;
- (void)callPauseBackgroundTask:(unsigned long long)arg1;
- (void)callResumeBackgroundTask:(unsigned long long)arg1;
- (unsigned int)loginContextTimes;
- (unsigned int)loginNonGuestContextTimes;
- (id)documentPath;
- (void)setDocumentPath:(id)arg1;
- (id)libraryCachePath;
- (void)setLibraryCachePath:(id)arg1;
- (void).cxx_destruct;
@end
