@interface MMFinderLiveSquareSwitchGuideView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableArray * _liveFeedArray; // +0x8
    id /* block */ _closeActionBlock; // +0x10
    id /* block */ _goSquareActionBlock; // +0x18
    WCLiveBlurButton * _closeButton; // +0x20
    UIView * _containerView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UICollectionView * _collectionView; // +0x40
    UIImageView * _slideImageView; // +0x48
    UILabel * _slideLabel; // +0x50
}
- (void)setLiveFeedArray:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)maxContentWidth;
- (CGSize)cellSize;
- (id)containerView;
- (id)titleLabel;
- (id)arrowImageView;
- (id)collectionView;
- (id)closeButton;
- (id)slideImageView;
- (id)slideLabel;
- (void)onTapCloseButton;
- (void)onTapGoSquare;
- (id)liveFeedArray;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg1;
- (id /* block */)goSquareActionBlock;
- (void)setGoSquareActionBlock:(id /* block */)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setSlideImageView:(id)arg1;
- (void)setSlideLabel:(id)arg1;
- (void).cxx_destruct;
@end
