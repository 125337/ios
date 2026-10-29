@interface WCPayF2FGetReceiveHistoryCgi : WCPayBaseTenPayCgi
{
    unsigned int _maxItemPerTime; // +0x8
    unsigned int _svrRettryNum; // +0xc
    unsigned long long _fromTimeStamp; // +0x10
    unsigned long long _timeFormat; // +0x18
    unsigned long long _chooseFlag; // +0x20
    unsigned long long _loadMoreDirection; // +0x28
    id <WCPayF2FGetReceiveHistoryCgiDelegate> _cgiDelegate; // +0x30
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
- (unsigned long long)chooseFlag;
- (void)setChooseFlag:(unsigned long long)arg1;
- (unsigned long long)loadMoreDirection;
- (void)setLoadMoreDirection:(unsigned long long)arg1;
- (unsigned int)maxItemPerTime;
- (void)setMaxItemPerTime:(unsigned int)arg1;
- (unsigned int)svrRettryNum;
- (void)setSvrRettryNum:(unsigned int)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

