@interface NewMainFrameCell : MMMultiMenuTableViewCell <SnapshotPrinterViewProtocol, MMDragDelegate, IMainFrameCellExt>
{
    MainFrameItemView * m_itemView; // +0x40
    UIImageView * m_backGroundViewOfCell; // +0x48
    UIImage * m_cellBkgImageWithTop; // +0x50
    UIImage * m_cellBkgImage; // +0x58
    MainFrameCellData * m_cellData; // +0x60
    MainFrameCellData * m_oldCellData; // +0x68
    MMDragManager * _dragManager; // +0x70
    UIDragInteraction * _dragInteraction; // +0x78
    UIView * _dragLiftingView; // +0x80
    double _horizonPadding; // +0x88
    ColorGradientView * _rightMaskView; // +0x90
    UIView * _separatorLine; // +0x98
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isSessionSetUnreadable:(id)arg1;
- (void)updateMoreMenu:(id)arg1;
- (id)makeUnsubscribeMenuItem;
- (void)updateContentView:(id)arg1 tableViewFrame:(CGRect)arg2;
- (void)updateCellTime;
- (void)updateCellContent:(id)arg1 withContact:(id)arg2;
- (id)accessibilityLabel;
- (void)updateCellBackground:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)onMultiMenuAppear;
- (void)onMenuOffsetChange:(double)arg1 menuWidth:(double)arg2;
- (id)getGreenLabelText;
- (void)playHighlightBackgroundAnimate;
- (id)itemViewSnapshotForDragAndDrop;
- (id)extInfoForSnapshotPrinter;
- (id)m_cellData;
- (void)setM_cellData:(id)arg1;
- (id)m_oldCellData;
- (void)setM_oldCellData:(id)arg1;
- (id)dragManager;
- (void)setDragManager:(id)arg1;
- (id)dragInteraction;
- (void)setDragInteraction:(id)arg1;
- (id)dragLiftingView;
- (void)setDragLiftingView:(id)arg1;
- (double)horizonPadding;
- (void)setHorizonPadding:(double)arg1;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
