@interface WCPayOverseaMainWalletGrayViewHeader : UICollectionReusableView
{
    UIView * _m_coverView; // +0x8
    UIImageView * _m_logoView; // +0x10
    WCPayNoticeBannerView * _m_noticeBannerView; // +0x18
    WCPayOverseaIBGGetWalletCgiCache * _m_walletResp; // +0x20
    id <WCPayNoticeBannerViewDelegate> _m_noticeDelegate; // +0x28
}
- (void)updateWalletResp:(id)arg1 noticeDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)updateCoverView;
- (void)updateBannerView;
- (id)utf8String:(id)arg1;
- (void)updateLogoView;
- (id)contentAccessbilityLabel;
- (id)m_coverView;
- (void)setM_coverView:(id)arg1;
- (id)m_logoView;
- (void)setM_logoView:(id)arg1;
- (id)m_noticeBannerView;
- (void)setM_noticeBannerView:(id)arg1;
- (id)m_walletResp;
- (void)setM_walletResp:(id)arg1;
- (id)m_noticeDelegate;
- (void)setM_noticeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
