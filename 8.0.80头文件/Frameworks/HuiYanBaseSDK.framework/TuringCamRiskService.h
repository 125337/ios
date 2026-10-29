@interface TuringCamRiskService : NSObject
{
    TuringShield_YOUTU108138v208018 * _masterService; // +0x8
    NSString * _serviceName; // +0x10
    NSMutableDictionary * _tasks; // +0x18
    NSMutableDictionary * _context; // +0x20
}
+ (id)setupWithConfiguration:(id /* block */)arg1;
+ (id)sharedService;
+ (void)touchNetworking;
+ (void)setupTarsHTTPPostCallback:(id /* block */)arg1;
+ (BOOL)usesDebugServer;
+ (void)setUsesDebugServer:(BOOL)arg1;
+ (id)SDKInfo;
- (void)fetchRiskTokenUsingCache:(BOOL)arg1 WithCompletionHandler:(id /* block */)arg2;
- (void)fetchUniversalRiskMessageWithExtractUsingCachedMessage:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)activateSignatureToken:(id)arg1 error:(id *)arg2;
- (id)getSignatureForData:(id)arg1 error:(id *)arg2;
- (id)initForName:(id)arg1;
- (void)setupContext:(id)arg1;
- (id)taskForSceneID:(id)arg1;
- (void)detatchTask:(id)arg1;
- (id)masterService;
- (void)setMasterService:(id)arg1;
- (id)serviceName;
- (void)setServiceName:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
