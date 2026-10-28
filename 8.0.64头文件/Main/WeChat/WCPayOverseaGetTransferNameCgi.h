@interface WCPayOverseaGetTransferNameCgi : NSObject <WCPayOverseaBaseCgiDelegate>
{
    id <WCPayOverseaGetTransferNameCgiDelegate> m_delegate; // +0x8
    WCPayOverseaBaseCgi * m_cgi; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithQRCodeUrl:(id)arg1;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cgi;
- (void)setM_cgi:(id)arg1;
- (void).cxx_destruct;
@end
