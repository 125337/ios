@interface CBTHeadlessVoiceApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHeadlessVoiceApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHeadlessVoiceApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHeadlessVoiceApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)attachReportSignalObserver:(id)arg1;
- (void)detachReportSignalObserver:(id)arg1;
- (void)attachRoundResultObserver:(id)arg1;
- (void)detachRoundResultObserver:(id)arg1;
- (id)startVoiceInput:(id)arg1;
- (void)commitVoiceInput:(unsigned long long)arg1;
- (void)cancelVoiceInput:(unsigned long long)arg1 reason:(int)arg2;
- (id)getVoiceSessionID:(unsigned long long)arg1;
- (BOOL)getSessionAlive:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
