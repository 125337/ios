@interface ChatBotLegalData : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatBotLegalDataCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatBotLegalDataDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatBotLegalDataDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchLegalDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchLegalDataAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)clearLegalDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)clearLegalDataAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getLegalStateAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getLegalStateAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)grantSettingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)grantSettingAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)grantAskAndSettingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)grantAskAndSettingAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)recordTipShownAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)recordTipShownAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)resetTipShownAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)resetTipShownAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
