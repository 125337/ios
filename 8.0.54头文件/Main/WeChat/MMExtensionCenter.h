@interface MMExtensionCenter : NSObject
{
    os_unfair_lock_s m_lock; // +0x8
    void * m_dictExtension; // +0x10
    id m_context; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (id)getExtension:(id)arg1;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(id /* block */)arg3;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(id /* block */)arg4;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(id /* block */)arg3;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(id /* block */)arg4;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(BOOL)arg3 block:(id /* block */)arg4;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(BOOL)arg4 block:(id /* block */)arg5;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(BOOL)arg3 block:(id /* block */)arg4;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(BOOL)arg4 block:(id /* block */)arg5;
- (void)checkExistExtension;
@end

