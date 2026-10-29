@interface WAAuthorizeCardSession : WAAgentAuthCardSession
{
    WAAuthorizeSheetInfo * _sheetInfo; // +0x8
    NSString * _scope; // +0x10
    id <WAAuthorizeDelegate> _authDelegate; // +0x18
    WAUserAuthorizeLogic * _authLogic; // +0x20
}
+ (id)replaySessionFromSnapshot:(id)arg1 appId:(id)arg2;
- (id)initWithSheetInfo:(id)arg1 appId:(id)arg2 scope:(id)arg3 delegate:(id)arg4 logic:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 sheetInfo:(id)arg2 appId:(id)arg3 scope:(id)arg4 delegate:(id)arg5 logic:(id)arg6;
- (BOOL)acceptWaitsForCGI;
- (id)buildResultInfoWithExtra:(id)arg1;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (id)buildUserInputForm;
- (id)buildAuthCardData;
- (id)buildFlutterCardData;
- (id)buildSnapshot;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)authDelegate;
- (void)setAuthDelegate:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end
