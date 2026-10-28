@interface RelatedEmoticonHalfScreenViewController : MMUIHalfScreenViewController <MMTipsViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonPreviewWindowViewControllerDelegate, WebSearchMgrDelegate>
{
    BOOL _hasAddObserver; // +0x70
    EmoticonRecommendMessageContext * _relatedEmoticonMessageContext; // +0x78
    NSString * _chatId; // +0x80
    CEmoticonWrap * _relatedEmoticonWrap; // +0x88
    WSSImilarPageModel * _similarEmoticonModel; // +0x90
    RelatedEmoticonReportObject * _reportObject; // +0x98
    UICollectionView * _collectionView; // +0xa0
    UICollectionViewFlowLayout * _collectionLayout; // +0xa8
    EmoticonPreviewWindowViewController * _emoticonPreview; // +0xb0
    UILongPressGestureRecognizer * _longPressGesture; // +0xb8
    NSIndexPath * _selectedIndexPath; // +0xc0
    CEmoticonWrap * _currentEmoticonWrap; // +0xc8
    CADisplayLink * _displayLink; // +0xd0
    MMUIActivityIndicatorView * _loadingIndicator; // +0xd8
    MMUILabel * _loadingTipLabel; // +0xe0
    RelatedEmoticonCollectionFooterView * _footerView; // +0xe8
    FTSWebSearchMgr * _webSearchMgr; // +0xf0
    unsigned long long _fetchStatus; // +0xf8
    NSString * _webSearchSessionId; // +0x100
    NSString * _lastRequestId; // +0x108
    NSString * _searchId; // +0x110
    long long _offset; // +0x118
    NSMutableArray * _similarItems; // +0x120
    double _itemWidth; // +0x128
    unsigned long long _itemCount; // +0x130
    double _itemSpacing; // +0x138
}
- (id)init;
- (id)initWithChatId:(id)arg1 relatedEmoticonWrap:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)initView;
- (void)initData;
- (void)fetchNextSimilarPage;
- (void)setupAnimateTransitionBlocks;
- (void)invalidateDisplayLink;
- (void)onContentViewTopChanged:(id)arg1;
- (double)animateContentViewTop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onLongPressToPreview:(id)arg1;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 frame:(CGRect)arg3 index:(unsigned long long)arg4;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)setSearchId:(id)arg1;
- (void)reportEmoticonExposure;
- (unsigned long long)maximumNumberOfItemsInRow;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)itemWidth;
- (double)itemSpacing;
- (unsigned long long)itemCount;
- (void)calItemWidthAndCount;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (id)relatedEmoticonMessageContext;
- (void)setRelatedEmoticonMessageContext:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)relatedEmoticonWrap;
- (void)setRelatedEmoticonWrap:(id)arg1;
- (id)similarEmoticonModel;
- (void)setSimilarEmoticonModel:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)emoticonPreview;
- (void)setEmoticonPreview:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)currentEmoticonWrap;
- (void)setCurrentEmoticonWrap:(id)arg1;
- (BOOL)hasAddObserver;
- (void)setHasAddObserver:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)loadingTipLabel;
- (void)setLoadingTipLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)webSearchMgr;
- (void)setWebSearchMgr:(id)arg1;
- (unsigned long long)fetchStatus;
- (void)setFetchStatus:(unsigned long long)arg1;
- (id)webSearchSessionId;
- (void)setWebSearchSessionId:(id)arg1;
- (id)lastRequestId;
- (void)setLastRequestId:(id)arg1;
- (id)searchId;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (id)similarItems;
- (void)setSimilarItems:(id)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setItemSpacing:(double)arg1;
- (void).cxx_destruct;
@end
