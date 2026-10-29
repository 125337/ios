@interface WCPayOverseaBaseCgi : NSObject <PBMessageObserverDelegate>
{
    id <WCPayOverseaBaseCgiDelegate> _m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)startRequestWithCgiId:(unsigned int)arg1 Data:(id)arg2;
- (void)startNotNotifyRequstWithCgiId:(unsigned int)arg1 Data:(id)arg2;
- (void)startRequestWithCgiId:(unsigned int)arg1 Data:(id)arg2 isNeedNotify:(BOOL)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callOkDelegateWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
