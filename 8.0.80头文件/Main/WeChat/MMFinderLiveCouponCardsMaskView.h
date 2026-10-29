@interface MMFinderLiveCouponCardsMaskView : UIView <UICollectionViewDataSource>
{
    id <MMFinderLiveCouponCardsMaskViewDelegate> _delegate; // +0x8
    id <MMFinderLiveCouponCardCoordinator> _coordinator; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UICollectionView * _cardsView; // +0x20
    UIPageControl * _pageControl; // +0x28
    UIButton * _closeButton; // +0x30
    NSArray * _cardViewModels; // +0x38
    long long _currentIndex; // +0x40
    long long _pendingStartIndex; // +0x48
}
- (double)spacing;
- (BOOL)hasAnyRecognizedCards;
- (CGSize)cardSize;
- (id)initWithDelegate:(id)arg1 coordinator:(id)arg2 taskId:(id)arg3 cardInfos:(id)arg4 startIndex:(long long)arg5 frame:(CGRect)arg6;
- (void)initSubviews;
- (void)initCardsView;
- (id)buildLayout;
- (void)initCloseButton;
- (void)initPageControl;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reportCardExposeForIndex:(long long)arg1 withType:(unsigned long long)arg2;
- (void)replaceViewModel:(id)arg1 withNewPopupInfo:(id)arg2;
- (void)reportReplacedCardExposeForViewModel:(id)arg1;
- (void)onCloseButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)cardsView;
- (void)setCardsView:(id)arg1;
- (id)pageControl;
- (void)setPageControl:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cardViewModels;
- (void)setCardViewModels:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)pendingStartIndex;
- (void)setPendingStartIndex:(long long)arg1;
- (void).cxx_destruct;
@end
