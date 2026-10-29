@interface MMAxAuthLogic : NSObject <PBMessageObserverDelegate>
{
    AxAuthSecResp * m_axAuthSecResp; // +0x8
    BOOL m_canRetry; // +0x10
    unsigned int m_no_response_retry_count; // +0x14
    unsigned int m_system_error_retry_count; // +0x18
    unsigned int m_server_busy_retry_count; // +0x1c
    BOOL _hasStarted; // +0x20
    unsigned int _axTicketExpireTimestamp; // +0x24
    int _axAuthRet; // +0x28
    unsigned int _eventId; // +0x2c
    id <MMAxAuthLogicDelegate> _delegate; // +0x30
}
- (id)initWithAxAuthSecResp:(id)arg1;
- (unsigned int)axAuthCgiId;
- (unsigned int)axBusinessType;
- (id)axAuthCgiUri;
- (id)axAuthDescription;
- (BOOL)isRequesting;
- (BOOL)startRequest;
- (void)failWithReason:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)axTicketExpireTimestamp;
- (void)setAxTicketExpireTimestamp:(unsigned int)arg1;
- (int)axAuthRet;
- (void)setAxAuthRet:(int)arg1;
- (BOOL)hasStarted;
- (void)setHasStarted:(BOOL)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
