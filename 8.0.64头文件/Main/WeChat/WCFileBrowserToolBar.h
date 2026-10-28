@interface WCFileBrowserToolBar : UIView <UITableViewDataSource>
{
    BOOL _isExpanded; // +0x8
    WCFileBrowserToolBarViewModel * _viewModel; // +0x10
    id <WCFileBrowserToolBarDelegate> _delegate; // +0x18
    UIView * _containerView; // +0x20
    MMUIButton * _expandButton; // +0x28
    MMUIButton * _titleLabel; // +0x30
    MMUILabel * _emptyLabel; // +0x38
    UITableView * _contentTableView; // +0x40
    UIButton * _sendButton; // +0x48
    double _keyboardHeight; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (void)showWithHighlightedFileInfos:(id)arg1;
- (void)addToSuperview:(id)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initViews;
- (void)updateUI;
- (void)layoutUI;
- (void)onDataChanged;
- (void)expandToolBar;
- (void)shrinkToolBar;
- (void)highlightFileInfo:(id)arg1;
- (void)onExpandButtonClicked;
- (void)onSendButtonClicked;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)contentTableView;
- (void)setContentTableView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
