@interface ChatbotAutoPhoneBindPending : NSObject
{
    NSString * _requestId; // +0x8
    WCAccountBindPhoneControlLogic * _logic; // +0x10
    id /* block */ _result; // +0x18
    UIViewController * _presentingViewController; // +0x20
}
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id /* block */)result;
- (void)setResult:(id /* block */)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void).cxx_destruct;
@end
