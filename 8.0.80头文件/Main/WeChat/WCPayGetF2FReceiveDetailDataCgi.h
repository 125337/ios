@interface WCPayGetF2FReceiveDetailDataCgi : WCPayBaseTenPayCgi
{
    unsigned int _maxRecordPerTime; // +0x8
    unsigned long long _fromTimeStamp; // +0x10
    unsigned long long _timeFormat; // +0x18
    NSString * _lastBillID; // +0x20
    id <WCPayGetF2FReceiveDetailDataCgiDelegate> _cgiDelegate; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (unsigned long long)fromTimeStamp;
- (void)setFromTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeFormat;
- (void)setTimeFormat:(unsigned long long)arg1;
- (id)lastBillID;
- (void)setLastBillID:(id)arg1;
- (unsigned int)maxRecordPerTime;
- (void)setMaxRecordPerTime:(unsigned int)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
