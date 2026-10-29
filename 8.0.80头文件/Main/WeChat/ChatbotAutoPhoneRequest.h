@interface ChatbotAutoPhoneRequest : NSObject
{
    BOOL _ticketRequested; // +0x8
    NSString * _requestId; // +0x10
    NSString * _mobile; // +0x18
    id /* block */ _pendingTicketResult; // +0x20
}
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (BOOL)ticketRequested;
- (void)setTicketRequested:(BOOL)arg1;
- (id /* block */)pendingTicketResult;
- (void)setPendingTicketResult:(id /* block */)arg1;
- (void).cxx_destruct;
@end
