@interface FavChatForwardToolView : UIView
{
    UIView * _containerView; // +0x8
    MMUIButton * _collapseButton; // +0x10
    UIButton * _sendButton; // +0x18
    UILabel * _selectedTitleLabel; // +0x20
    FavSelectedItemsSheetView * _selectedItemsSheet; // +0x28
    BOOL _expanded; // +0x30
    BOOL _closingSheet; // +0x31
    UIView * _sheetMaskView; // +0x38
    id /* block */ _sendHandler; // +0x40
    id /* block */ _collapseHandler; // +0x48
    id /* block */ _willExpandHandler; // +0x50
    id /* block */ _removeSelectionHandler; // +0x58
    id /* block */ _openDetailHandler; // +0x60
    NSString * _selectedTitle; // +0x68
    NSArray * _selectedItems; // +0x70
    id <MMFavCellComponentDelegate> _cellDelegate; // +0x78
    unsigned long long _selectedCount; // +0x80
}
- (id)init;
- (void)setSelectedItems:(id)arg1;
- (void)setSelectedCount:(unsigned long long)arg1;
- (void)setSelectedTitle:(id)arg1;
- (void)setCellDelegate:(id)arg1;
- (void)setSendHandler:(id /* block */)arg1;
- (void)setRemoveSelectionHandler:(id /* block */)arg1;
- (void)setOpenDetailHandler:(id /* block */)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)expand;
- (id)ensureSheetMaskView;
- (void)onSheetMaskTapped;
- (void)bringSheetMaskToFrontIfNeeded;
- (void)startSheetPresentTransition;
- (void)collapse;
- (BOOL)isExpanded;
- (void)onCollapseButtonClicked;
- (void)onSendButtonClicked;
- (void)handleSelectedItemsSheetDidClose;
- (void)willMoveToSuperview:(id)arg1;
- (void)startSheetCollapseTransition;
- (void)startSheetCloseTransition;
- (void)takeOverFrameworkClosePositionAnimation;
- (BOOL)currentSheetPresentationTop:(double *)arg1;
- (void)handoffSheetToToolbarFrom:(id)arg1;
- (void)bringToolbarToFrontOfSheet;
- (void)bringSheetToFrontOfToolbar;
- (id)sheetRootViewInToolbarSuperview;
- (double)transitionDurationForSlideDistance:(double)arg1 containerHeight:(double)arg2;
- (void)revealToolbar;
- (void)updateUI;
- (id /* block */)sendHandler;
- (id /* block */)collapseHandler;
- (void)setCollapseHandler:(id /* block */)arg1;
- (id /* block */)willExpandHandler;
- (void)setWillExpandHandler:(id /* block */)arg1;
- (id /* block */)removeSelectionHandler;
- (id /* block */)openDetailHandler;
- (id)selectedTitle;
- (id)selectedItems;
- (id)cellDelegate;
- (unsigned long long)selectedCount;
- (void).cxx_destruct;
@end
