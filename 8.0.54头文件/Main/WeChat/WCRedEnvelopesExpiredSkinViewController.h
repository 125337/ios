@interface WCRedEnvelopesExpiredSkinViewController : WCRedEnvelopesBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, WCRedEnvelopesReceiveHomeViewDelegate>
{
    WCRedEnvelopesReceiveHomeView * introView; // +0x88
    BOOL _viewDidBack; // +0x90
    unsigned int _cellHeight; // +0x94
    id <WCRedEnvelopesExpiredSkinViewControllerDelegate> _m_delegate; // +0x98
    UICollectionView * _m_collectionView; // +0xa0
    UICollectionViewFlowLayout * _m_flowLayout; // +0xa8
    NSMutableDictionary * _m_cellIdentifierDict; // +0xb0
    WCRedEnvelopesExpiredSkinViewControllerFooter * _footerView; // +0xb8
    WCRedEnvelopesAtmospherePagView * _atmospherePagView; // +0xc0
}
- (id)m_cellIdentifierDict;
- (void)viewDidLoad;
- (void)setResponseData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)updateNavigationbarItem;
- (void)onBack;
- (void)refreshViewWithData:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)updateViewData;
- (void)updateCollectionView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)getNextPage:(id)arg1;
- (id)filterServerResponse:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)isShowLimitedWording;
- (id)redEnvelopesBaseInfoDict;
- (void)onTapCell:(id)arg1;
- (BOOL)shouldShowAtmospherePagView;
- (void)onLongPressCell:(id)arg1;
- (id)getData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteHbEnvelopSource:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)closeIntroView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_collectionView;
- (void)setM_collectionView:(id)arg1;
- (id)m_flowLayout;
- (void)setM_flowLayout:(id)arg1;
- (void)setM_cellIdentifierDict:(id)arg1;
- (BOOL)viewDidBack;
- (void)setViewDidBack:(BOOL)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (unsigned int)cellHeight;
- (void)setCellHeight:(unsigned int)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (void).cxx_destruct;
@end

