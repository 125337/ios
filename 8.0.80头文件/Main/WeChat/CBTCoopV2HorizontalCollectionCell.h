@interface CBTCoopV2HorizontalCollectionCell : UICollectionViewCell
{
    BOOL _pendingEmbeddedInMarkdown; // +0x8
    BOOL _pendingHostedByPlatformView; // +0x9
    BOOL _bindDirty; // +0xa
    CBTCoopV2AsstBoardCellView * _itemCellView; // +0x10
    CBTCoopV2AsstBoardViewModel * _pendingViewModel; // +0x18
    id <CBTAsstBoardBaseCellViewDelegate> _pendingDelegate; // +0x20
    id <CBTCoopV2AsstBoardCellExternalReportDatasource> _pendingExternalReportDatasource; // +0x28
}
- (void)prepareForReuse;
- (void)bindViewModel:(id)arg1 delegate:(id)arg2 externalReportDatasource:(id)arg3 embeddedInMarkdown:(BOOL)arg4 hostedByPlatformView:(BOOL)arg5;
- (void)applyPendingBindingIfNeeded;
- (void)layoutSubviews;
- (id)itemCellView;
- (void)setItemCellView:(id)arg1;
- (id)pendingViewModel;
- (void)setPendingViewModel:(id)arg1;
- (id)pendingDelegate;
- (void)setPendingDelegate:(id)arg1;
- (id)pendingExternalReportDatasource;
- (void)setPendingExternalReportDatasource:(id)arg1;
- (BOOL)pendingEmbeddedInMarkdown;
- (void)setPendingEmbeddedInMarkdown:(BOOL)arg1;
- (BOOL)pendingHostedByPlatformView;
- (void)setPendingHostedByPlatformView:(BOOL)arg1;
- (BOOL)bindDirty;
- (void)setBindDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end
