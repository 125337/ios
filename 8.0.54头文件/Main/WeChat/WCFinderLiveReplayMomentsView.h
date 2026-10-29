@interface WCFinderLiveReplayMomentsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <WCFinderLiveReplayMomentsViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _headerLabel; // +0x18
    CAGradientLayer * _bottomGradientLayer; // +0x20
    UICollectionView * _momentsCollectionView; // +0x28
    MMUIButton * _closeButton; // +0x30
    double _lastContentViewHeight; // +0x38
    NSMutableArray * _replayMoments; // +0x40
    double _replayVideoWHPercent; // +0x48
}
- (id)initWithReplayVideoWHPercent:(double)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)preferHeight;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateGreateTimeList:(id)arg1;
- (BOOL)isOpen;
- (BOOL)shouldConsumeTouchFromFullScreenPanGesture:(id)arg1 fromView:(id)arg2;
- (void)closeAction;
- (BOOL)isLandScape;
- (id)momentsCollectionView;
- (double)getMomentsCollectionViewHeight;
- (id)contentView;
- (id)headerLabel;
- (id)closeButton;
- (id)replayMoments;
- (double)replayMomentCellWidth;
- (double)replayMomentCellHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setMomentsCollectionView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (double)lastContentViewHeight;
- (void)setLastContentViewHeight:(double)arg1;
- (void)setReplayMoments:(id)arg1;
- (double)replayVideoWHPercent;
- (void)setReplayVideoWHPercent:(double)arg1;
- (void).cxx_destruct;
@end

