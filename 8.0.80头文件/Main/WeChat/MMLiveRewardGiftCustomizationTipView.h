@interface MMLiveRewardGiftCustomizationTipView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _expanded; // +0x8
    MMFinderLiveGiftCustomizationModel * _model; // +0x10
    double _chevronX; // +0x18
    id <MMLiveRewardGiftCustomizationTipViewDelegate> _delegate; // +0x20
    UIView * _containerView; // +0x28
    MMLiveRewardGiftCustomizationTipChevronView * _chevronView; // +0x30
    UIView * _compactContainerView; // +0x38
    UIButton * _expandButton; // +0x40
    UIView * _expandedContainerView; // +0x48
    UIView * _colorsCollectionViewContainerView; // +0x50
    UICollectionView * _colorsCollectionView; // +0x58
    UIView * _separatorBar; // +0x60
    UIButton * _textCustomizationButton; // +0x68
}
- (id)initWithModel:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setChevronX:(double)arg1;
- (void)reloadContent;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onExpandButtonTapped;
- (void)onTextCustomizationButtonTapped;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (void)configureViewsForExpansion:(BOOL)arg1;
- (void)configureViewsForStyle:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (BOOL)expanded;
- (double)chevronX;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)compactContainerView;
- (void)setCompactContainerView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)expandedContainerView;
- (void)setExpandedContainerView:(id)arg1;
- (id)colorsCollectionViewContainerView;
- (void)setColorsCollectionViewContainerView:(id)arg1;
- (id)colorsCollectionView;
- (void)setColorsCollectionView:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (id)textCustomizationButton;
- (void)setTextCustomizationButton:(id)arg1;
- (void).cxx_destruct;
@end
