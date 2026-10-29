@interface CBTHalfScreenSessionNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHalfScreenSessionNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHalfScreenSessionNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHalfScreenSessionNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)buildCacheKey:(int)arg1 sourceId:(id)arg2;
- (void)registerSession:(id)arg1;
- (BOOL)hasSession:(id)arg1;
- (void)clearSession:(id)arg1;
- (void)clearAllSessions;
- (void)notifyUIVisible:(id)arg1 visible:(BOOL)arg2;
- (int)computeReuseAction:(id)arg1 routeType:(int)arg2 pendingSendMsgContent:(id)arg3 filePath:(id)arg4 fileName:(id)arg5 timelineFeedId:(id)arg6 imagePaths:(id)arg7;
- (void)onRouteEntered:(id)arg1 routeType:(int)arg2 pendingSendMsgContent:(id)arg3 filePath:(id)arg4 fileName:(id)arg5 timelineFeedId:(id)arg6 imagePaths:(id)arg7;
- (BOOL)hasSentBypass:(id)arg1;
- (void)attachSession:(id)arg1 voipSessionID:(id)arg2;
- (id)peekSessionVoipID:(id)arg1;
- (id)getCacheKeyByVoipSessionID:(id)arg1;
- (void)setSessionAttachment:(id)arg1 multimodalType:(int)arg2 multimodalWrap:(id)arg3 multimodalXml:(id)arg4 textInput:(id)arg5 imagePaths:(id)arg6 fileName:(id)arg7;
- (BOOL)hasSessionMultimodalWrap:(id)arg1;
- (id)takeSessionImagePaths:(id)arg1;
- (id)peekSessionTextInput:(id)arg1;
- (id)peekSessionCoopCardUrl:(id)arg1;
- (id)peekSessionCoopCardData:(id)arg1;
- (unsigned long long)peekSessionCoopCardForwardRefId:(id)arg1;
- (unsigned long long)storeCardWrapToForward:(id)arg1 cardWrapBytes:(id)arg2;
- (id)peekSessionFilePath:(id)arg1;
- (id)peekSessionFileName:(id)arg1;
- (id)fireHalfScreenSideInfo:(id)arg1;
- (BOOL)prepareStandardUplink:(id)arg1;
- (BOOL)shouldFireHalfScreenSideInfo:(id)arg1;
- (BOOL)isChatGroupRoute:(id)arg1;
- (void)saveAppBypassInfo:(id)arg1;
- (id)getAppBypassInfo:(id)arg1;
- (void)bindAppBypassVoipSessionID:(id)arg1;
- (void)removeAppBypassInfo:(id)arg1;
- (void)setSessionEnterScene:(id)arg1 enterScene:(int)arg2;
- (int)getEnterSceneByVoipSessionID:(id)arg1;
- (int)getLastRouteType:(id)arg1;
- (id)prepareLaunch:(id)arg1;
- (id)claimLatestPendingLaunch:(id)arg1;
- (void)ackLaunch:(id)arg1 launchRevision:(unsigned long long)arg2 phase:(int)arg3 result:(int)arg4;
- (id)submitTurn:(id)arg1 launchRevision:(unsigned long long)arg2 uploadResultsJson:(id)arg3;
- (void)notifyCarriedSessionHandlerReady:(id)arg1 voipSessionId:(id)arg2;
- (void)destroySessionImmediatelyAsync:(id)arg1 reuseKey:(id)arg2 completion:(id /* block */)arg3;
- (void)destroySessionImmediatelyAsync:(id)arg1 reuseKey:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyLaunchFailedAsync:(id)arg1 launchRevision:(unsigned long long)arg2 errorCode:(int)arg3 completion:(id /* block */)arg4;
- (void)notifyLaunchFailedAsync:(id)arg1 launchRevision:(unsigned long long)arg2 errorCode:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchHalfScreenSugOnceAsync:(id /* block */)arg1;
- (void)fetchHalfScreenSugOnceAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getCachedHalfScreenSug;
- (void)clearHalfScreenSugCache;
- (id)syncGetHalfScreenSug:(int)arg1 shareType:(int)arg2;
- (void)reportAskXiaoweiCustomEventAsync:(id)arg1 enterScene:(int)arg2 viewId:(id)arg3 extraParamsJson:(id)arg4 completion:(id /* block */)arg5;
- (void)reportAskXiaoweiCustomEventAsync:(id)arg1 enterScene:(int)arg2 viewId:(id)arg3 extraParamsJson:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)notifyLaunchDismissed:(id)arg1 launchRevision:(unsigned long long)arg2;
- (void)notifyLaunchPresented:(id)arg1 launchRevision:(unsigned long long)arg2;
- (id)generateAskXiaoweiClkId;
- (id)generateAndCacheAskXiaoweiClkId;
- (id)consumeCachedAskXiaoweiClkId;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
