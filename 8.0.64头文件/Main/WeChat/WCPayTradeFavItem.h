@interface WCPayTradeFavItem : NSObject
{
    unsigned int m_uiFavType; // +0x8
    unsigned int m_uiFavSubType; // +0xc
    unsigned long long m_uiFavProperty; // +0x10
    NSString * m_nsFavorTypeDesc; // +0x18
    NSString * m_nsFavID; // +0x20
    NSString * m_nsFavName; // +0x28
    NSString * m_nsFavDesc; // +0x30
    NSString * m_nsFavUsedManual; // +0x38
    NSString * m_nsFavUsedRemark; // +0x40
    BOOL m_bBankFav; // +0x48
    NSString * m_nsBankType; // +0x50
    NSString * m_nsBankName; // +0x58
    NSString * m_nsBankLogoUrl; // +0x60
    int m_enCurrentItemStatus; // +0x68
    NSArray * _bind_serial_list; // +0x70
}
- (BOOL)m_bBankFav;
- (void)setM_bBankFav:(BOOL)arg1;
- (id)m_nsFavID;
- (void)setM_nsFavID:(id)arg1;
- (unsigned long long)m_uiFavProperty;
- (void)setM_uiFavProperty:(unsigned long long)arg1;
- (unsigned int)m_uiFavSubType;
- (void)setM_uiFavSubType:(unsigned int)arg1;
- (unsigned int)m_uiFavType;
- (void)setM_uiFavType:(unsigned int)arg1;
- (id)m_nsBankType;
- (void)setM_nsBankType:(id)arg1;
- (id)m_nsFavDesc;
- (void)setM_nsFavDesc:(id)arg1;
- (id)m_nsFavName;
- (void)setM_nsFavName:(id)arg1;
- (id)m_nsFavorTypeDesc;
- (void)setM_nsFavorTypeDesc:(id)arg1;
- (id)m_nsFavUsedManual;
- (void)setM_nsFavUsedManual:(id)arg1;
- (id)m_nsFavUsedRemark;
- (void)setM_nsFavUsedRemark:(id)arg1;
- (int)m_enCurrentItemStatus;
- (void)setM_enCurrentItemStatus:(int)arg1;
- (id)m_nsBankName;
- (void)setM_nsBankName:(id)arg1;
- (id)m_nsBankLogoUrl;
- (void)setM_nsBankLogoUrl:(id)arg1;
- (id)bind_serial_list;
- (void)setBind_serial_list:(id)arg1;
- (void).cxx_destruct;
@end
