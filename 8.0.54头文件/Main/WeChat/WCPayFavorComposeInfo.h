@interface WCPayFavorComposeInfo : NSObject
{
    NSString * m_nFavorComposeid; // +0x8
    unsigned long long m_uiTotalFavorAmount; // +0x10
    unsigned long long m_uiAfterFavorTradeAmount; // +0x18
    NSArray * m_arrFavItemList; // +0x20
    unsigned long long m_uiShowFavorAmount; // +0x28
    unsigned long long m_uiInvariableFavorAmount; // +0x30
    BOOL m_bIsVariableFavor; // +0x38
    NSString * m_nsInvariableFavorDesc; // +0x40
    NSString * m_nsVariableFavorDesc; // +0x48
}
- (id)m_arrFavItemList;
- (void)setM_arrFavItemList:(id)arg1;
- (id)m_nFavorComposeid;
- (void)setM_nFavorComposeid:(id)arg1;
- (unsigned long long)m_uiAfterFavorTradeAmount;
- (void)setM_uiAfterFavorTradeAmount:(unsigned long long)arg1;
- (unsigned long long)m_uiTotalFavorAmount;
- (void)setM_uiTotalFavorAmount:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end

