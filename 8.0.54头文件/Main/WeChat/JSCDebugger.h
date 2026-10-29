@interface JSCDebugger : NSObject
{
    JSContext * _context; // +0x8
}
+ (id)debuggerWithContext:(id)arg1;
+ (BOOL)isSupportedDebugger;
+ (__CFString *)JSCDebuggerRunLoopMode;
+ (void)JSCDebuggerQueueTaskOnGlobalQueue:(id /* block */)arg1;
- (BOOL)setupJSCDebuggerConnection:(id /* block */)arg1;
- (BOOL)setupJSCDebuggerConnection:(id /* block */)arg1 needFilter:(BOOL)arg2;
- (void)sendMessageToJSCDebugger:(id)arg1;
- (void)disconnectToJSCDebugger;
- (void)getMemoryConsume:(id /* block */)arg1;
- (id)debuggerWrapperFromContext;
- (void)setupJSCConnectionIfNeeded:(BOOL)arg1;
- (void)removeDebuggerWrapper;
- (id /* block */)setupConnectionAdapter:(void *)arg1 disconnectBlock:(id *)arg2;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

