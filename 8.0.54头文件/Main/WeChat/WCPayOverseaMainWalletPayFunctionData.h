@interface WCPayOverseaMainWalletPayFunctionData : WCPayOverseaMainWalletData
{
    BOOL _m_hasFooterView; // +0x8
    BOOL _m_rightTopNew; // +0x9
    NSArray * _m_functionList; // +0x10
    WCPayOverseaTypeInfoObject * _m_typeInfo; // +0x18
    WCPayOverseaReadActivityList * _m_readList; // +0x20
    NSArray * _m_walletRegionDescArray; // +0x28
    double _m_currentTotalHeight; // +0x30
    unsigned long long _m_rowCount; // +0x38
}
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)caluateDynamicCellHeight:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)footerViewHeight;
- (id)totalRegionDesc;
- (unsigned long long)rowCount;
- (double)totalHeight;
- (id)m_functionList;
- (void)setM_functionList:(id)arg1;
- (id)m_typeInfo;
- (void)setM_typeInfo:(id)arg1;
- (id)m_readList;
- (void)setM_readList:(id)arg1;
- (id)m_walletRegionDescArray;
- (void)setM_walletRegionDescArray:(id)arg1;
- (BOOL)m_hasFooterView;
- (void)setM_hasFooterView:(BOOL)arg1;
- (double)m_currentTotalHeight;
- (void)setM_currentTotalHeight:(double)arg1;
- (unsigned long long)m_rowCount;
- (void)setM_rowCount:(unsigned long long)arg1;
- (BOOL)m_rightTopNew;
- (void)setM_rightTopNew:(BOOL)arg1;
- (void).cxx_destruct;
@end

