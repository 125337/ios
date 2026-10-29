@interface MMLiveAnchorMoreFunctionOperationView : MMPageSheetBaseView
{
    id /* block */ _functionOperationViewWillDisappear; // +0x8
    MMTableView * _mainTableView; // +0x10
    unsigned long long _operationViewType; // +0x18
    id <UITableViewDelegate><UITableViewDataSource> _operationDelegate; // +0x20
    UIView * _contentView; // +0x28
    double _contentViewHeight; // +0x30
    NSString * _title; // +0x38
    long long _previousOrientation; // +0x40
    double _customHeight; // +0x48
    MMUIButton * _closeButton; // +0x50
}
+ (id)getAnchorMoreFunctionOperationView:(id)arg1;
- (void)pageSheetDidRotation;
- (void)pageSheetWillAppear;
- (void)updateDelegate:(id)arg1;
- (void)updateContentViewHeight:(double)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateCustomHeight:(double)arg1;
- (void)reloadOperationData;
- (void)reloadDataAtIndexPath:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateOperationViewType:(unsigned long long)arg1;
- (void)applyStyleForOperationViewType;
- (void)pageSheetWillDisappear;
- (void)onCloseButtonTapped;
- (double)contentViewHeight;
- (id)closeButton;
- (id)mainTableView;
- (id)contentView;
- (id /* block */)functionOperationViewWillDisappear;
- (void)setFunctionOperationViewWillDisappear:(id /* block */)arg1;
- (void)setMainTableView:(id)arg1;
- (unsigned long long)operationViewType;
- (void)setOperationViewType:(unsigned long long)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewHeight:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (double)customHeight;
- (void)setCustomHeight:(double)arg1;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end
