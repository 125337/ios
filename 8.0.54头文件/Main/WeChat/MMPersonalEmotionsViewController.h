@interface MMPersonalEmotionsViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EmoticonStoreMgrExt, EmoticonBoughtListMgrExt, InfiniteLoopContainerViewDelegate, EmotionCollectionFooterViewDelegate, EmoticonRecommendMgrExt>
{
    UICollectionView * _collectionView; // +0x68
    UICollectionViewFlowLayout * _layout; // +0x70
    UIView * m_collectionHeaderView; // +0x78
    EmoticonCellLikeButton * m_designerEmojiEntranceView; // +0x80
    UIImageView * m_designerEmojiEntranceReddot; // +0x88
    InfiniteLoopContainerView * _bannerView; // +0x90
    EmotionCollectionFooterView * _footerView; // +0x98
    NSMutableArray * _storeItemArray; // +0xa0
    NSMutableArray * _storeAdsArray; // +0xa8
    unsigned int _scene; // +0xb0
    unsigned int _reqType; // +0xb4
    unsigned long long _sessionId; // +0xb8
    BOOL _isLoadedFromCache; // +0xc0
    unsigned int _topHotNum; // +0xc4
    MMTimer * _timer; // +0xc8
    UIView * _chartsContainerView; // +0xd0
    BOOL m_isOpenDesignerEmoji; // +0xd8
    UIViewController * m_contentsViewController; // +0xe0
    unsigned long long _searchScene; // +0xe8
    StoreEmoticonTopicProxyLogic * _topicVCPorxy; // +0xf0
}
- (id)init;
- (id)initWithEmotionScene:(unsigned int)arg1 AndParentViewController:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)clearSearchDisplayController;
- (void)stopBannerPageTimer;
- (void)initBannerPageTimer;
- (void)changeBannerToNextPage;
- (void)configViews;
- (void)configData;
- (void)configCollectionView;
- (void)configHeaderView;
- (void)configBanner;
- (void)configDesignerEmojiEntranceView;
- (void)reloadData;
- (void)reloadAdsFromMgr;
- (void)tryInitViewOfSearchController;
- (void)adjustContentInsetAndSearchBarMask;
- (void)clickEmotionCharts;
- (void)clickDesignerEmojiEntrance;
- (void)reportEmoticonStoreExposure;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupChartsContainerWithHeaderView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (CGSize)adjustedSizeForBanner;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (void)openPageForBannerSet:(id)arg1 IsFromBanner:(BOOL)arg2;
- (id)topicVCPorxy;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)OnEmoticonRecommendNewStateChangedForDesignerEmojiEntranceNew:(BOOL)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (void)setTopicVCPorxy:(id)arg1;
- (void).cxx_destruct;
@end

