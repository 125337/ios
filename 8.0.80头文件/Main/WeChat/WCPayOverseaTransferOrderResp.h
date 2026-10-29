@interface WCPayOverseaTransferOrderResp : NSObject
{
    int _m_transferNum; // +0x8
    int _m_transferType; // +0xc
    NSString * _m_payUrl; // +0x10
    NSString * _m_tradeUrl; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (id)m_payUrl;
- (void)setM_payUrl:(id)arg1;
- (id)m_tradeUrl;
- (void)setM_tradeUrl:(id)arg1;
- (int)m_transferNum;
- (void)setM_transferNum:(int)arg1;
- (int)m_transferType;
- (void)setM_transferType:(int)arg1;
- (void).cxx_destruct;
@end
