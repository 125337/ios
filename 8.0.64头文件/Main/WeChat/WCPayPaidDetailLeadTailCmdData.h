@interface WCPayPaidDetailLeadTailCmdData : NSObject
{
    NSString * _busi_param; // +0x8
    NSString * _trans_id; // +0x10
    NSString * _mmpay_mkt_sign; // +0x18
}
- (id)busi_param;
- (void)setBusi_param:(id)arg1;
- (id)trans_id;
- (void)setTrans_id:(id)arg1;
- (id)mmpay_mkt_sign;
- (void)setMmpay_mkt_sign:(id)arg1;
- (void).cxx_destruct;
@end
