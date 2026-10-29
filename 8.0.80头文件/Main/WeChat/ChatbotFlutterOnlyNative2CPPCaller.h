@interface ChatbotFlutterOnlyNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotFlutterOnlyNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotFlutterOnlyNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotFlutterOnlyNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)notifyRecordStartStateChange:(int)arg1;
- (void)notifyRecordStartStateChangeV2:(unsigned long long)arg1 state:(int)arg2 errorCode:(int)arg3;
- (void)notifyAudioLevelMeter:(unsigned long long)arg1 peak:(float)arg2;
- (void)notifyTTSPlayStateChange:(BOOL)arg1;
- (void)notifyTTSPlayInterrupted;
- (void)notifyCustAsstListChanged:(id)arg1;
- (void)notifyServiceClearData;
- (id)getKVString:(id)arg1;
- (void)syncKVToRemote:(id)arg1 value:(id)arg2;
- (void)notifyGroupCustAsstMembersChanged:(id)arg1 memberData:(id)arg2;
- (void)startChatHisSyncFromServer;
- (void)invalidateNegativeScreenSession;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
