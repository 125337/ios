@interface WCPayQrcodeUsageHalfPage : MMPageSheetBaseViewController <WCPayQrcodeUsagehalfPageCellDelegate, MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isKeyboardShowing; // +0x68
    id <WCPayQrcodeUsageHalfPage> _delegate; // +0x70
    NSString * _codeUsage; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMTableView * _usageTableView; // +0x88
    WCPayQrcodeUsagehalfPageCell * _lastChooseCell; // +0x90
    CgiApplyQrcodeResp * _resp; // +0x98
    long long _selectedRow; // +0xa0
    long long _keyboardHeight; // +0xa8
}
- (id)initWithResp:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (double)pageSheetContentWidth;
- (id)pageSheetDetailContentView;
- (void)pageSheetDidAppear;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)pageSheetContentHeight;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTapCell:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onKeyboradWillHide:(id)arg1;
- (void)onKeyboradDidShow:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateTableViewOffset;
- (id)usageTableView;
- (void)setConfirmButtonState:(BOOL)arg1;
- (void)updateTextFieldContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)codeUsage;
- (void)setCodeUsage:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setUsageTableView:(id)arg1;
- (id)lastChooseCell;
- (void)setLastChooseCell:(id)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (long long)selectedRow;
- (void)setSelectedRow:(long long)arg1;
- (BOOL)isKeyboardShowing;
- (void)setIsKeyboardShowing:(BOOL)arg1;
- (long long)keyboardHeight;
- (void)setKeyboardHeight:(long long)arg1;
- (void).cxx_destruct;
@end

