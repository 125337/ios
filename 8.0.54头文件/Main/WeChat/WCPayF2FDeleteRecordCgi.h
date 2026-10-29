@interface WCPayF2FDeleteRecordCgi : WCPayBaseTenPayCgi
{
    NSString * _billID; // +0x8
    unsigned long long _timeStamp; // +0x10
    unsigned long long _timeFormat; // +0x18
    id <WCPayF2FDeleteRecordCgiDelegate> _cgiDelegate; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)billID;
- (void)setBillID:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeFormat;
- (void)setTimeFormat:(unsigned long long)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

