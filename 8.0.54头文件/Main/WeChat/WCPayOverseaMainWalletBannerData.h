@interface WCPayOverseaMainWalletBannerData : WCPayOverseaMainWalletData
{
    WCPayOverseaIBGGetWalletCgiCache * _m_walletResp; // +0x8
    id <WCPayNoticeBannerViewDelegate> _m_noticeDelegate; // +0x10
}
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)totalHeight;
- (double)caluateDynamicCellHeight:(id)arg1;
- (float)headerViewHeight:(id)arg1;
- (id)m_walletResp;
- (void)setM_walletResp:(id)arg1;
- (id)m_noticeDelegate;
- (void)setM_noticeDelegate:(id)arg1;
- (void).cxx_destruct;
@end

