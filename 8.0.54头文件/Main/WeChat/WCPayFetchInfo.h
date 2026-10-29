@interface WCPayFetchInfo : NSObject <NSCoding>
{
    BOOL _m_bShowCharge; // +0x8
    BOOL _m_bCalcCharge; // +0x9
    BOOL _m_bISFullFetchDirect; // +0xa
    unsigned int _m_uiRemainFee; // +0xc
    unsigned int _m_uiMinChargeFee; // +0x10
    NSString * _m_nsFetchChargeTitle; // +0x18
    NSString * _m_nsFetchChargeRemark; // +0x20
    NSArray * _m_arrAlertContent; // +0x28
    NSArray * _m_arrKey; // +0x30
    NSArray * _m_arrValue; // +0x38
    NSString * _card_list_wording_title; // +0x40
    NSString * _card_list_wording_content; // +0x48
    WCPayFetchQAInfo * _withdraw_sector; // +0x50
}
+ (id)fetchInfoOfJSONDic:(id)arg1;
+ (id)GenFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)m_nsFetchChargeTitle;
- (void)setM_nsFetchChargeTitle:(id)arg1;
- (id)m_nsFetchChargeRemark;
- (void)setM_nsFetchChargeRemark:(id)arg1;
- (id)m_arrAlertContent;
- (void)setM_arrAlertContent:(id)arg1;
- (id)m_arrKey;
- (void)setM_arrKey:(id)arg1;
- (id)m_arrValue;
- (void)setM_arrValue:(id)arg1;
- (BOOL)m_bShowCharge;
- (void)setM_bShowCharge:(BOOL)arg1;
- (BOOL)m_bCalcCharge;
- (void)setM_bCalcCharge:(BOOL)arg1;
- (unsigned int)m_uiRemainFee;
- (void)setM_uiRemainFee:(unsigned int)arg1;
- (unsigned int)m_uiMinChargeFee;
- (void)setM_uiMinChargeFee:(unsigned int)arg1;
- (BOOL)m_bISFullFetchDirect;
- (void)setM_bISFullFetchDirect:(BOOL)arg1;
- (id)card_list_wording_title;
- (void)setCard_list_wording_title:(id)arg1;
- (id)card_list_wording_content;
- (void)setCard_list_wording_content:(id)arg1;
- (id)withdraw_sector;
- (void)setWithdraw_sector:(id)arg1;
- (void).cxx_destruct;
@end

