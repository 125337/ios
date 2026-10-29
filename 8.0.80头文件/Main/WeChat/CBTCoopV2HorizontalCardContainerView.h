@interface CBTCoopV2HorizontalCardContainerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _contentDirty; // +0x8
    BOOL _embeddedInMarkdown; // +0x9
    BOOL _hostedByPlatformView; // +0xa
    BOOL _hostVisible; // +0xb
    id <CBTAsstBoardBaseCellViewDelegate> _cellDelegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _flowLayout; // +0x20
    CBTCoopV2HorizontalCardGroupViewModel * _viewModel; // +0x28
    NSString * _contentSignature; // +0x30
    double _lastLayoutWidth; // +0x38
    id <CBTCoopV2AsstBoardCellExternalReportDatasource> _externalReportDatasource; // +0x40
    CAGradientLayer * _fadeGradientMask; // +0x48
    NSMutableSet * _coopV2ContentCardRegistry; // +0x50
    NSString * _coopV2ContentCardBaseKey; // +0x58
}
- (void)bindViewModel:(id)arg1 delegate:(id)arg2 externalReportDatasource:(id)arg3 embeddedInMarkdown:(BOOL)arg4 hostedByPlatformView:(BOOL)arg5;
- (void)ensureSubviews;
- (void)updateEdgeFadeMask;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)hostDidAppear;
- (void)hostDidDisappear;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reportFullyVisibleItemsIfNeeded;
- (void)coopV2RefreshContentCardExposureWithRegistry:(id)arg1 baseKey:(id)arg2;
- (void)coopV2RunContentCardExposurePass;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentSignature;
- (void)setContentSignature:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)embeddedInMarkdown;
- (void)setEmbeddedInMarkdown:(BOOL)arg1;
- (BOOL)hostedByPlatformView;
- (void)setHostedByPlatformView:(BOOL)arg1;
- (BOOL)hostVisible;
- (void)setHostVisible:(BOOL)arg1;
- (id)externalReportDatasource;
- (void)setExternalReportDatasource:(id)arg1;
- (id)fadeGradientMask;
- (void)setFadeGradientMask:(id)arg1;
- (id)coopV2ContentCardRegistry;
- (void)setCoopV2ContentCardRegistry:(id)arg1;
- (id)coopV2ContentCardBaseKey;
- (void)setCoopV2ContentCardBaseKey:(id)arg1;
- (void).cxx_destruct;
@end
