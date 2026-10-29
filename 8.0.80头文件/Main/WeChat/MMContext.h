@interface MMContext : NSObject <CommonAffContext>
{
    unsigned long long m_contextType; // +0x8
    Uin64 m_uin; // +0x10
    char[32] m_uinStrForLog; // +0x18
    char[21] m_uinString; // +0x38
    NSString * m_userName; // +0x50
    unsigned long long m_userState; // +0x58
    id m_mainController; // +0x60
    NSRecursiveLock * m_contextLock; // +0x68
    NSString * m_userMd5; // +0x70
    NSString * m_userDocumentPath; // +0x78
    NSString * m_userLibraryCachePath; // +0x80
    basic_string<char, std::char_traits<char>, std::allocator<char>> m_marsContext; // +0x88
    MMLongLink * m_marsLongLink; // +0xa0
    MMServiceCenter * m_serviceCenter; // +0xa8
    MMExtensionCenter * m_extensionCenter; // +0xb0
}
+ (id)CancelAllMMTasksNotification;
+ (id)contextFromTask;
+ (void)initialize;
+ (void)initContextEnvironment;
+ (id)currentContext;
+ (id)lastContext;
+ (id)rootContext;
+ (id)activeUserContext;
+ (void)push:(id)arg1;
+ (void)pop:(id)arg1;
+ (void)setContext:(id)arg1 atIndex:(unsigned long long)arg2;
+ (unsigned int)currentUin;
+ (unsigned long long)currentUin64;
+ (const char *)currentUinString;
+ (BOOL)isLoggedIn;
+ (const char *)currentUinStrForLog;
+ (unsigned long long)currentUserType;
+ (unsigned long long)maxUserType;
+ (void)addUserType:(unsigned long long)arg1;
+ (void)removeUserType:(unsigned long long)arg1;
+ (BOOL)currentUserTypeHas:(unsigned long long)arg1;
+ (id)currentUserName;
+ (id)currentUserMd5;
+ (id)currentUserDocumentPath;
+ (id)currentUserLibraryCachePath;
- (id)getService:(Class)arg1;
- (BOOL)isServiceExist:(Class)arg1;
- (void)removeService:(Class)arg1;
- (void)setService:(id)arg1 forClass:(Class)arg2;
- (id)unsafeGetServiceWrapper:(Class)arg1;
- (void)precreateServices:(id)arg1;
- (BOOL)enableTask;
- (BOOL)isNetworkingStarted;
- (void)startNetworking;
- (void)stopNetworking;
- (void *)marsContext;
- (void *)marsLongLinkName;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(id /* block */)arg3;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(id /* block */)arg4;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(BOOL)arg3 block:(id /* block */)arg4;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(BOOL)arg4 block:(id /* block */)arg5;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(id /* block */)arg3;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(id /* block */)arg4;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(BOOL)arg3 block:(id /* block */)arg4;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(BOOL)arg4 block:(id /* block */)arg5;
- (unsigned long long)getUin;
- (id)getUinStr;
- (id)affContext;
- (id)init;
- (id)initWithContextType:(unsigned long long)arg1;
- (void)setUin:(Uin64)arg1 userName:(id)arg2;
- (void)setLongLink:(id)arg1;
- (id)longLink;
- (void)checkExistExtensionIfNeeded;
- (id)mainController;
- (BOOL)isRootContext;
- (BOOL)isUserContext;
- (BOOL)isInvalidContext;
- (id)description;
- (unsigned int)uin;
- (unsigned long long)uin64;
- (const char *)uinString;
- (id)userName;
- (id)userMd5;
- (id)userDocumentPath;
- (id)userLibraryCachePath;
- (void)setMainController:(id)arg1;
- (id)serviceCenter;
- (id)extensionCenter;
- (id)contextLock;
- (void)setContextLock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
