@interface WCPayDeleteDigitalCertCgi : NSObject <PBMessageObserverDelegate>
{
    NSString * _m_crtNo; // +0x8
    id <WCPayDeleteDigitalCertCgiDelegate> _m_delegate; // +0x10
    WCPayIdKeyRegularReporter * _m_cgiReporter; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)callErrorDelegate;
- (void)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)localCertDeleteWithCertNo:(id)arg1;
- (id)m_crtNo;
- (void)setM_crtNo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cgiReporter;
- (void)setM_cgiReporter:(id)arg1;
- (void).cxx_destruct;
@end
