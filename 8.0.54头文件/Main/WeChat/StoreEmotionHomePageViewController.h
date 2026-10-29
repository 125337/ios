@interface StoreEmotionHomePageViewController : MMUIViewController <EmoticonHalfScreenSendViewDelegate, MMStoreEmotionAllCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _hitExpt; // +0x68
    unsigned int _scene; // +0x6c
    unsigned long long _searchScene; // +0x70
    MMUIViewController * _contentViewController; // +0x78
    UICollectionView * _collectionView; // +0x80
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x88
    StoreEmotionHomePageLogic * _homePageLogic; // +0x90
    NSArray * _recordList; // +0x98
    EmojiInfoObj * _operatingEmojiInfoObj; // +0xa0
    long long _operatingEmojiScene; // +0xa8
    unsigned long long _sessionId; // +0xb0
    StoreEmoticonTopicProxyLogic * _topicVCPorxy; // +0xb8
    NSString * _reqId; // +0xc0
}
- (id)initWithEmotionScene:(unsigned int)arg1 AndParentViewController:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)clearSearchDisplayController;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)contentWidth;
- (void)jumpToBannerSet:(id)arg1 entrance:(long long)arg2;
- (id)topicVCPorxy;
- (void)reportStoreEmotionAndEmojiExpose;
- (void)reportEmojiCollectionExposeWithRecommendInfo:(id)arg1 entrance:(long long)arg2;
- (void)onStoreEmotionAllCellTapButton:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)contentViewController;
- (void)setContentViewController:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)homePageLogic;
- (void)setHomePageLogic:(id)arg1;
- (id)recordList;
- (void)setRecordList:(id)arg1;
- (id)operatingEmojiInfoObj;
- (void)setOperatingEmojiInfoObj:(id)arg1;
- (long long)operatingEmojiScene;
- (void)setOperatingEmojiScene:(long long)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (BOOL)hitExpt;
- (void)setHitExpt:(BOOL)arg1;
- (void)setTopicVCPorxy:(id)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (void).cxx_destruct;
@end

