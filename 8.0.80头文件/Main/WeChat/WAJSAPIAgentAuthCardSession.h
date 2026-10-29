@interface WAJSAPIAgentAuthCardSession : WAAuthorizeCardSession
{
    NSString * _agreedText; // +0x8
    NSString * _disagreedText; // +0x10
    id /* block */ _resultHandler; // +0x18
}
+ (id)replaySessionFromSnapshot:(id)arg1 appId:(id)arg2;
+ (id)stringInPayload:(id)arg1 forKey:(id)arg2;
- (id)initWithAppId:(id)arg1 title:(id)arg2 content:(id)arg3 confirmText:(id)arg4 cancelText:(id)arg5 agreedText:(id)arg6 disagreedText:(id)arg7 resultHandler:(id /* block */)arg8;
- (BOOL)acceptWaitsForCGI;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (id)tailTextForStatus:(unsigned long long)arg1;
- (id)buildAuthCardData;
- (id)buildFlutterCardData;
- (id)buildUserInputForm;
- (id)buildSnapshot;
- (id)buildSheetInfoWithTitle:(id)arg1 content:(id)arg2 confirmText:(id)arg3 cancelText:(id)arg4;
- (id)agreedText;
- (void)setAgreedText:(id)arg1;
- (id)disagreedText;
- (void)setDisagreedText:(id)arg1;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
