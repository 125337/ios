@interface ChatbotUINative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotUINative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotUINative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotUINative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachNativeControllerAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)attachNativeControllerAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)joinRoomAsync:(id)arg1 screenWidth:(int)arg2 screenHeight:(int)arg3 openScene:(int)arg4 roomInfoPB:(const void *)arg5 completion:(id /* block */)arg6;
- (void)joinRoomAsync:(id)arg1 screenWidth:(int)arg2 screenHeight:(int)arg3 openScene:(int)arg4 roomInfoPB:(const void *)arg5 on:(id)arg6 completion:(id /* block */)arg7;
- (void)hangupAsync:(int)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)hangupAsync:(int)arg1 scene:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (int)getAudioData:(unsigned long long)arg1 dataLen:(int)arg2;
- (int)sendAudioData:(unsigned long long)arg1 dataLen:(int)arg2;
- (int)getVideoData:(int)arg1 buf:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (int)sendVideoData:(unsigned long long)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
- (void)releaseAffAsync:(id /* block */)arg1;
- (void)releaseAffAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getRoomInfo:(id)arg1;
- (id)getChatBotModelInfos;
- (id)getAsstRoomInfo:(int)arg1;
- (void)switchNewRoomAsync:(id)arg1 screenWidth:(int)arg2 screenHeight:(int)arg3 completion:(id /* block */)arg4;
- (void)switchNewRoomAsync:(id)arg1 screenWidth:(int)arg2 screenHeight:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRUDPCmdMsgAsync:(id)arg1 targetId:(int)arg2 completion:(id /* block */)arg3;
- (void)sendRUDPCmdMsgAsync:(id)arg1 targetId:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchChatBotRoomInfoAsync:(id /* block */)arg1;
- (void)fetchChatBotRoomInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reportSingleEvent:(int)arg1;
- (id)getBaseReportData;
- (void)reportWithPB:(id)arg1;
- (int)sendOpusAudioData:(unsigned long long)arg1 dataLen:(int)arg2;
- (id)getOpusAudioData;
- (void)hangupAndJoinRoomAsync:(id)arg1 param:(id)arg2 screenWidth:(int)arg3 screenHeight:(int)arg4 openScene:(int)arg5 roomInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)hangupAndJoinRoomAsync:(id)arg1 param:(id)arg2 screenWidth:(int)arg3 screenHeight:(int)arg4 openScene:(int)arg5 roomInfo:(id)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)reportOpInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reportOpInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchChatBotSocialHistoryAsync:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchChatBotSocialHistoryAsync:(long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getActiveSocialRoomListAsync:(id /* block */)arg1;
- (void)getActiveSocialRoomListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTalkingChatBotHistoryAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchTalkingChatBotHistoryAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getRecommendAsstRoomInfosAsync:(long long)arg1 pageSize:(int)arg2 pageNum:(int)arg3 completion:(id /* block */)arg4;
- (void)getRecommendAsstRoomInfosAsync:(long long)arg1 pageSize:(int)arg2 pageNum:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)modifyHeadImageAsync:(id)arg1 headImageUrl:(id)arg2 completion:(id /* block */)arg3;
- (void)modifyHeadImageAsync:(id)arg1 headImageUrl:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)preloadMoreSocialAIInfo:(int)arg1 pageSize:(int)arg2;
- (void)getPreloadSocialAIInfoAsync:(int)arg1 pageSize:(int)arg2 completion:(id /* block */)arg3;
- (void)getPreloadSocialAIInfoAsync:(int)arg1 pageSize:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)getNeedShowActiveSocialRoomRedDot;
- (void)resetActiveSocialRoomRedDotAsync:(id /* block */)arg1;
- (void)resetActiveSocialRoomRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getCurSessionId;
- (unsigned long long)getCurRoomID;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
