@interface CBTWeAppAuthAutoPhoneCardRequest : NSObject
{
    BOOL _hasPrepared; // +0x8
    unsigned int _businessId; // +0xc
    NSString * _subDesc; // +0x10
    NSString * _failureReason; // +0x18
    NSString * _mobile; // +0x20
}
- (id)initWithConfig:(id)arg1;
- (id)prepareSession;
- (BOOL)refreshBoundMobile;
- (void)requestMobileTicketWithCompletion:(id /* block */)arg1;
- (id)subDesc;
- (void)setSubDesc:(id)arg1;
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (id)failureReason;
- (void)setFailureReason:(id)arg1;
- (BOOL)hasPrepared;
- (void)setHasPrepared:(BOOL)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (void).cxx_destruct;
@end
