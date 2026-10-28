@interface WCPayMultiOrderDetail : NSObject
{
    unsigned int m_productNum; // +0x8
    long long m_totalFee; // +0x10
    NSArray * m_supportBankArray; // +0x18
    NSMutableArray * m_orderDetailArray; // +0x20
    BOOL m_isOpenProtocal; // +0x28
    BOOL m_bNeedBindCardToShowFavInfo; // +0x29
    NSString * m_nsDiscountWording; // +0x30
    NSString * m_nsFavorRuleWording; // +0x38
    WCPayTradeFavInfo * m_oWCPayTradeFavInfo; // +0x40
    unsigned long long m_assignUserInfoPay; // +0x48
    NSString * m_nsJumpToSafariUrl; // +0x50
    WCPayEntrustPayInfo * m_entrustPayInfo; // +0x58
    BOOL _m_isSupportBindCard; // +0x60
    BOOL _m_isSupportRetry; // +0x61
    BOOL _bIsUseNewPaidSuccPage; // +0x62
    int _is_use_show_info; // +0x64
    NSString * m_assignedUserName; // +0x68
    NSString * m_assignUserCreId; // +0x70
    long long m_assignUserCreType; // +0x78
    NSString * m_assignPayInfo; // +0x80
    NSString * m_payFlag; // +0x88
    NSString * _paySuccBtnWording; // +0x90
    WCPayBeforePayInfo * _m_beforePayInfo; // +0x98
    NSArray * _show_info; // +0xa0
    NSArray * _fetch_charge_show_info; // +0xa8
    unsigned long long _is_open_field_area; // +0xb0
    FieldAreaInfo * _field_area_info; // +0xb8
    NSString * _price_total_fee; // +0xc0
    NSString * _price_fee_type; // +0xc8
    NSString * _price_fee_symbol; // +0xd0
    NSString * _settlement_fee; // +0xd8
    NSString * _settlement_type; // +0xe0
    NSString * _settlement_symbol; // +0xe8
    WCPaySimpleCashierInfo * _simple_cashier_info; // +0xf0
}
- (unsigned int)m_productNum;
- (void)setM_productNum:(unsigned int)arg1;
- (long long)m_totalFee;
- (void)setM_totalFee:(long long)arg1;
- (id)m_supportBankArray;
- (void)setM_supportBankArray:(id)arg1;
- (id)m_orderDetailArray;
- (void)setM_orderDetailArray:(id)arg1;
- (BOOL)m_isOpenProtocal;
- (void)setM_isOpenProtocal:(BOOL)arg1;
- (id)m_oWCPayTradeFavInfo;
- (void)setM_oWCPayTradeFavInfo:(id)arg1;
- (BOOL)m_bNeedBindCardToShowFavInfo;
- (void)setM_bNeedBindCardToShowFavInfo:(BOOL)arg1;
- (unsigned long long)m_assignUserInfoPay;
- (void)setM_assignUserInfoPay:(unsigned long long)arg1;
- (id)m_assignedUserName;
- (void)setM_assignedUserName:(id)arg1;
- (id)m_assignUserCreId;
- (void)setM_assignUserCreId:(id)arg1;
- (long long)m_assignUserCreType;
- (void)setM_assignUserCreType:(long long)arg1;
- (id)m_assignPayInfo;
- (void)setM_assignPayInfo:(id)arg1;
- (id)m_nsJumpToSafariUrl;
- (void)setM_nsJumpToSafariUrl:(id)arg1;
- (id)m_payFlag;
- (void)setM_payFlag:(id)arg1;
- (id)m_nsDiscountWording;
- (void)setM_nsDiscountWording:(id)arg1;
- (id)m_nsFavorRuleWording;
- (void)setM_nsFavorRuleWording:(id)arg1;
- (id)m_entrustPayInfo;
- (void)setM_entrustPayInfo:(id)arg1;
- (BOOL)m_isSupportBindCard;
- (void)setM_isSupportBindCard:(BOOL)arg1;
- (BOOL)m_isSupportRetry;
- (void)setM_isSupportRetry:(BOOL)arg1;
- (id)paySuccBtnWording;
- (void)setPaySuccBtnWording:(id)arg1;
- (BOOL)bIsUseNewPaidSuccPage;
- (void)setBIsUseNewPaidSuccPage:(BOOL)arg1;
- (id)m_beforePayInfo;
- (void)setM_beforePayInfo:(id)arg1;
- (int)is_use_show_info;
- (void)setIs_use_show_info:(int)arg1;
- (id)show_info;
- (void)setShow_info:(id)arg1;
- (id)fetch_charge_show_info;
- (void)setFetch_charge_show_info:(id)arg1;
- (unsigned long long)is_open_field_area;
- (void)setIs_open_field_area:(unsigned long long)arg1;
- (id)field_area_info;
- (void)setField_area_info:(id)arg1;
- (id)price_total_fee;
- (void)setPrice_total_fee:(id)arg1;
- (id)price_fee_type;
- (void)setPrice_fee_type:(id)arg1;
- (id)price_fee_symbol;
- (void)setPrice_fee_symbol:(id)arg1;
- (id)settlement_fee;
- (void)setSettlement_fee:(id)arg1;
- (id)settlement_type;
- (void)setSettlement_type:(id)arg1;
- (id)settlement_symbol;
- (void)setSettlement_symbol:(id)arg1;
- (id)simple_cashier_info;
- (void)setSimple_cashier_info:(id)arg1;
- (void).cxx_destruct;
@end
