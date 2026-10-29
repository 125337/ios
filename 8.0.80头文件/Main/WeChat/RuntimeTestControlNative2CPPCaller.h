@interface RuntimeTestControlNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::RuntimeTestControlNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::RuntimeTestControlNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::RuntimeTestControlNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)isAvailable;
- (BOOL)startSocket:(int)arg1;
- (BOOL)stopSocket;
- (BOOL)isSocketRunning;
- (int)getSocketPort;
- (unsigned long long)getSocketExpiresAtUnixMs;
- (BOOL)startDebugSocket;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
