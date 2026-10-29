@interface MMAxAuthLogic : NSObject <PBMessageObserverDelegate>
{
    AxAuthSecResp * m_axAuthSecResp; // +0x8
    BOOL m_canRetry; // +0x10
    unsigned int m_no_response_retry_count; // +0x14
    unsigned int m_system_error_retry_count; // +0x18
    unsigned int m_server_busy_retry_count; // +0x1c
    unsigned int _axTicketExpireTimestamp; // +0x20
    unsigned int _eventId; // +0x24
    id <MMAxAuthLogicDelegate> _delegate; // +0x28
}
- (id)initWithAxAuthSecResp:(id)arg1;
- (unsigned int)axAuthCgiId;
- (id)axAuthDescription;
- (BOOL)isRequesting;
- (BOOL)startRequest;
- (void)failWithReason:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)axTicketExpireTimestamp;
- (void)setAxTicketExpireTimestamp:(unsigned int)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

