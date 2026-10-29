@interface CBTMomentListTableView : MMUIView <UITableViewDelegate, UITableViewDataSource, MMGrowTextViewDelegate, CBTMomentContentCellModelDelegate>
{
    NSMutableArray * _dataSource; // +0x8
    UITableView * _tableView; // +0x10
    CAGradientLayer * _gradientMaskLayer; // +0x18
    UIView * _commentInputView; // +0x20
    MMGrowTextView * _commentInputTextView; // +0x28
    double _fKeyboardHeight; // +0x30
    UIView * _closeKeyboardView; // +0x38
    CBTMomentContentCellModel * _inputtingCommentModel; // +0x40
    CBTCommentInfo * _replyCommentInfo; // +0x48
    UIViewController * _viewController; // +0x50
    id <CBTMomentListTableViewDelegate> _delegate; // +0x58
    UIView * _tableHeadView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 viewController:(id)arg3;
- (void)setTableViewHeadView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTableView;
- (void)layoutGradientMaskLayer;
- (void)onLikeBtnClicked:(id)arg1;
- (void)onUninterestedBtnClicked:(id)arg1;
- (void)onCommentBtnTapped:(id)arg1 replyCommentInfo:(id)arg2;
- (void)onConfigPrivateBtnTapped:(id)arg1;
- (void)needReloadData:(id)arg1;
- (void)showCommentInputView;
- (void)hideCommentInputView;
- (void)setupCommentInputView;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)generateMomentContentCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)findMomentModelIndexPath:(id)arg1;
- (void)reloadRowsWithCellModel:(id)arg1;
- (void)insertRowsWithoutScrolling:(id)arg1;
- (void)updateGradientWithOffset:(double)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg1;
- (id)commentInputTextView;
- (void)setCommentInputTextView:(id)arg1;
- (double)fKeyboardHeight;
- (void)setFKeyboardHeight:(double)arg1;
- (id)closeKeyboardView;
- (void)setCloseKeyboardView:(id)arg1;
- (id)inputtingCommentModel;
- (void)setInputtingCommentModel:(id)arg1;
- (id)replyCommentInfo;
- (void)setReplyCommentInfo:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableHeadView;
- (void)setTableHeadView:(id)arg1;
- (void).cxx_destruct;
@end
