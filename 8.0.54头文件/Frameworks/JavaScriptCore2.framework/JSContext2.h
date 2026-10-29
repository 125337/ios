@interface JSContext2 : NSObject
{
    RetainPtr<JSVirtualMachine2> m_virtualMachine; // +0x8
    OpaqueJSContext * m_context; // +0x10
    Strong<JSC2::JSObject, JSC2::ShouldStrongDestructorGrabLock::No> m_exception; // +0x18
    WeakObjCPtr<id<JSModuleLoaderDelegate>> m_moduleLoaderDelegate; // +0x20
    id /* block */ _exceptionHandler; // +0x28
}
+ (id)contextWithJSGlobalContextRef:(OpaqueJSContext *)arg1;
+ (id)currentContext;
+ (id)currentThis;
+ (id)currentCallee;
+ (id)currentArguments;
- (id)initWithGlobalContextRef:(OpaqueJSContext *)arg1;
- (void)notifyException:(OpaqueJSValue *)arg1;
- (id)valueFromNotifyException:(OpaqueJSValue *)arg1;
- (BOOL)boolFromNotifyException:(OpaqueJSValue *)arg1;
- (void)beginCallbackWithData:(void *)arg1 calleeValue:(OpaqueJSValue *)arg2 thisValue:(OpaqueJSValue *)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue * *)arg5;
- (void)endCallbackWithData:(void *)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (id)wrapperMap;
- (id)wrapperForJSObject:(OpaqueJSValue *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (OpaqueJSContext *)JSGlobalContextRef;
- (void)ensureWrapperMap;
- (id)init;
- (id)initWithVirtualMachine:(id)arg1;
- (void)dealloc;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)evaluateJSScript:(id)arg1;
- (id)dependencyIdentifiersForModuleJSScript:(id)arg1;
- (void)_setITMLDebuggableType;
- (void)setException:(id)arg1;
- (id)exception;
- (id)globalObject;
- (id)virtualMachine;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)isInspectable;
- (void)setInspectable:(BOOL)arg1;
- (BOOL)_remoteInspectionEnabled;
- (void)_setRemoteInspectionEnabled:(BOOL)arg1;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1;
- (__CFRunLoop *)_debuggerRunLoop;
- (void)_setDebuggerRunLoop:(__CFRunLoop *)arg1;
- (id)moduleLoaderDelegate;
- (void)setModuleLoaderDelegate:(id)arg1;
- (id /* block */)exceptionHandler;
- (void)setExceptionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

