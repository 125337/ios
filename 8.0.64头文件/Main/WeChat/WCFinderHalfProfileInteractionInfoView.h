@interface WCFinderHalfProfileInteractionInfoView : UIView <UICollectionViewDelegate>
{
    id <WCFinderHalfProfileInteractionInfoViewDelegate> _delegate; // +0x8
    UIView * _separator; // +0x10
    UILabel * _titleLabel; // +0x18
    UICollectionView * _collectionView; // +0x20
    InteractionData * _interactionData; // +0x28
    NSArray * _configurations; // +0x30
    UICollectionViewDiffableDataSource * _dataSource; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)updateWithInteractionData:(id)arg1;
- (void)_updateUI;
- (void)_updateLayout;
- (void)_didTapContentViewWithConfiguration:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)separator;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)interactionData;
- (void)setInteractionData:(id)arg1;
- (id)configurations;
- (void)setConfigurations:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end
