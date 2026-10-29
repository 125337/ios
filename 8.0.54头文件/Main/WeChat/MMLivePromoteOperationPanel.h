@interface MMLivePromoteOperationPanel : MMPageSheetBaseView <UIGestureRecognizerDelegate>
{
    id <MMLivePromoteOperationPanelDelegate> _delegate; // +0x8
    double _contentHeight; // +0x10
    UIView * _contentView; // +0x18
    UIView * _panelView; // +0x20
    MMUIButton * _arrowButton; // +0x28
    NSMutableArray * _panelCells; // +0x30
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupPageSheetConfig;
- (void)createUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addPanelCell:(id)arg1;
- (void)showPanel;
- (void)hidePanel;
- (void)forceLayout;
- (void)handleCellDidClick:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)handleTapArrowButton;
- (id)arrowButton;
- (id)contentView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (void)setContentView:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (id)panelCells;
- (void)setPanelCells:(id)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

