@interface WCStoryCommentOthersViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCStoryCommentOthersViewModelDelegate, WCStoryFriendCommmentHeadCellDelegate, MMTipsViewControllerDelegate, InputControllerDelegate>
{
    id <WCStoryCommentOthersViewControllerDelegate> _delegate; // +0x68
    double _contentViewHeight; // +0x70
    NSString * _tid; // +0x78
    WCStoryCommentOthersViewModel * _viewModel; // +0x80
    WCStoryPreviewReportObj * _previewReportObj; // +0x88
    WCStoryComment * _replyComment; // +0x90
    MMUIButton * _backgroundButton; // +0x98
    MMUIButton * _closeButton; // +0xa0
    UIView * _topView; // +0xa8
    UIView * _contentView; // +0xb0
    UIView * _maskView; // +0xb8
    CAGradientLayer * _gradientLayer; // +0xc0
    UITableView * _tableView; // +0xc8
    UILabel * _tipsLabel; // +0xd0
    MMGrowTextView * _growTextView; // +0xd8
    WCInputController * _inputController; // +0xe0
    UIView * _inputView; // +0xe8
    UIButton * _expressionButton; // +0xf0
    EmoticonBoardView * _emoticonBoardView; // +0xf8
    UIView * _bottomBackGroundView; // +0x100
    MMUILabel * _remainWordCountLabel; // +0x108
}
- (id)initWithTid:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)hidesStatusBar;
- (void)setupData;
- (void)scrollTableViewToBottomAnimated:(BOOL)arg1;
- (BOOL)isShowingKeyBoard;
- (void)setupSubViews;
- (void)setupContentView;
- (void)setupInputViewController;
- (void)setupGesture;
- (void)updateUI;
- (void)deleteComment:(id)arg1;
- (void)showContactInfoViewControllerWithStoryComment:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollView:(id)arg1 panGesture:(id)arg2;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onClickClose;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)StoryCommentOthersViewModelDataDidUpdate:(id)arg1;
- (void)StoryCommentOthersViewModelDataUpdateByAddComment;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickBodyViewWithComment:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)setPreviewReportObj:(id)arg1;
- (id)tableView;
- (id)tipsLabel;
- (id)topView;
- (id)contentView;
- (id)backgroundButton;
- (id)closeButton;
- (id)maskView;
- (id)gradientLayer;
- (id)inputView;
- (id)growTextView;
- (id)expressionButton;
- (id)emoticonBoardView;
- (id)inputController;
- (id)bottomBackGroundView;
- (id)remainWordCountLabel;
- (void)updateRemainWordCountLabel;
- (double)getVisibleHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)contentViewHeight;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)previewReportObj;
- (id)replyComment;
- (void)setReplyComment:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (void)setInputController:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setBottomBackGroundView:(id)arg1;
- (void)setRemainWordCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

