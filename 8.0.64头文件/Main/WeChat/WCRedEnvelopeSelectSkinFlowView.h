@interface WCRedEnvelopeSelectSkinFlowView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WCRedEnvelopeFlowViewDetailViewDelegate, WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate, WCActionSheetDelegate, WCRedEnvelopesCustomizeSkinEntryCellDelegate>
{
    WCRedEnvelopesControlData * m_data; // +0x8
    WCRedEnvelopeFlowViewDetailView * introView; // +0x10
    BOOL _bHasReportCanShowExpireEntry; // +0x18
    BOOL _isShowDetailView; // +0x19
    unsigned int _cellHeight; // +0x1c
    unsigned int _currentIndex; // +0x20
    UICollectionView * _m_collectionView; // +0x28
    UICollectionViewFlowLayout * _m_flowLayout; // +0x30
    NSMutableDictionary * _m_cellIdentifierDict; // +0x38
    NSMutableArray * _redEnvelopesList; // +0x40
    HbEnvelopSource * _currentSource; // +0x48
    id <WCRedEnvelopeSelectSkinFlowViewDelegate> _m_delegate; // +0x50
    WCRedEnvelopesExpiredSkinViewControllerFooter * _footerView; // +0x58
}
- (void)onWCRedEnvelopeFlowViewDetailViewGotoPreview:(id)arg1;
- (void)showDetailViewIfNeeded;
- (void)closeIntroView;
- (id)getData;
- (void)deleteHbEnvelopSource:(id)arg1;
- (id)m_cellIdentifierDict;
- (id)initWithFrame:(CGRect)arg1;
- (void)reloadData:(id)arg1;
- (void)refreshViewWithData;
- (void)scrollToCurrentIndex:(BOOL)arg1;
- (void)switchToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onWCRedEnvelopesCustomizeSkinEntryCellClickEntry:(id)arg1;
- (void)onWCRedEnvelopesExpiredSkinEntryCollectionViewCellClickEntry;
- (void)onLongPressCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapCustomizeCell:(id)arg1;
- (void)onTapExpiredCell:(id)arg1;
- (void)onTapCell:(id)arg1;
- (void)onWCRedEnvelopeFlowViewDetailViewCancel;
- (void)onWCRedEnvelopeFlowViewDetailViewSelect:(id)arg1;
- (id)m_collectionView;
- (void)setM_collectionView:(id)arg1;
- (id)m_flowLayout;
- (void)setM_flowLayout:(id)arg1;
- (void)setM_cellIdentifierDict:(id)arg1;
- (unsigned int)cellHeight;
- (void)setCellHeight:(unsigned int)arg1;
- (id)redEnvelopesList;
- (void)setRedEnvelopesList:(id)arg1;
- (unsigned int)currentIndex;
- (void)setCurrentIndex:(unsigned int)arg1;
- (BOOL)isShowDetailView;
- (void)setIsShowDetailView:(BOOL)arg1;
- (id)currentSource;
- (void)setCurrentSource:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
