@interface WCPayOverseaTransferGetCurrencyCgiRespObject : NSObject
{
    int _m_currency; // +0x8
    NSString * _m_currencyUint; // +0x10
    NSString * _m_currencyWording; // +0x18
    NSString * _m_notice; // +0x20
    NSString * _m_noticeUrl; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (int)m_currency;
- (void)setM_currency:(int)arg1;
- (id)m_currencyUint;
- (void)setM_currencyUint:(id)arg1;
- (id)m_currencyWording;
- (void)setM_currencyWording:(id)arg1;
- (id)m_notice;
- (void)setM_notice:(id)arg1;
- (id)m_noticeUrl;
- (void)setM_noticeUrl:(id)arg1;
- (void).cxx_destruct;
@end

