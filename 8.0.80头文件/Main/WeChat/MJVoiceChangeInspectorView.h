@interface MJVoiceChangeInspectorView : MJSegmentInspectorView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MJVoiceChangeCellDelegate>
{
    BOOL _shouldBlockWhenLoading; // +0x8
    BOOL _shouldRequestVoiceChangeUponLoaded; // +0x9
    BOOL _shouldHideTopBar; // +0xa
    unsigned long long _options; // +0x10
    id /* block */ _tapLinkBlock; // +0x18
    UICollectionView * _collectionView; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
    MMUIButton * _protocolButton; // +0x30
}
- (id)initWithViewModel:(id)arg1 options:(unsigned long long)arg2;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)reloadContents;
- (void)loadContents;
- (void)updateViewsForWillLoadContents;
- (void)updateViewsForDidLoadContents:(BOOL)arg1;
- (void)requestVoiceChangeForSelectedRole;
- (void)blockUserInteraction;
- (void)unblockUserInteraction;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateCellSelection;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleCollectionView:(id)arg1 selectItemAtIndexPath:(id)arg2 autoPlay:(BOOL)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)voiceChangeCellDidRequestRetry:(id)arg1;
- (void)voiceChangeCellDidSelectDeleteCloneRole:(id)arg1;
- (void)protocolButtonButtonDidTouchUpInside:(id)arg1;
- (void)showProtocolButton;
- (void)hideProtocolButton;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id /* block */)tapLinkBlock;
- (void)setTapLinkBlock:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)shouldBlockWhenLoading;
- (void)setShouldBlockWhenLoading:(BOOL)arg1;
- (BOOL)shouldRequestVoiceChangeUponLoaded;
- (void)setShouldRequestVoiceChangeUponLoaded:(BOOL)arg1;
- (BOOL)shouldHideTopBar;
- (void)setShouldHideTopBar:(BOOL)arg1;
- (id)protocolButton;
- (void)setProtocolButton:(id)arg1;
- (void).cxx_destruct;
@end
