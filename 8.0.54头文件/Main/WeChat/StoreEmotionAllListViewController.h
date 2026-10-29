@interface StoreEmotionAllListViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, StoreEmotionGetEmotionListCgiDelegate, StoreEmotionPageShareLogicDelegate>
{
    StoreEmotionAllListReportInfo * _reportInfo; // +0x68
    EmotionBannerSet * _bannerSet; // +0x70
    long long _extranceScene; // +0x78
    MMLoadMoreCollectionView * _collectionView; // +0x80
    UICollectionViewFlowLayout * _collectionLayout; // +0x88
    EmoticonLoadMoreFooterView * _loadingFooterView; // +0x90
    StoreEmotionGetEmotionListCgi * _getEmotionListCgi; // +0x98
    NSMutableArray * _storeItems; // +0xa0
    EmotionSetInfo * _emotionSetInfo; // +0xa8
    StoreEmotionPageShareLogic * _shareLogic; // +0xb0
    UIView * _loadingView; // +0xb8
    unsigned long long _forwardCount; // +0xc0
}
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (long long)pageScene;
- (void)initViews;
- (void)initData;
- (id)getEmotionListCgi;
- (void)setupRightBarButton;
- (void)setEmotionSetInfo:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (void)onOperate:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)bannerSet;
- (void)setBannerSet:(id)arg1;
- (long long)extranceScene;
- (void)setExtranceScene:(long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)loadingFooterView;
- (void)setLoadingFooterView:(id)arg1;
- (void)setGetEmotionListCgi:(id)arg1;
- (id)storeItems;
- (void)setStoreItems:(id)arg1;
- (id)emotionSetInfo;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

