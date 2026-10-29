@interface WNSelectionView : MMUIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer * m_oPanGestureRecognizer; // +0x8
    UITapGestureRecognizer * m_tapGestureRecognizer; // +0x10
    MMSelectCoverView * _coverView; // +0x18
    BOOL _bTouchLeft; // +0x20
    BOOL _bTouchRight; // +0x21
    double _startOffsetY; // +0x28
    BOOL _isEnable; // +0x30
    BOOL _isScrollFromSelf; // +0x31
    UIMenuItem * m_orderListItem; // +0x38
    BOOL _bSelecting; // +0x40
    id <WNSelectionViewDelegate> delegate; // +0x48
    MMTableView * _tableView; // +0x50
    WeNoteDataController * _dataController; // +0x58
    MMMagnifiterView * _magnifiterView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)getMenuItemsWithResponder:(id)arg1;
- (void)checkOrderListMenuItemWith:(_NSRange)arg1;
- (void)hideView;
- (BOOL)selectionShowing;
- (double)paragraphLeft;
- (void)setTableView:(id)arg1;
- (void)didReloadView;
- (void)cancelSelect;
- (void)tryShowSelectionViewWithMenue:(BOOL)arg1;
- (void)tryToShowMenueWithoutSelectionView:(CGRect)arg1;
- (void)tryUpdateSelectionViewOnScroll;
- (void)delayShowMenu;
- (void)checkShouldEnable;
- (void)showCoverView;
- (void)removeMaginfierView;
- (id)magnifiterView:(double)arg1;
- (void)showMenuItems;
- (void)hideMenuItems;
- (BOOL)showOrderListMenuWith:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setSmallImage:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setBoldFromKey:(id)arg1;
- (void)setHighlightFromKey:(id)arg1;
- (void)onUndo:(id)arg1;
- (void)onEditOrderList:(id)arg1;
- (void)onRedo:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onTapAction:(id)arg1;
- (void)onPanAction:(id)arg1;
- (void)updateCoverView;
- (void)updateCoverViewLeft:(BOOL)arg1 Right:(BOOL)arg2;
- (void)setSelectTopPos:(double)arg1;
- (void)setSelectBottomPos:(double)arg1;
- (void)setSelectLeftPosTextView:(id)arg1 range:(id)arg2 end:(BOOL)arg3;
- (void)setSelectRightPosTextView:(id)arg1 range:(id)arg2 end:(BOOL)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)keyCommands;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bSelecting;
- (void)setBSelecting:(BOOL)arg1;
- (id)tableView;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)magnifiterView;
- (void)setMagnifiterView:(id)arg1;
- (void).cxx_destruct;
@end
