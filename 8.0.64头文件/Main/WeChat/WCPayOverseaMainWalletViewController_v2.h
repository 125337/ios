@interface WCPayOverseaMainWalletViewController_v2 : WCBizBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCPayOverseaPayFunctionListCgiDelegate, WCPayOverseaIBGGetWalletCgiDelegate, WCActionSheetDelegate, WCPayNoticeBannerViewDelegate, MMWebViewDelegate>
{
    BOOL _m_hasShownKeyInfo; // +0x88
    BOOL _m_disableResetAccessibilityFocus; // +0x89
    unsigned int _m_walletRegion; // +0x8c
    unsigned int _m_lastWalletCgiRequestTime; // +0x90
    WCPayOverseaPayFunctionListCgi_v2 * _m_payFunctionCgi; // +0x98
    WCPayOverseaIBGGetWalletCgi * _m_ibgGetWalletCgi; // +0xa0
    UICollectionView * _m_collectionView; // +0xa8
    WCBizLoadingView * _m_bizLoadingView; // +0xb0
    WCPayOverseaMainWalletDataSource * _m_dataSource; // +0xb8
    WCPayOverseaPayFunctionListRespObject * _m_payFunctionListRespObject; // +0xc0
    WCPayOverseaIBGGetWalletCgiCache * _m_walletResp; // +0xc8
    WCPayOverseaReadActivityList * _m_readActivityList; // +0xd0
    MMWebViewController * _m_userKeyInfoWebViewController; // +0xd8
    WCPayComplianceHalfPage * _m_complianceHalfPage; // +0xe0
}
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)updateViewData;
- (void)updateTips;
- (void)updateBizLoadingView;
- (void)updateTitle;
- (void)updateRightNavigationItem;
- (void)onClickRightNavigationItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupAccessibilityFocus;
- (void)updateCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (unsigned long long)rowCount;
- (void)onWCPayOverseaPayFunctionCgiOkWithRespObject:(id)arg1;
- (void)onWCPayOverseaPayFunctionCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(id)arg1 withOriginRespObject:(id)arg2;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (id)utf8String:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCPayNoticeBannerView:(id)arg1 clickWithUrl:(id)arg2;
- (id)urlWithToken:(id)arg1;
- (void)reportClickOnUrl:(id)arg1 funcid:(unsigned int)arg2;
- (void)reportGrayItemClickOnUrl:(id)arg1;
- (id)m_payFunctionCgi;
- (void)setM_payFunctionCgi:(id)arg1;
- (id)m_ibgGetWalletCgi;
- (void)setM_ibgGetWalletCgi:(id)arg1;
- (id)m_collectionView;
- (void)setM_collectionView:(id)arg1;
- (id)m_bizLoadingView;
- (void)setM_bizLoadingView:(id)arg1;
- (id)m_dataSource;
- (void)setM_dataSource:(id)arg1;
- (id)m_payFunctionListRespObject;
- (void)setM_payFunctionListRespObject:(id)arg1;
- (id)m_walletResp;
- (void)setM_walletResp:(id)arg1;
- (id)m_readActivityList;
- (void)setM_readActivityList:(id)arg1;
- (unsigned int)m_walletRegion;
- (void)setM_walletRegion:(unsigned int)arg1;
- (unsigned int)m_lastWalletCgiRequestTime;
- (void)setM_lastWalletCgiRequestTime:(unsigned int)arg1;
- (id)m_userKeyInfoWebViewController;
- (void)setM_userKeyInfoWebViewController:(id)arg1;
- (BOOL)m_hasShownKeyInfo;
- (void)setM_hasShownKeyInfo:(BOOL)arg1;
- (BOOL)m_disableResetAccessibilityFocus;
- (void)setM_disableResetAccessibilityFocus:(BOOL)arg1;
- (id)m_complianceHalfPage;
- (void)setM_complianceHalfPage:(id)arg1;
- (void).cxx_destruct;
@end
