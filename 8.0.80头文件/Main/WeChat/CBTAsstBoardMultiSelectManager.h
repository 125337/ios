@interface CBTAsstBoardMultiSelectManager : NSObject
{
    BOOL _isMultiSelectMode; // +0x8
    id <CBTAsstBoardMultiSelectManagerDelegate> _delegate; // +0x10
    UITableView * _tableView; // +0x18
    id /* block */ _viewModelsProvider; // +0x20
    long long _enterAnchorRow; // +0x28
}
- (id)initWithTableView:(id)arg1 viewModelsProvider:(id /* block */)arg2;
- (void)enterMultiSelectModeWithTriggerVM:(id)arg1 initialSelectedViewModels:(id)arg2;
- (void)exitMultiSelectMode;
- (long long)toggleSelectionForViewModel:(id)arg1;
- (id)sortedSelectedViewModels;
- (BOOL)_shouldApplyInitialSelectionForViewModel:(id)arg1;
- (void)_invalidateAllCellHeightCache;
- (void)_reloadTableViewForMultiSelectModeWithViewportAnchor:(id)arg1;
- (id)_captureViewportAnchorForEnterWithTriggerVM:(id)arg1;
- (id)_captureViewportAnchorForExit;
- (id)_captureAnchorWithReferenceRow:(long long)arg1 targetMultiSelectMode:(BOOL)arg2;
- (id)_captureFallbackAnchorForTargetMultiSelectMode:(BOOL)arg1;
- (long long)_rowForViewModel:(id)arg1;
- (BOOL)_isEligibleAnchorRow:(long long)arg1 targetMultiSelectMode:(BOOL)arg2;
- (BOOL)_isRowVisibleInViewport:(long long)arg1;
- (long long)_firstVisibleEligibleRowInViewportForTargetMultiSelectMode:(BOOL)arg1;
- (long long)_firstVisibleEligibleRowForTargetMultiSelectMode:(BOOL)arg1;
- (long long)_nextVisibleEligibleRowAfter:(long long)arg1 targetMultiSelectMode:(BOOL)arg2;
- (double)_checkboxScreenYInTableViewBoundsForRow:(long long)arg1 outCheckboxYInCell:(double *)arg2;
- (void)_restoreContentOffsetWithViewportAnchor:(id)arg1;
- (long long)_resolveAnchorRowForRestore:(id)arg1;
- (double)_clampedContentOffsetY:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isMultiSelectMode;
- (void)setIsMultiSelectMode:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id /* block */)viewModelsProvider;
- (void)setViewModelsProvider:(id /* block */)arg1;
- (long long)enterAnchorRow;
- (void)setEnterAnchorRow:(long long)arg1;
- (void).cxx_destruct;
@end
