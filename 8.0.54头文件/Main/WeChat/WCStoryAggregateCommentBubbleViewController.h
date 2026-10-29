@interface WCStoryAggregateCommentBubbleViewController : MMUIViewController <UIScrollViewDelegate, WCStoryAggregateCommentBubbleViewModelDelegate, WCStoryFriendVisitorListViewDelegate, WCStoryFriendVisitorListViewDataSource, WCStoryFriendCommentsListViewDelegate, WCStoryFriendCommentsListViewDataSource, MMTipsViewControllerDelegate>
{
    BOOL _focusOnVisitorList; // +0x68
    id <WCStoryAggregateCommentBubbleViewControllerDelegate> _delegate; // +0x70
    double _contentViewHeight; // +0x78
    NSString * _tid; // +0x80
    WCStoryAggregateCommentBubbleViewModel * _viewModel; // +0x88
    MMUIButton * _backgroundButton; // +0x90
    MMUIButton * _closeButton; // +0x98
    UIView * _topView; // +0xa0
    UIView * _contentView; // +0xa8
    UIView * _maskView; // +0xb0
    CAGradientLayer * _gradientLayer; // +0xb8
    UIView * _buttonGroupView; // +0xc0
    MMUIButton * _leftBtn; // +0xc8
    MMUIButton * _rightBtn; // +0xd0
    UIView * _visitBlueTipsView; // +0xd8
    UIView * _commentBlueTipsView; // +0xe0
    UIScrollView * _scrollView; // +0xe8
    WCStoryFriendVisitorListView * _visitorListView; // +0xf0
    WCStoryFriendCommentsListView * _commentsListView; // +0xf8
    WCInputControllerViews * _inputControllerViews; // +0x100
    WCStoryComment * _replyComment; // +0x108
    UITableView * _replyCommentTableView; // +0x110
}
- (void)showCommentInputView:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (BOOL)isShowingKeyBoard;
- (void)resignInputViewResponder;
- (void)ensureInitInputView;
- (void)resetToKeyboardInputMode;
- (void)initInputToolView;
- (void)initGrowTextView;
- (void)initExpressionButton;
- (void)initRemainWordCountLabel;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)updateRemainWordCountLabel;
- (void)onExpressionButtonClicked:(id)arg1;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (id)initWithTid:(id)arg1;
- (id)initWithTid:(id)arg1 focusOnVisitorList:(BOOL)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)hidesStatusBar;
- (void)scrollList:(unsigned long long)arg1 toBottomAnimated:(BOOL)arg2;
- (void)scrollToList:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setupViewModel;
- (void)setupSubViews;
- (void)updateUI;
- (void)setupGesture;
- (void)deleteComment:(id)arg1;
- (void)showContactInfoViewControllerWithStoryComment:(id)arg1;
- (void)handleScrollingEnd:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollView:(id)arg1 panGesture:(id)arg2;
- (void)onClickClose;
- (void)onLeftBtnDidClick;
- (void)onRightBtnDidClick;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)StoryFriendVisitorListViewScrollView:(id)arg1 receivePanGesture:(id)arg2;
- (id)StoryFriendVisitorListViewCollectionViewContentInset;
- (void)StoryFriendVisitorListViewDidClickHeadViewWithComment:(id)arg1;
- (id)VisitorsInStoryFriendVisitorListView:(id)arg1;
- (void)StoryFriendCommentsListViewScrollView:(id)arg1 receivePanGesture:(id)arg2;
- (void)StoryFriendCommentsListViewSeletedTableView:(id)arg1 indexPath:(id)arg2;
- (void)StoryFriendCommentsListViewDidClickHeadViewWithComment:(id)arg1;
- (id)CommentsInStoryFriendCommentsListView:(id)arg1;
- (id)HeightForCommentsInStoryFriendCommentsListView:(id)arg1;
- (void)StoryAggregateCommentBubbleViewModelDataDidUpdate:(id)arg1;
- (void)StoryAggregateCommentBubbleViewModelDidAddNewVisitor;
- (void)StoryAggregateCommentBubbleViewModelDidAddNewComment;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)setPreViewReportObj:(id)arg1;
- (void)setFocusOnVisitorList:(BOOL)arg1;
- (id)scrollView;
- (id)leftBtn;
- (id)rightBtn;
- (id)visitBlueTipsView;
- (id)commentBlueTipsView;
- (id)buttonGroupView;
- (id)topView;
- (id)contentView;
- (id)backgroundButton;
- (id)closeButton;
- (id)maskView;
- (id)gradientLayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFocusOnVisitorList;
- (double)contentViewHeight;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setButtonGroupView:(id)arg1;
- (void)setLeftBtn:(id)arg1;
- (void)setRightBtn:(id)arg1;
- (void)setVisitBlueTipsView:(id)arg1;
- (void)setCommentBlueTipsView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)visitorListView;
- (void)setVisitorListView:(id)arg1;
- (id)commentsListView;
- (void)setCommentsListView:(id)arg1;
- (id)inputControllerViews;
- (void)setInputControllerViews:(id)arg1;
- (id)replyComment;
- (void)setReplyComment:(id)arg1;
- (id)replyCommentTableView;
- (void)setReplyCommentTableView:(id)arg1;
- (void).cxx_destruct;
@end

