@interface WAFaceAuthCardSession : WAAuthorizeCardSession
{
    NSString * _jsapiName; // +0x8
    id /* block */ _jsapiHandler; // +0x10
    id /* block */ _failHandler; // +0x18
    NSDictionary * _pendingExtra; // +0x20
    id /* block */ _abortFailHandler; // +0x28
}
+ (id)replaySessionFromSnapshot:(id)arg1 appId:(id)arg2;
- (id)initWithAppId:(id)arg1 jsapiName:(id)arg2 confirmLogic:(id)arg3 jsapiHandler:(id /* block */)arg4 failHandler:(id /* block */)arg5;
- (BOOL)acceptWaitsForCGI;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (void)confirmAcceptFromJSAPISuccess;
- (void)abortFaceAuthWithReason:(id)arg1;
- (id)buildAuthCardData;
- (id)buildUserInputForm;
- (id)buildFlutterCardData;
- (id)buildSnapshot;
- (id)initReplayWithSheetInfo:(id)arg1 appId:(id)arg2 jsapiName:(id)arg3;
- (id)buildSheetInfoFromConfirmLogic:(id)arg1 appId:(id)arg2;
- (id)fallbackDisplayNameForAppId:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id /* block */)jsapiHandler;
- (void)setJsapiHandler:(id /* block */)arg1;
- (id /* block */)failHandler;
- (void)setFailHandler:(id /* block */)arg1;
- (id)pendingExtra;
- (void)setPendingExtra:(id)arg1;
- (id /* block */)abortFailHandler;
- (void)setAbortFailHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
