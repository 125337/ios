@interface CBTAsstVoIPNativeController : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTAsstVoIPNativeControllerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTAsstVoIPNativeControllerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTAsstVoIPNativeControllerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)launchFlutterAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)launchFlutterAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissFlutterAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissFlutterAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)playRingAsync:(id /* block */)arg1;
- (void)playRingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)stopRingAsync:(id /* block */)arg1;
- (void)stopRingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setAudioActiveAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setAudioActiveAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onCallContextChangedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onCallContextChangedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getAvailableAudioRoutesAsync:(id /* block */)arg1;
- (void)getAvailableAudioRoutesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)switchAudioRouteAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)switchAudioRouteAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissLCKAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissLCKAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)setAudioCategoryAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setAudioCategoryAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)startSessionAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)startSessionAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
