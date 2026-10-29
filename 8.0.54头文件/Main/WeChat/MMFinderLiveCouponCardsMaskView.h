@interface MMFinderLiveCouponCardsMaskView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMFinderLiveCouponCardViewDelegate>
{
    id <MMFinderLiveCouponCardsMaskViewDelegate> _delegate; // +0x8
    UICollectionView * _cardsView; // +0x10
    UIView * _numberView; // +0x18
    UIButton * _closeButton; // +0x20
    NSArray * _cardViewModels; // +0x28
    MMFinderLiveTaskId * _taskID; // +0x30
}
- (double)spacing;
- (CGSize)cardSize;
- (id)initWithDelegate:(id)arg1 taskID:(id)arg2 cardViewModels:(id)arg3 frame:(CGRect)arg4;
- (void)initSubviews;
- (void)initCardsView;
- (void)initCloseButton;
- (void)layoutSubviews;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)onCouponCardButtonClicked:(id)arg1;
- (void)onCloseButtonClicked;
- (void)didMoveToWindow;
- (void)reportCardExposeWithIndex:(long long)arg1 isForOpen:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardsView;
- (void)setCardsView:(id)arg1;
- (id)numberView;
- (void)setNumberView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cardViewModels;
- (void)setCardViewModels:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end

