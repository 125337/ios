@interface WCPayFetchChargeShowInfo : NSObject
{
    unsigned int _m_id; // +0x8
    WCPayFetchChargeShowInfoContent * _show_info; // +0x10
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (unsigned int)m_id;
- (void)setM_id:(unsigned int)arg1;
- (id)show_info;
- (void)setShow_info:(id)arg1;
- (void).cxx_destruct;
@end
