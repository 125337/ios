@interface BoxIamBizAudioVoiceControlManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizAudioVoiceControlManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizAudioVoiceControlManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizAudioVoiceControlManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)startVoiceControlAsync:(id /* block */)arg1;
- (void)startVoiceControlAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelVoiceControl;
- (void)subscribeExitPlayerEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeExitPlayerEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeExitPlayerEvent:(id)arg1;
- (void)subscribeContinueVoiceControlEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeContinueVoiceControlEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeContinueVoiceControlEvent:(id)arg1;
- (void)subscribeVoiceControlFinishEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeVoiceControlFinishEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeVoiceControlFinishEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
