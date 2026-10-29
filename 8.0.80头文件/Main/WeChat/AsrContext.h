@interface AsrContext : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ilink_asr::AsrContextCppCover> cpp_cover; // +0x80
    weak_ptr<ilink_asr::AsrContextDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ilink_asr::AsrContextDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (int)configChannel:(id)arg1;
- (id)createRecognitionTask:(id)arg1;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
