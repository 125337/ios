@interface WCPayOverseaMainWalletFooterView : UICollectionReusableView
{
    NSArray * _m_walletRegionDescArray; // +0x8
    UIView * _m_coverView; // +0x10
    UILabel * _m_walletRegionDescLabel; // +0x18
}
- (void)layoutSubviews;
- (void)updateCoverView;
- (id)totalRegionDesc;
- (void)updateWalletRegionDescView;
- (id)m_walletRegionDescArray;
- (void)setM_walletRegionDescArray:(id)arg1;
- (id)m_coverView;
- (void)setM_coverView:(id)arg1;
- (id)m_walletRegionDescLabel;
- (void)setM_walletRegionDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

