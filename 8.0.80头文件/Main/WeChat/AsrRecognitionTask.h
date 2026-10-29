@interface AsrRecognitionTask : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ilink_asr::AsrRecognitionTaskCppCover> cpp_cover; // +0x80
    weak_ptr<ilink_asr::AsrRecognitionTaskDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ilink_asr::AsrRecognitionTaskDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (int)sendAudioData:(id)arg1 isFinal:(BOOL)arg2 extraData:(const void *)arg3;
- (void)cancel;
- (void)subscribeResultUpdateEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeResultUpdateEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeResultUpdateEvent:(id)arg1;
- (void)subscribeEndStateNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeEndStateNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeEndStateNotifyEvent:(id)arg1;
- (id)getInfo;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
