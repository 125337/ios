@interface WASubscribeMsgCardSession : WAAgentAuthCardSession
{
    WASubscriptionMessagePageSheetViewModel * _viewModel; // +0x8
    WASubscriptionMessageLogic * _logic; // +0x10
}
+ (id)replaySessionFromSnapshot:(id)arg1 appId:(id)arg2;
- (id)initWithViewModel:(id)arg1 appId:(id)arg2 logic:(id)arg3;
- (BOOL)acceptWaitsForCGI;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (id)buildUserInputForm;
- (id)buildAuthCardData;
- (id)buildFlutterCardData;
- (void)applyFlutterBusinessData:(id)arg1 forStatus:(unsigned long long)arg2;
- (id)buildSnapshot;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end
