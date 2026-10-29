@interface WCAdGetCouponResultModel : WCAdChannelReportExtendInfoModel
{
    int _source; // +0x8
    int _actionType; // +0xc
    NSString * _appId; // +0x10
    NSString * _stockId; // +0x18
    long long _result; // +0x20
    NSString * _msg; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)stockId;
- (void)setStockId:(id)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (void).cxx_destruct;
@end

