@interface TuringShield_YOUTU108138v208018 : NSObject
{
    BOOL _messageTicketServiceAlreadyStarted; // +0x8
    NSObject<TS_CLASS_ts_service> * _innerService; // +0x10
    NSMutableArray * _delegates; // +0x18
    NSMutableDictionary * _tasks; // +0x20
    NSMutableArray * _temporaryTasks; // +0x28
    NSString * _messageTicketServiceUserID; // +0x30
    NSObject<OS_dispatch_source> * _messageTokenServiceTimer; // +0x38
    TuringMessageTicket_YOUTU108138v208018 * _cachedMessageTicket; // +0x40
    NSObject<OS_dispatch_semaphore> * _messageTokenQueryLock; // +0x48
    NSObject<OS_dispatch_queue> * _messageTokenQueryQueue; // +0x50
    NSLock * _turingMessageOnQueueCounterLock; // +0x58
    unsigned long long _turingMessageOnQueueCounter; // +0x60
    TuringRiskToken_YOUTU108138v208018 * _cachedDeviceRiskMessage; // +0x68
    NSOperationQueue * _riskMessageQueryQueue; // +0x70
    TuringAutoPostRule_YOUTU108138v208018 * _turingMessageServicePostRule; // +0x78
    NSMutableDictionary * _blockedTuringMessageConfig; // +0x80
}
+ (id)customFeatureKeyToKeyMapping;
+ (void)setCustomFeatureForKey:(id)arg1 withValue:(id)arg2;
+ (id)customFeatureValueForKey:(id)arg1;
+ (void)setupTMFAppID:(id)arg1 forRSAPublicKey:(id)arg2;
+ (void)setupTMFHTTPServer:(id)arg1;
+ (void)setupTMFHTTPServers:(id)arg1;
+ (void)setupTMFHTTPPostCallback:(id /* block */)arg1;
+ (id)information;
+ (id)standardService;
+ (id)defaultAppContext;
+ (id)appContext;
+ (double)requestTimeout;
+ (void)setRequestTimeout:(double)arg1;
+ (void)resetDefaultRequestTimeout;
- (BOOL)activateSignatureToken:(id)arg1 error:(id *)arg2;
- (id)getSignatureForData:(id)arg1 error:(id *)arg2;
- (id)getLocalGUID;
- (id)initForName:(id)arg1;
- (void)dealloc;
- (void)preloadCacheForService;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resampleRecord:(id)arg1;
- (id)autoPostRecordIfNeeded:(id)arg1;
- (void)setupRecordHandler;
- (id)analysisTaskForSceneID:(unsigned long long)arg1 withUserID:(id)arg2 policy:(id)arg3;
- (void)detathManagedAnalysis:(id)arg1;
- (id)managedAnalysisTaskForSceneID:(unsigned long long)arg1;
- (id)cachedRecords;
- (id)cachedRecordsForSceneID:(unsigned long long)arg1;
- (void)removeRecords:(id)arg1;
- (BOOL)storeRecord:(id)arg1;
- (unsigned long long)postRecord:(id)arg1 forRule:(id)arg2;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2;
- (void)enumerateDelegatesUsingBlock:(id /* block */)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)predictionForError:(id)arg1 withRecord:(id)arg2;
- (id)predictionForResponse:(id)arg1 withRecord:(id)arg2;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2 withStubbingSession:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)cancelPostForID:(unsigned long long)arg1;
- (void)startTuringMessageServiceWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)startRiskDetectingWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)stopRiskDetecting;
- (id)getRiskMessageOfflineWithPostRule:(id)arg1 includesOutdatedData:(BOOL)arg2 caller:(unsigned long long)arg3;
- (BOOL)getRiskMessageOnlineWithTicket:(id)arg1 withStubbingSession:(id)arg2 withExtractAPIChecking:(id)arg3 withPostRule:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)fetchCachedDeviceRiskMessage;
- (void)performDeviceRiskMessageRefreshWithRetry:(long long)arg1 maxRetries:(long long)arg2 wasInitiallyNil:(BOOL)arg3;
- (void)fetchRiskMessageUsingCacheWithExtractAPIChecking:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchRiskMessageWithExtractAPIChecking:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchRiskMessageWithExtractAPIChecking:(id)arg1 usingCachedMessage:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)innerFetchRiskMessageWithExtractAPIChecking:(id)arg1 usingCachedMessage:(BOOL)arg2 includesOutdatedMessage:(BOOL)arg3 usesCachedMessageIfError:(BOOL)arg4 caller:(unsigned long long)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)fetchRiskMessageWithExtractAPIChecking:(id)arg1 usingCachedMessage:(BOOL)arg2 includesOutdatedMessage:(BOOL)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)innerFetchUniversalRiskMessageWithExtractAPIChecking:(id)arg1 usingCachedMessage:(BOOL)arg2 includesOutdatedMessage:(BOOL)arg3 alsoRequiringDeviceInfo:(BOOL)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)fetchUniversalRiskMessageWithExtractAPIChecking:(id)arg1 usingCachedMessage:(BOOL)arg2 includesOutdatedMessage:(BOOL)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)startUserInteractionDetecting;
- (void)stopUserUserInteractionDetecting;
- (id)makeTuringMessageRecordWithStubbingSession:(id)arg1;
- (void)startTuringMessageServiceForUserID:(id)arg1 appContext:(id)arg2 postRule:(id)arg3;
- (void)stopTuringMessageService;
- (id)getTuringMessageMemoryCopyInternal;
- (id)getCachedTuringMessageTicket;
- (id)getOfflineTuringMessageTicket:(BOOL)arg1;
- (id)getCachedTuringMessageTicketIncludingOudatedData;
- (BOOL)getTuringMessageOnlineWithCompletionHandler:(id /* block */)arg1;
- (BOOL)getTuringMessageOnlineWithPostRule:(id)arg1 withStubbingSession:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)fetchTuringMessageTicket:(id /* block */)arg1;
- (void)markTuringMessageDidPostWithError:(id)arg1;
- (BOOL)canPostTuringMessage;
- (void)cleanupTuringMessageSettings;
- (void)setDisablesPrivacySensitiveData:(BOOL)arg1;
- (BOOL)disablesPrivacySensitiveData;
- (void)blockPrivacySensitiveData:(BOOL)arg1 lowPerformanceData:(BOOL)arg2;
- (id)loadCurrentTuringMessageConfigForRule:(id)arg1;
- (BOOL)currentTuringMessageConfigIsValidForRule:(id)arg1;
- (id)loadCurrentTuringMessageIfNotExpiredForRule:(id)arg1;
- (BOOL)saveTuringMessasgeConfig:(id)arg1 forRule:(id)arg2;
- (void)applyTuringMessageConfig:(id)arg1 forRule:(id)arg2;
- (BOOL)reloadTuringMessageConfigIfNeededWithCompletionHandler:(id /* block */)arg1;
- (BOOL)getTuringMessageConfigWithPostRule:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)getTuringMessageConfigOnlineWithPostRule:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)markFlexableTuringMessageServingForResponse:(id)arg1;
- (double)getFlexableTuringMessageServingInterval;
- (double)nextIntervalOfAutoQueryTuringMessage;
- (void)didReceiveBecomeActiveNotification:(id)arg1;
- (void)didReceiveResignActiveNotification:(id)arg1;
- (id)innerService;
- (void)setInnerService:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)temporaryTasks;
- (void)setTemporaryTasks:(id)arg1;
- (BOOL)messageTicketServiceAlreadyStarted;
- (void)setMessageTicketServiceAlreadyStarted:(BOOL)arg1;
- (id)messageTicketServiceUserID;
- (void)setMessageTicketServiceUserID:(id)arg1;
- (id)messageTokenServiceTimer;
- (void)setMessageTokenServiceTimer:(id)arg1;
- (id)cachedMessageTicket;
- (void)setCachedMessageTicket:(id)arg1;
- (id)messageTokenQueryLock;
- (void)setMessageTokenQueryLock:(id)arg1;
- (id)messageTokenQueryQueue;
- (void)setMessageTokenQueryQueue:(id)arg1;
- (id)turingMessageOnQueueCounterLock;
- (void)setTuringMessageOnQueueCounterLock:(id)arg1;
- (unsigned long long)turingMessageOnQueueCounter;
- (void)setTuringMessageOnQueueCounter:(unsigned long long)arg1;
- (id)cachedDeviceRiskMessage;
- (void)setCachedDeviceRiskMessage:(id)arg1;
- (id)riskMessageQueryQueue;
- (void)setRiskMessageQueryQueue:(id)arg1;
- (id)turingMessageServicePostRule;
- (void)setTuringMessageServicePostRule:(id)arg1;
- (id)blockedTuringMessageConfig;
- (void)setBlockedTuringMessageConfig:(id)arg1;
- (void).cxx_destruct;
@end
