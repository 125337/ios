@interface CBTHeadlessVoiceObserver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHeadlessVoiceObserverCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHeadlessVoiceObserverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHeadlessVoiceObserverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onVoiceInputStateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)onVoiceInputLevelMeter:(unsigned long long)arg1 peak:(float)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
