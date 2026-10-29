@interface MJImageTemplatePanel : MJImagePanel <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MJImageTemplatePanelDelegate> _delegate; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    UIView * _topbar; // +0x18
    UILabel * _titleLabel; // +0x20
    MMUIButton * _doneButton; // +0x28
    UICollectionView * _templateCollectionView; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_fetchTemplateItems;
- (void)doneButtonDidTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)topbar;
- (void)setTopbar:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)templateCollectionView;
- (void)setTemplateCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
