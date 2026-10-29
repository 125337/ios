@interface ChatbotAudioVolumeObserver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotAudioVolumeObserverCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotAudioVolumeObserverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotAudioVolumeObserverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onSystemVolumeChangedAsync:(float)arg1 volume:(float)arg2 direction:(int)arg3 otherAudioActive:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)onSystemVolumeChangedAsync:(float)arg1 volume:(float)arg2 direction:(int)arg3 otherAudioActive:(BOOL)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
