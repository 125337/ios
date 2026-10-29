@interface CBTHalfScreenSessionNative2CPPAPI : NSObject
+ (id)shareInstance;
- (id)buildCacheKey:(unsigned long long)arg1 sourceId:(id)arg2;
- (BOOL)hasSession:(id)arg1;
- (void)registerSession:(id)arg1;
- (void)clearSession:(id)arg1;
- (void)clearAllSessions;
- (void)notifyUIVisible:(id)arg1 visible:(BOOL)arg2;
- (long long)computeReuseAction:(id)arg1 routeType:(long long)arg2 pendingSendMsgContent:(id)arg3 filePath:(id)arg4 fileName:(id)arg5 timelineFeedId:(id)arg6 imagePaths:(id)arg7;
- (void)onRouteEntered:(id)arg1 routeType:(long long)arg2 pendingSendMsgContent:(id)arg3 filePath:(id)arg4 fileName:(id)arg5 timelineFeedId:(id)arg6 imagePaths:(id)arg7;
- (BOOL)hasSentBypass:(id)arg1;
- (void)saveAppBypassInfo:(id)arg1;
- (void)attachSession:(id)arg1 voipSessionID:(id)arg2;
- (id)peekSessionVoipID:(id)arg1;
- (id)getCacheKeyByVoipSessionID:(id)arg1;
- (void)setSessionEnterScene:(id)arg1 enterScene:(int)arg2;
- (int)getEnterSceneByVoipSessionID:(id)arg1;
- (void)setSessionAttachment:(id)arg1 multimodalType:(long long)arg2 multimodalWrap:(id)arg3 multimodalXml:(id)arg4 textInput:(id)arg5 imagePaths:(id)arg6 fileName:(id)arg7;
- (id)fireSeqZero:(id)arg1;
- (BOOL)shouldFireSeqZero:(id)arg1;
@end
