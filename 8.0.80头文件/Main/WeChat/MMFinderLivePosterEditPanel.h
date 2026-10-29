@interface MMFinderLivePosterEditPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MMFinderLivePosterEditPanelDelegate> _delegate; // +0x8
    MMFinderLiveNoticePosterModel * _posterModel; // +0x10
    MMUIImageView * _editingStyleImageView; // +0x18
    MMUIImageView * _editingPictureImageView; // +0x20
    MMUIButton * _editingCommitButton; // +0x28
    UICollectionView * _colorVariantCollectionView; // +0x30
    long long _state; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)onActionSheetDismiss;
- (void)setState:(long long)arg1;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)initViews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onEditStyleButtonTapped;
- (void)onEditImageButtonTapped;
- (void)onEditingCommitButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)posterModel;
- (void)setPosterModel:(id)arg1;
- (id)editingStyleImageView;
- (void)setEditingStyleImageView:(id)arg1;
- (id)editingPictureImageView;
- (void)setEditingPictureImageView:(id)arg1;
- (id)editingCommitButton;
- (void)setEditingCommitButton:(id)arg1;
- (id)colorVariantCollectionView;
- (void)setColorVariantCollectionView:(id)arg1;
- (long long)state;
- (void).cxx_destruct;
@end
