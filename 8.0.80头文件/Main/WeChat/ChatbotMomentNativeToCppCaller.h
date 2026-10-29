@interface ChatbotMomentNativeToCppCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotMomentNativeToCppCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotMomentNativeToCppCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotMomentNativeToCppCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)serviceInit:(id)arg1;
- (void)serviceClearData;
- (void)getBotMomentModelAsync:(int)arg1 endCursorId:(id)arg2 completion:(id /* block */)arg3;
- (void)getBotMomentModelAsync:(int)arg1 endCursorId:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)botMomentInteractAsync:(int)arg1 objectId:(id)arg2 userName:(id)arg3 nickName:(id)arg4 scene:(int)arg5 completion:(id /* block */)arg6;
- (void)botMomentInteractAsync:(int)arg1 objectId:(id)arg2 userName:(id)arg3 nickName:(id)arg4 scene:(int)arg5 on:(id)arg6 completion:(id /* block */)arg7;
- (void)setChatSwitchMode:(int)arg1;
- (int)getChatSwitchMode;
- (void)setMainFrameRedDot:(BOOL)arg1;
- (BOOL)getNeedMainFrameRedDot;
- (int)getBadgeNumber:(id)arg1;
- (void)clearBadgeAsync:(id)arg1 sinceSeqId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)clearBadgeAsync:(id)arg1 sinceSeqId:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (id)getMoreInteractionInfo:(id)arg1 sinceTime:(unsigned long long)arg2 isHistoryType:(BOOL)arg3 limit:(int)arg4;
- (void)reportRead;
- (void)postChatBotMomentAsync:(id)arg1 type:(int)arg2 completion:(id /* block */)arg3;
- (void)postChatBotMomentAsync:(id)arg1 type:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)commentMomentAsync:(id)arg1 commentQuery:(id)arg2 replyCommentInfo:(id)arg3 scene:(int)arg4 userName:(id)arg5 nickName:(id)arg6 completion:(id /* block */)arg7;
- (void)commentMomentAsync:(id)arg1 commentQuery:(id)arg2 replyCommentInfo:(id)arg3 scene:(int)arg4 userName:(id)arg5 nickName:(id)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)batchGetMomentsAsync:(id)arg1 type:(int)arg2 completion:(id /* block */)arg3;
- (void)batchGetMomentsAsync:(id)arg1 type:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)syncInteractions:(int)arg1;
- (id)getFilePath:(int)arg1 fileName:(id)arg2;
- (void)setMomentTimelineType:(int)arg1;
- (int)getCurMomentTimelineType;
- (BOOL)enableTimeLineEntry;
- (void)setTimeLineEntryEnable:(BOOL)arg1;
- (BOOL)getNeedTimeLineTabRedDot;
- (void)setNeedTimeLineTabRedDot:(BOOL)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
