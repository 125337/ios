@interface WASubscriptionMessageLogic : MMObject <WASubscriptionMessagePageSheetDelegate, WAPageSheetDelegate>
{
    BOOL _fromAgentRuntime; // +0x8
    unsigned int _appType; // +0xc
    id <WASubscriptionMessageLogicDelegate> _delegate; // +0x10
    id <WASubscriptionMessageLogicDataSource> _dataSource; // +0x18
    NSArray * _templateIDArray; // +0x20
    NSString * _username; // +0x28
    NSString * _appid; // +0x30
    WASubscriptionMessageDataReporter * _dataReporter; // +0x38
    WASubscriptionMessagePageSheet * _pageSheet; // +0x40
    id /* block */ _agentCardConfirmCompletion; // +0x48
}
- (id)initWithTemplateIDArray:(id)arg1 username:(id)arg2 appid:(id)arg3 appType:(unsigned int)arg4;
- (id)getPageSheetContentView;
- (void)start;
- (void)sendListRequest;
- (void)sendSubscribeRequestWithViewModel:(id)arg1;
- (void)sendSubscribeRequestFromAgentCardWithViewModel:(id)arg1;
- (void)sendSubscribeRequestFromAgentCardWithViewModel:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelFromAgentCardWithReason:(id)arg1;
- (id /* block */)requestListByIDSucceessHandler;
- (id /* block */)requestListByIDFailHandler;
- (id /* block */)requestSubscribeSuccessHandler;
- (id /* block */)requestSubscribeFailHandler;
- (id)containerViewController;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(BOOL)arg2 cancel:(BOOL)arg3 errorMessage:(id)arg4 errorCode:(long long)arg5;
- (void)callWillShowDelegate;
- (void)callWillDismissDelegate;
- (void)pageSheetWillShow:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authDecline:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)fromAgentRuntime;
- (void)setFromAgentRuntime:(BOOL)arg1;
- (id)templateIDArray;
- (void)setTemplateIDArray:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id /* block */)agentCardConfirmCompletion;
- (void)setAgentCardConfirmCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
