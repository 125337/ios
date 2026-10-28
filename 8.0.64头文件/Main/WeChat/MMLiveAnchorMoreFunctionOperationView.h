@interface MMLiveAnchorMoreFunctionOperationView : MMPageSheetBaseView
{
    id /* block */ _functionOperationViewWillDisappear; // +0x8
    MMTableView * _mainTableView; // +0x10
    id <UITableViewDelegate><UITableViewDataSource> _operationDelegate; // +0x18
    UIView * _contentView; // +0x20
    double _contentViewHeight; // +0x28
    NSString * _title; // +0x30
    long long _previousOrientation; // +0x38
    double _customHeight; // +0x40
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
- (void)pageSheetWillDisappear;
- (void)onCloseButtonTapped;
- (double)contentViewHeight;
- (id)mainTableView;
- (id)contentView;
- (id /* block */)functionOperationViewWillDisappear;
- (void)setFunctionOperationViewWillDisappear:(id /* block */)arg1;
- (void)setMainTableView:(id)arg1;
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
- (void).cxx_destruct;
@end
