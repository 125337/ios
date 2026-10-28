@interface WCPayApplyQrcodeCgi : WCPayBaseCgi
{
    id <WCPayApplyQrcodeCgiDelegate> _m_delegate; // +0x8
    NSData * _saveNotifyInfo; // +0x10
}
- (id)initWithDelegate:(id)arg1 saveNotifyInfo:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)saveNotifyInfo;
- (void)setSaveNotifyInfo:(id)arg1;
- (void).cxx_destruct;
@end
