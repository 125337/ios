@interface WCStoryCommentsForSelfViewController : MMUIViewController <UIViewControllerAnimatedTransitioning, WCStoryCommentsForSelfTableViewCellDelegate, InputControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _isKeyboardPushedByPreviousVC; // +0x70
    BOOL _showingInputView; // +0x71
    NSString * _dataItemID; // +0x78
    WCStoryComment * _replyComment; // +0x80
    WCStoryCommentsForSelfShowViewModel * _viewModel; // +0x88
    WCStoryPreviewReportObj * _previewReportObj; // +0x90
    id /* block */ _completion; // +0x98
    id /* block */ _pushAnotherVCBlock; // +0xa0
    id /* block */ _popFromAnotherVCBlock; // +0xa8
    id /* block */ _viewWillAppearBlock; // +0xb0
    UIView * _gradientMaskView; // +0xb8
    CAGradientLayer * _gradientLayer; // +0xc0
    MMTableView * _tableView; // +0xc8
    MMGrowTextView * _growTextView; // +0xd0
    WCInputController * _inputController; // +0xd8
    UIView * _inputView; // +0xe0
    UIButton * _expressionButton; // +0xe8
    EmoticonBoardView * _emoticonBoardView; // +0xf0
    UIVisualEffectView * _blurView; // +0xf8
    MMHeadImageView * _headerImageView; // +0x100
    MMCPLabel * _userNameLabel; // +0x108
    UILabel * _colonLabel; // +0x110
    MMUILabel * _charsCountTipLabel; // +0x118
    MMUILabel * _privacyTipsLabel; // +0x120
    CGRect _iconFrame; // +0x128
    CGRect _commentBtnFrame; // +0x148
}
- (id)initWithDataItemID:(id)arg1 iconFrame:(CGRect)arg2 commentBtnFrame:(CGRect)arg3 showKeyboard:(BOOL)arg4 withComplete:(id /* block */)arg5;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)viewModel;
- (void)setPushAnotherVCBlock:(id /* block */)arg1;
- (void)setPopFromAnotherVCBlock:(id /* block */)arg1;
- (void)setViewWillAppearBlock:(id /* block */)arg1;
- (void)setPreviewReportObj:(id)arg1;
- (void)scrollToCommment:(id)arg1;
- (void)scrollToBottomWithAnimated:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)adjustTableViewHeight;
- (void)setTabelViewBottom:(double)arg1;
- (void)resetTableViewFrame;
- (void)scrollTableViewToRow:(unsigned long long)arg1;
- (void)scrollTableViewToLastCelWithAnimate:(BOOL)arg1;
- (void)setupSubViews;
- (void)setupCommentView;
- (void)addCloseView;
- (void)addGradientMaskView;
- (void)addTableView;
- (void)setupCommentBtn;
- (void)setupCommentInputView;
- (void)addInputView;
- (void)initInputToolView;
- (void)addBlurAndAboveView;
- (void)addHeaderImageView;
- (void)addUsernameView;
- (void)addGrowTextView;
- (void)addTextTooLongLabel;
- (void)addPrivacyTipsLabel;
- (void)addExpressionView;
- (void)initEmoticonView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)didCommitText:(id)arg1;
- (void)updateViewSize;
- (void)updateTableViewSizeWithInputViewTop:(double)arg1;
- (void)textViewTextDidChange;
- (void)updateUserNameLabelColor;
- (void)updateCharsCountTipLabel;
- (void)dismissSelfControllerAnimated:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)showReplyViewControllerForCell:(id)arg1;
- (void)updateForReplyComment:(id)arg1;
- (void)updateSubviewFrame;
- (void)reloadData;
- (void)StoryCommentsCellDidClickHeadImageView:(id)arg1;
- (void)StoryCommentsCellDidClickBlurEffectView:(id)arg1;
- (void)StoryCommentsCellDidClickReplyBtn:(id)arg1;
- (void)StoryCommentCellDidTapDeleteButton:(id)arg1;
- (void)showInputViewForReplyCommentRow:(unsigned long long)arg1;
- (void)closeViewBtnClick;
- (void)closeGesture:(id)arg1;
- (void)onCommentBtnClicked;
- (void)onBubbleBtnClick;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isKeyboardPushedByPreviousVC;
- (void)setIsKeyboardPushedByPreviousVC:(BOOL)arg1;
- (CGRect)iconFrame;
- (void)setIconFrame:(CGRect)arg1;
- (CGRect)commentBtnFrame;
- (void)setCommentBtnFrame:(CGRect)arg1;
- (id)dataItemID;
- (void)setDataItemID:(id)arg1;
- (BOOL)isShowingInputView;
- (void)setShowingInputView:(BOOL)arg1;
- (id)replyComment;
- (void)setReplyComment:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)previewReportObj;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)pushAnotherVCBlock;
- (id /* block */)popFromAnotherVCBlock;
- (id /* block */)viewWillAppearBlock;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)colonLabel;
- (void)setColonLabel:(id)arg1;
- (id)charsCountTipLabel;
- (void)setCharsCountTipLabel:(id)arg1;
- (id)privacyTipsLabel;
- (void)setPrivacyTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
