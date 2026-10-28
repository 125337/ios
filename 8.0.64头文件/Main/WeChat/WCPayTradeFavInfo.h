@interface WCPayTradeFavInfo : NSObject
{
    unsigned long long m_uiTrandeAmount; // +0x8
    unsigned long long m_uiTotalFavAmount; // +0x10
    unsigned long long m_uiAfterFavorTradeAmount; // +0x18
    NSString * m_nsFavorCompseid; // +0x20
    NSArray * m_arrTradeFavItemList; // +0x28
    NSArray * m_arrWCPayFavorComposeInfo; // +0x30
    WCPayFavorComposeInfo * m_oSelectedFavorComposeInfo; // +0x38
    NSDictionary * m_dicItemSelectStatus; // +0x40
    BOOL m_bNeedShowedMoreFavInfo; // +0x48
    unsigned long long m_uiShowFavorAmount; // +0x50
    unsigned long long m_uiInvariableFavorAmount; // +0x58
    BOOL m_bIsVariableFavor; // +0x60
    NSString * m_nsInvariableFavorDesc; // +0x68
    NSString * m_nsVariableFavorDesc; // +0x70
    WCPayBankCardFavorInfo * _bank_card_info; // +0x78
    BankFavGuideForBindCard * _bank_fav_guide; // +0x80
}
- (unsigned long long)m_uiAfterFavorTradeAmount;
- (void)setM_uiAfterFavorTradeAmount:(unsigned long long)arg1;
- (unsigned long long)m_uiTotalFavAmount;
- (void)setM_uiTotalFavAmount:(unsigned long long)arg1;
- (unsigned long long)m_uiTrandeAmount;
- (void)setM_uiTrandeAmount:(unsigned long long)arg1;
- (id)m_arrTradeFavItemList;
- (void)setM_arrTradeFavItemList:(id)arg1;
- (id)m_nsFavorCompseid;
- (void)setM_nsFavorCompseid:(id)arg1;
- (id)m_arrWCPayFavorComposeInfo;
- (void)setM_arrWCPayFavorComposeInfo:(id)arg1;
- (id)m_oSelectedFavorComposeInfo;
- (void)setM_oSelectedFavorComposeInfo:(id)arg1;
- (BOOL)m_bNeedShowedMoreFavInfo;
- (void)setM_bNeedShowedMoreFavInfo:(BOOL)arg1;
- (unsigned long long)m_uiShowFavorAmount;
- (void)setM_uiShowFavorAmount:(unsigned long long)arg1;
- (unsigned long long)m_uiInvariableFavorAmount;
- (void)setM_uiInvariableFavorAmount:(unsigned long long)arg1;
- (BOOL)m_bIsVariableFavor;
- (void)setM_bIsVariableFavor:(BOOL)arg1;
- (id)m_nsInvariableFavorDesc;
- (void)setM_nsInvariableFavorDesc:(id)arg1;
- (id)m_nsVariableFavorDesc;
- (void)setM_nsVariableFavorDesc:(id)arg1;
- (id)bank_card_info;
- (void)setBank_card_info:(id)arg1;
- (id)bank_fav_guide;
- (void)setBank_fav_guide:(id)arg1;
- (void).cxx_destruct;
@end
