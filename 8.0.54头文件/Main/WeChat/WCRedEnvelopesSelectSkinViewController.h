@interface WCRedEnvelopesSelectSkinViewController : WCRedEnvelopesBaseViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, MMWebViewDelegate, WCRedEnvelopesSelectSkinCollectionViewCellDelegate, WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate, WCRedEnvelopesCustomizeSkinEntryCellDelegate, WCRedEnvelopeSelectSkinFlowViewDelegate>
{
    id <WCRedEnvelopesSelectSkinViewControllerDelegate> m_delegate; // +0x88
    BOOL m_bDidBack; // +0x90
    BOOL _hasReportScroll; // +0x91
    BOOL _beginDragging; // +0x92
    BOOL _isFirstLayout; // +0x93
    BOOL _hasTimeLimitPromotion; // +0x94
    BOOL _bHasReportCanShowExpireEntry; // +0x95
    BOOL _bHasReportShowExpireEntry; // +0x96
    BOOL _bIsSmallPicMode; // +0x97
    BOOL _isReddotExposureHasCount; // +0x98
    unsigned int _enterIndex; // +0x9c
    unsigned int _endIndex; // +0xa0
    unsigned int _enterTimestamp; // +0xa4
    WCRedEnvelopesReceiveHomeTemplateView * _templateView; // +0xa8
    UIScrollView * _m_contentScrollView; // +0xb0
    UICollectionView * _m_collectionView; // +0xb8
    HbEnvelopSource * _selectedResource; // +0xc0
    HbEnvelopSource * _currentSelectedResource; // +0xc8
    NSIndexPath * _selectedIndexPath; // +0xd0
    UILabel * _overtimeLabel; // +0xd8
    long long _selectedIndex; // +0xe0
    double _dragStartX; // +0xe8
    double _dragEndX; // +0xf0
    UILabel * _noSkinLabel; // +0xf8
    NSMutableArray * _m_selectSkinViewArr; // +0x100
    WCRedEnvelopesSelectSkinFlowLayout * _m_flowLayout; // +0x108
    NSMutableDictionary * _m_cellIdentifierDict; // +0x110
    UIButton * _m_exchangeBtn; // +0x118
    NSString * _enterCoverId; // +0x120
    NSString * _endCoverId; // +0x128
    UIButton * _m_useCoverBtn; // +0x130
    UIButton * _m_previewCoverBtn; // +0x138
    NSString * _promotionCoverId; // +0x140
    WCRedEnvelopeSelectSkinFlowView * _m_smallFlowView; // +0x148
    MMLiteAppViewController * _m_liteAppViewController; // +0x150
    WCRedEnvelopesSelectSkinRedDotInfo * _selectSkinPlazaNewRedDotInfo; // +0x158
    MMBadgeView * _rightBadgeView; // +0x160
    ContentReddotBubbleView * _m_contentReddotBubbleView; // +0x168
    UIView * _updateContentRightNaviBarView; // +0x170
}
- (id)selectSkinPlazaNewRedDotInfo;
- (id)m_cellIdentifierDict;
- (void)setDelegate:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)onTapUseCoverBtn;
- (void)onPreviewBtnTap;
- (void)checkAndUseTimeLimitPromoSuccess;
- (void)viewDidLoad;
- (void)setupBubbleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onTapReddotBubbleView;
- (unsigned int)reportRedDotType;
- (id)reportRedDotText;
- (void)redEnvChooseReport:(unsigned int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)hideContentReddotBubbleView;
- (void)refreshViewWithData:(id)arg1;
- (id)m_smallFlowView;
- (void)updateSmallFlowViewData;
- (void)refreshCollectionAndScrollToSelectedCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)filterServerResponse:(id)arg1;
- (void)checkTimeLimitPromotionForReport;
- (void)reportMakeFinderCoverEntryExposure;
- (void)scrollToSelectedCell;
- (void)updateViewData;
- (void)adjustContentHeight;
- (void)onClickExchageBtn;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)OnRightBarButtonAdd;
- (BOOL)shouldShowSelectSkinEntryPlazaNewRedDot;
- (id)updateContentReddotBarBtnCustomView;
- (id)redotBarButtonView;
- (void)updateNavigationBackground;
- (void)onClickNewExchangeBtn;
- (void)liteAppCreateStore;
- (void)updateTitleView2;
- (void)updateTitleView;
- (void)onClickChangeSelectView:(id)arg1;
- (void)saveCurrentViewMode:(BOOL)arg1;
- (BOOL)isCurrentSmallPicMode;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)m_contentScrollView;
- (void)onWCRedEnvelopeSelectSkinFlowViewClickExpiredEntry;
- (void)onWCRedEnvelopeSelectSkinFlowViewSelectHbResource:(id)arg1;
- (id)m_collectionView;
- (id)m_useCoverBtn;
- (id)m_previewCoverBtn;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onTapGusture:(id)arg1;
- (id)getData;
- (void)deleteHbEnvelopSource:(id)arg1;
- (void)onLongPressCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateDoneBtnStatus;
- (void)switchToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScroll:(CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onWCRedEnvelopesSelectSkinCollectionViewCellDeleteSkin:(id)arg1;
- (void)onWCRedEnvelopesExpiredSkinEntryCollectionViewCellClickEntry;
- (void)onWCRedEnvelopesCustomizeSkinEntryCellClickEntry:(id)arg1;
- (void)onWCRedEnvelopeSelectSkinFlowViewDeleteHbResource:(id)arg1;
- (void)closeIntroView;
- (void)onWCRedEnvelopeSelectSkinFlowViewGotoPreview:(id)arg1;
- (BOOL)hasReportScroll;
- (void)setHasReportScroll:(BOOL)arg1;
- (id)templateView;
- (void)setTemplateView:(id)arg1;
- (void)setM_contentScrollView:(id)arg1;
- (void)setM_collectionView:(id)arg1;
- (id)selectedResource;
- (void)setSelectedResource:(id)arg1;
- (id)currentSelectedResource;
- (void)setCurrentSelectedResource:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)overtimeLabel;
- (void)setOvertimeLabel:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (double)dragStartX;
- (void)setDragStartX:(double)arg1;
- (double)dragEndX;
- (void)setDragEndX:(double)arg1;
- (id)noSkinLabel;
- (void)setNoSkinLabel:(id)arg1;
- (BOOL)beginDragging;
- (void)setBeginDragging:(BOOL)arg1;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)arg1;
- (id)m_selectSkinViewArr;
- (void)setM_selectSkinViewArr:(id)arg1;
- (id)m_flowLayout;
- (void)setM_flowLayout:(id)arg1;
- (void)setM_cellIdentifierDict:(id)arg1;
- (id)m_exchangeBtn;
- (void)setM_exchangeBtn:(id)arg1;
- (unsigned int)enterIndex;
- (void)setEnterIndex:(unsigned int)arg1;
- (unsigned int)endIndex;
- (void)setEndIndex:(unsigned int)arg1;
- (id)enterCoverId;
- (void)setEnterCoverId:(id)arg1;
- (id)endCoverId;
- (void)setEndCoverId:(id)arg1;
- (void)setM_useCoverBtn:(id)arg1;
- (void)setM_previewCoverBtn:(id)arg1;
- (BOOL)hasTimeLimitPromotion;
- (void)setHasTimeLimitPromotion:(BOOL)arg1;
- (unsigned int)enterTimestamp;
- (void)setEnterTimestamp:(unsigned int)arg1;
- (id)promotionCoverId;
- (void)setPromotionCoverId:(id)arg1;
- (BOOL)bHasReportCanShowExpireEntry;
- (void)setBHasReportCanShowExpireEntry:(BOOL)arg1;
- (BOOL)bHasReportShowExpireEntry;
- (void)setBHasReportShowExpireEntry:(BOOL)arg1;
- (BOOL)bIsSmallPicMode;
- (void)setBIsSmallPicMode:(BOOL)arg1;
- (void)setM_smallFlowView:(id)arg1;
- (id)m_liteAppViewController;
- (void)setM_liteAppViewController:(id)arg1;
- (void)setSelectSkinPlazaNewRedDotInfo:(id)arg1;
- (id)rightBadgeView;
- (void)setRightBadgeView:(id)arg1;
- (BOOL)isReddotExposureHasCount;
- (void)setIsReddotExposureHasCount:(BOOL)arg1;
- (id)m_contentReddotBubbleView;
- (void)setM_contentReddotBubbleView:(id)arg1;
- (id)updateContentRightNaviBarView;
- (void)setUpdateContentRightNaviBarView:(id)arg1;
- (void).cxx_destruct;
@end

