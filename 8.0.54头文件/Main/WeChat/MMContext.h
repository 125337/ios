@interface MMContext : NSObject <CommonAffContext>
{
    unsigned long long m_contextType; // +0x8
    unsigned int m_uin; // +0x10
    char[32] m_uinStr; // +0x14
    NSString * m_userName; // +0x38
    unsigned long long m_userState; // +0x40
    id m_mainController; // +0x48
    NSRecursiveLock * m_contextLock; // +0x50
    NSString * m_userMd5; // +0x58
    NSString * m_userDocumentPath; // +0x60
    NSString * m_userLibraryCachePath; // +0x68
    basic_string<char, std::char_traits<char>, std::allocator<char>> m_marsContext; // +0x70
    MMLongLink * m_marsLongLink; // +0x88
    MMServiceCenter * m_serviceCenter; // +0x90
    MMExtensionCenter * m_extensionCenter; // +0x98
}
+ (id)CancelAllMMTasksNotification;
+ (id)contextFromTask;
+ (void)initialize;
+ (void)initContextEnvironment;
+ (id)currentContext;
+ (id)fastCurrentContext;
+ (id)lastContext;
+ (id)rootContext;
+ (id)activeUserContext;
+ (void)push:(id)arg1;
+ (void)pop:(id)arg1;
+ (void)setContext:(id)arg1 atIndex:(unsigned long long)arg2;
+ (unsigned int)currentUin;
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
- (void)setService:(id)arg1 for:(Class)arg2;
- (id)unsafeGetServiceWrapper:(Class)arg1;
- (BOOL)enableTask;
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
- (unsigned int)getUin;
- (id)getUinStr;
- (id)affContext;
- (id)init;
- (id)initWithContextType:(unsigned long long)arg1;
- (void)setUin:(unsigned int)arg1 userName:(id)arg2;
- (void)setLongLink:(id)arg1;
- (id)longLink;
- (void)checkExistExtensionIfNeeded;
- (id)mainController;
- (BOOL)isRootContext;
- (BOOL)isUserContext;
- (BOOL)isInvalidContext;
- (id)description;
- (unsigned int)uin;
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

