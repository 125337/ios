@interface WCSelectorView : MMUIView
{
    BOOL _bNeedLayout; // +0x8
    UIImageView * _backgroundImageView; // +0x10
    UIButton * _addButton; // +0x18
    UIView * _deleteView; // +0x20
    id <WCSelectorViewDataSource> _dataSource; // +0x28
    id <WCSelectorViewDelegate> _delegate; // +0x30
    UINavigationController * _navigationController; // +0x38
    CGPoint _startPoint; // +0x40
    double _stepWidth; // +0x50
    BOOL _bShowAddButton; // +0x58
    double _fDeleteScrollViewOffset; // +0x60
    BOOL _bHandleOutside; // +0x68
    BOOL _bHandleWholeView; // +0x69
    BOOL _bAlighRight; // +0x6a
    BOOL _enableDrag; // +0x6b
    long long _maxImageCount; // +0x70
}
- (void)commmtInit;
- (id)init;
- (void)layoutSubviews;
- (void)reload;
- (void)layoutDeleteView;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)hideDeleteView;
- (void)showDeleteView;
- (void)reloadDeleteView;
- (void)hideAddView;
- (void)showAddView;
- (void)performClickAddView;
- (void)hideBackgroundView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)delayedHandleWholeView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onAddButtonClicked:(id)arg1;
- (void)onXviewClicked:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (BOOL)bShowAddButton;
- (void)setBShowAddButton:(BOOL)arg1;
- (BOOL)bHandleOutside;
- (void)setBHandleOutside:(BOOL)arg1;
- (BOOL)bHandelWholeView;
- (void)setBHandelWholeView:(BOOL)arg1;
- (BOOL)bAlighRight;
- (void)setBAlighRight:(BOOL)arg1;
- (double)stepWidth;
- (void)setStepWidth:(double)arg1;
- (long long)maxImageCount;
- (void)setMaxImageCount:(long long)arg1;
- (BOOL)enableDrag;
- (void)setEnableDrag:(BOOL)arg1;
- (void).cxx_destruct;
@end
