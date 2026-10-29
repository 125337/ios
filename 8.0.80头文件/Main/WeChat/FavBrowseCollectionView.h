@interface FavBrowseCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MMRefreshTableFooterDelegate>
{
    map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected; // +0x8
    unsigned long long m_colNum; // +0x20
    double m_margin; // +0x28
    CGSize m_itemSize; // +0x30
    double m_lastLayoutWidth; // +0x40
    UIEdgeInsets m_appliedSafeAreaInset; // +0x48
    BOOL m_squareThumbFullAsync; // +0x68
    BOOL _m_showCheckMark; // +0x69
    BOOL _m_hideSelectAllSection; // +0x6a
    BOOL _m_bNotMainTable; // +0x6b
    BOOL _m_enableSwipeMultiSelect; // +0x6c
    BOOL _usesNewFavCheckBoxStyle; // +0x6d
    BOOL _useNewFastLoadImage; // +0x6e
    id <FavBrowseCollectionViewDelegate> _m_fastBrowseViewDelegate; // +0x70
    long long _m_style; // +0x78
    UICollectionView * _collectionView; // +0x80
    UICollectionViewFlowLayout * _flowLayout; // +0x88
    SimpleImgInfo * _m_curImgInfo; // +0x90
    NSMutableArray * _m_arrImgInfo; // +0x98
    NSMutableDictionary * _m_dicSectionTitle; // +0xa0
    NSMutableDictionary * _m_dicMsgsByTitle; // +0xa8
    NSMutableDictionary * _m_dicWeakMedia; // +0xb0
    WCTimeLineFooterView * _m_nextLoadingView; // +0xb8
    WCTimeLineFooterView * _m_preLoadingView; // +0xc0
    UIView * _m_footerView; // +0xc8
    UILabel * _m_noImageTip; // +0xd0
    double _m_headLeftMargin; // +0xd8
    UIColor * _m_headTitleColor; // +0xe0
    double _m_scrollOffset; // +0xe8
}
- (void)dealloc;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 style:(long long)arg3;
- (void)initData;
- (void)initCollectionView;
- (void)initNoImageTip;
- (void)rebuildMsgData;
- (void)reloadData;
- (void)refreshVisibleFavThumbsForLocalOriginalIfNeeded;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadVisibleSquareThumbImages;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onClickMsgSquareThumb:(id)arg1;
- (void)onLongPressMsgSquareThumb:(id)arg1;
- (BOOL)onSelectMessage:(id)arg1;
- (id)getSelectedMessages;
- (long long)hasSelectedMessagesCount;
- (void)setImgInfoAsSelected:(id)arg1;
- (void)selectAllMessages;
- (void)unSelectAllMessages;
- (void)exitMultiSelectMode;
- (void)exitMultiSelectModeWithoutReload;
- (void)enterMultiSelectModeWithoutReload;
- (id)getMsgImageSquareThumbViewWithImgInfo:(id)arg1;
- (void)updateGridMetricsWithWidth:(double)arg1;
- (void)applyGridMetricsToFlowLayout;
- (void)syncSafeAreaContentInset;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)onTransitionToNewSize;
- (void)setTableViewContentInset:(UIEdgeInsets)arg1;
- (void)updatePreMore:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)updateLoading:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (id)getFooterView;
- (void)setM_showCheckMark:(BOOL)arg1;
- (void)setM_scrollOffset:(double)arg1;
- (void)setM_enableSwipeMultiSelect:(BOOL)arg1;
- (id)m_fastBrowseViewDelegate;
- (void)setM_fastBrowseViewDelegate:(id)arg1;
- (long long)m_style;
- (void)setM_style:(long long)arg1;
- (BOOL)m_showCheckMark;
- (BOOL)m_hideSelectAllSection;
- (void)setM_hideSelectAllSection:(BOOL)arg1;
- (BOOL)m_bNotMainTable;
- (void)setM_bNotMainTable:(BOOL)arg1;
- (BOOL)m_enableSwipeMultiSelect;
- (BOOL)usesNewFavCheckBoxStyle;
- (void)setUsesNewFavCheckBoxStyle:(BOOL)arg1;
- (BOOL)useNewFastLoadImage;
- (void)setUseNewFastLoadImage:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)m_curImgInfo;
- (void)setM_curImgInfo:(id)arg1;
- (id)m_arrImgInfo;
- (void)setM_arrImgInfo:(id)arg1;
- (id)m_dicSectionTitle;
- (void)setM_dicSectionTitle:(id)arg1;
- (id)m_dicMsgsByTitle;
- (void)setM_dicMsgsByTitle:(id)arg1;
- (id)m_dicWeakMedia;
- (void)setM_dicWeakMedia:(id)arg1;
- (id)m_nextLoadingView;
- (void)setM_nextLoadingView:(id)arg1;
- (id)m_preLoadingView;
- (void)setM_preLoadingView:(id)arg1;
- (id)m_footerView;
- (void)setM_footerView:(id)arg1;
- (id)m_noImageTip;
- (void)setM_noImageTip:(id)arg1;
- (double)m_headLeftMargin;
- (void)setM_headLeftMargin:(double)arg1;
- (id)m_headTitleColor;
- (void)setM_headTitleColor:(id)arg1;
- (double)m_scrollOffset;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
