@interface JITBindingState : NSObject
{
    int _instanceId; // +0x8
    JSContext * _context; // +0x10
    HolderBase * _scriptState; // +0x18
    JITRuntime * _runtime; // +0x20
    OpaqueJSValue * _reflectConstructFunc; // +0x28
    OpaqueJSValue * _promiseConstructor; // +0x30
    void * _instance2idWeakMap; // +0x38
    OpaqueJSValue * _setBindingIdFunc; // +0x40
    OpaqueJSValue * _getBindingIdFunc; // +0x48
    void * _id2InstanceMap; // +0x50
    OpaqueJSValue * _setBindingObjFunc; // +0x58
    OpaqueJSValue * _getBindingObjFunc; // +0x60
    OpaqueJSValue * _deleteBindingObjFunc; // +0x68
}
- (id)packReturnWithOk:(id)arg1 hasNestedBuffers:(BOOL)arg2;
- (id)packReturnWithErrCode:(long long)arg1 errmsg:(id)arg2;
- (id)packWrapperObject:(int)arg1 type:(long long)arg2 meta:(id)arg3;
- (int)getBindingIdFromBindingObj:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)getBindingObjFromBindingId:(int)arg1;
- (void)deleteBindingObj:(OpaqueJSValue *)arg1;
- (void)deleteBindingObjById:(int)arg1;
- (id)packObject:(OpaqueJSValue *)arg1 type:(long long)arg2 meta:(id)arg3;
- (OpaqueJSValue *)unpackObject:(int)arg1;
- (int)getBindingObjectId:(id)arg1;
- (id)packBindingObject:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)unpackBindingObject:(int)arg1;
- (int)getFunctionId:(id)arg1;
- (id)packFunction:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)unpackFunction:(int)arg1;
- (int)getPromiseId:(id)arg1;
- (id)packPromise:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)unpackPromise:(int)arg1;
- (OpaqueJSValue *)constructJsObjectWithClassName:(const char *)arg1 args:(OpaqueJSValue *)arg2;
- (OpaqueJSValue *)constructJsObject:(OpaqueJSValue *)arg1 args:(OpaqueJSValue *)arg2;
- (int)getBindingIdFromWrappedObject:(id)arg1 expectedType:(long long)arg2;
- (int)getBindingIdFromWrappedObject:(id)arg1;
- (long long)getBindingTypeFromWrappedObject:(id)arg1;
- (id)getBindingMetaFromWrappedObject:(id)arg1;
- (long long)getResponseTypeFromExtraInfo:(id)arg1;
- (id)convertJSValueToNSObjectRecursively:(OpaqueJSValue *)arg1 hasNestedBuffer:(BOOL *)arg2 responseType:(long long)arg3;
- (id)convertJSValueToNSObject:(OpaqueJSValue *)arg1 hasNestedBuffer:(BOOL *)arg2 responseType:(long long)arg3;
- (id)convertNSObjectToJSValueRecursively:(id)arg1 responseType:(long long)arg2;
- (id)convertNSObjectToJSValue:(id)arg1 responseType:(long long)arg2;
- (id)handlePromise:(OpaqueJSValue *)arg1 responseType:(long long)arg2;
- (id)initWithRuntime:(id)arg1;
- (void)dealloc;
- (void)setupContext;
- (void)releaseContext;
- (id)handleJITBindingCall:(id)arg1;
- (id)handleBindingCmd:(long long)arg1 target:(id)arg2 funcName:(id)arg3 args:(id)arg4 extra:(id)arg5;
- (id)handleBindingCmdNew:(id)arg1 args:(id)arg2 meta:(id)arg3 extra:(id)arg4;
- (id)handleBindingCmdDel:(int)arg1 meta:(id)arg2 extra:(id)arg3;
- (id)handleBindingCmdSet:(OpaqueJSValue *)arg1 propName:(id)arg2 newValue:(id)arg3 meta:(id)arg4 extra:(id)arg5;
- (id)handleBindingCmdGet:(OpaqueJSValue *)arg1 propName:(id)arg2 meta:(id)arg3 extra:(id)arg4;
- (id)handleBindingCmdCall:(OpaqueJSValue *)arg1 funcName:(id)arg2 args:(id)arg3 meta:(id)arg4 extra:(id)arg5;
- (BOOL)isPromise:(OpaqueJSValue *)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (HolderBase *)scriptState;
- (void)setScriptState:(HolderBase *)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (OpaqueJSValue *)reflectConstructFunc;
- (void)setReflectConstructFunc:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)promiseConstructor;
- (void)setPromiseConstructor:(OpaqueJSValue *)arg1;
- (int)instanceId;
- (void)setInstanceId:(int)arg1;
- (void *)instance2idWeakMap;
- (void)setInstance2idWeakMap:(void *)arg1;
- (OpaqueJSValue *)setBindingIdFunc;
- (void)setSetBindingIdFunc:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)getBindingIdFunc;
- (void)setGetBindingIdFunc:(OpaqueJSValue *)arg1;
- (void *)id2InstanceMap;
- (void)setId2InstanceMap:(void *)arg1;
- (OpaqueJSValue *)setBindingObjFunc;
- (void)setSetBindingObjFunc:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)getBindingObjFunc;
- (void)setGetBindingObjFunc:(OpaqueJSValue *)arg1;
- (OpaqueJSValue *)deleteBindingObjFunc;
- (void)setDeleteBindingObjFunc:(OpaqueJSValue *)arg1;
- (void).cxx_destruct;
@end

