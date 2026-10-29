@interface ChatbotiOSOnlyNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotiOSOnlyNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotiOSOnlyNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotiOSOnlyNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (int)sendOpusAudioData:(unsigned long long)arg1 dataLen:(int)arg2;
- (id)getOpusAudioData;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 voipSessionID:(id)arg6 agent:(id)arg7 isRetryAnswer:(BOOL)arg8 source:(int)arg9 chatUsernames:(id)arg10 referMsg:(id)arg11;
- (id)generateAiClientMsgid;
- (BOOL)updateMessageRefer:(int)arg1 referMsg:(id)arg2;
- (id)sendSideInfoMsg:(int)arg1 multimodalWrapData:(id)arg2 multimodalXml:(id)arg3 textInput:(id)arg4 voipSessionID:(id)arg5 isSeqReset:(BOOL)arg6;
- (id)sendSideInfoMsgWithGroup:(int)arg1 multimodalWrapData:(id)arg2 multimodalXml:(id)arg3 textInput:(id)arg4 voipSessionID:(id)arg5 isSeqReset:(BOOL)arg6 groupId:(id)arg7 wrapId:(int)arg8 wrapLen:(int)arg9;
- (void)sendGenerateAiAnswerId:(id)arg1 aiClientMsgid:(id)arg2 voipSessionID:(id)arg3;
- (void)saveAppBypassInfo:(id)arg1;
- (id)getAppBypassInfo:(id)arg1;
- (void)removeAppBypassInfo:(id)arg1;
- (void)bindAppBypassVoipSessionID:(id)arg1;
- (void)updateEnterScene:(id)arg1 enterScene:(int)arg2;
- (id)getSelectedChatUsernames;
- (void)saveSelectedChatUsernames:(id)arg1;
- (BOOL)updateUplinkFileId:(id)arg1 localId:(int)arg2 oldFileId:(id)arg3 newFileId:(id)arg4 newAesKey:(id)arg5;
- (void)saveReceivedFileBypass:(id)arg1 bypassInfo:(id)arg2;
- (void)setExtraInfoValue:(int)arg1 key:(int)arg2 value:(id)arg3;
- (id)getExtraInfoValue:(int)arg1 key:(int)arg2;
- (id)searchMessages:(id)arg1 beforeTime:(unsigned long long)arg2 limit:(int)arg3 voipSessionID:(id)arg4 types:(id)arg5;
- (id)listMessages:(unsigned long long)arg1 limit:(int)arg2 voipSessionID:(id)arg3 types:(id)arg4;
- (id)listMessagesAfter:(unsigned long long)arg1 limit:(int)arg2 voipSessionID:(id)arg3 types:(id)arg4;
- (id)getMessageBySvrid:(long long)arg1;
- (id)searchAllMessagesAsJson:(id)arg1 beforeTime:(unsigned long long)arg2 limit:(int)arg3 types:(id)arg4;
- (id)listAllMessagesAsJson:(unsigned long long)arg1 beforeTime:(unsigned long long)arg2 limit:(int)arg3 types:(id)arg4;
- (BOOL)checkASRContentValid:(id)arg1;
- (id)getUserFileCachePath:(int)arg1 index:(int)arg2;
- (BOOL)saveUserFileToCache:(int)arg1 index:(int)arg2 sourcePath:(id)arg3;
- (BOOL)deleteDialoguesByIds:(id)arg1 checkedSvrIds:(id)arg2;
- (void)onPlaybackInterrupted;
- (void)sendAsstNotifyCall:(id)arg1 voipSessionID:(id)arg2;
- (void)notifyTTSPlayFinished:(id)arg1 reason:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
