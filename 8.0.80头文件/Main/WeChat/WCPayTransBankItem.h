@interface WCPayTransBankItem : MMObject <IWCPaySelecBankItem>
{
    unsigned int _m_uiBankFlag; // +0x8
    unsigned int _m_uiChargeFee; // +0xc
    NSString * _m_nsBankCardType; // +0x10
    NSString * _m_nsBankName; // +0x18
    NSString * _m_nsBankImageUrl; // +0x20
    NSString * _m_nsMaintenanceText; // +0x28
    NSString * _m_nsMaintenanceColor; // +0x30
    NSString * _m_nsMaintenanceAlertTitle; // +0x38
    NSString * _m_feeRateExplain; // +0x40
    unsigned long long _m_minPondage; // +0x48
    NSString * _m_nsPinYin; // +0x50
    NSArray * _m_enterTimeList; // +0x58
}
- (id)initWithBankCardElem:(id)arg1;
- (BOOL)isUnderMaintenance;
- (id)bankCardType;
- (id)bankName;
- (id)bankIconUrl;
- (id)pinYin;
- (id)m_nsBankCardType;
- (void)setM_nsBankCardType:(id)arg1;
- (id)m_nsBankName;
- (void)setM_nsBankName:(id)arg1;
- (id)m_nsBankImageUrl;
- (void)setM_nsBankImageUrl:(id)arg1;
- (unsigned int)m_uiBankFlag;
- (void)setM_uiBankFlag:(unsigned int)arg1;
- (unsigned int)m_uiChargeFee;
- (void)setM_uiChargeFee:(unsigned int)arg1;
- (id)m_nsMaintenanceText;
- (void)setM_nsMaintenanceText:(id)arg1;
- (id)m_nsMaintenanceColor;
- (void)setM_nsMaintenanceColor:(id)arg1;
- (id)m_nsMaintenanceAlertTitle;
- (void)setM_nsMaintenanceAlertTitle:(id)arg1;
- (id)m_feeRateExplain;
- (void)setM_feeRateExplain:(id)arg1;
- (unsigned long long)m_minPondage;
- (void)setM_minPondage:(unsigned long long)arg1;
- (id)m_nsPinYin;
- (void)setM_nsPinYin:(id)arg1;
- (id)m_enterTimeList;
- (void)setM_enterTimeList:(id)arg1;
- (void).cxx_destruct;
@end
