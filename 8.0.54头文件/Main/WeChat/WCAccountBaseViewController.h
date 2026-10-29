@interface WCAccountBaseViewController : MMUIViewController <MMTableViewInfoDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    WCAccountControlData * m_data; // +0x70
    WCSheetView * _sheetView; // +0x78
}
- (id)init;
- (void)dealloc;
- (void)setupWithData:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (BOOL)useCustomNavibar;
- (void)callViewDidLoad;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)useBlackStyleView;
- (BOOL)autoHandleKeyboardEvent;
- (id)mainContentView;
- (void)configMainContentView;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)setTableHeaderView:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setNavigationLeftBarButtonStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setNavigationRightBarButtonMoreStyleWithtarget:(id)arg1 action:(SEL)arg2;
- (void)hideKeyBoard;
- (id)getHeaderViewInMainFrame:(id)arg1;
- (id)getHeaderView:(id)arg1;
- (id)getNewHeaderView:(id)arg1;
- (id)makeHeaderViewInMainFrame:(id)arg1;
- (id)makeHeaderView:(id)arg1;
- (id)makeNewHeaderView:(id)arg1;
- (id)getInputLineView;
- (id)getBothSideMarginInputLineView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useRedesignStyle;
- (BOOL)useIpadStyle;
- (BOOL)useGrayBackgroundColor;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (double)contentWidth;
- (double)textFiledLeftMargin;
- (void)viewDidTransitionToNewSize;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)onKeyboardChangingHeight:(double)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end

