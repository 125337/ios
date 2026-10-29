@interface TingFlutterCommentInputController : MMUIViewController <InputControllerDelegate, MMGrowTextViewDelegate, UIGestureRecognizerDelegate, WCActionSheetDelegate, MMUIHalfScreenViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderCommentDetailTextViewMentionDelegate, WCCommentDetailViewModelDelegate>
{
    BOOL _quickEmojiSend; // +0x68
    BOOL _enableMention; // +0x69
    BOOL _isMentionDialogShowing; // +0x6a
    NSString * _quickEmojiScene; // +0x70
    unsigned long long _mentionNumLimit; // +0x78
    id <FlutterCommentMentionDelegate> _flutterCommentMentionDelegate; // +0x80
    id /* block */ _keyboardDidHideHandler; // +0x88
    WCInputController * _inputController; // +0x90
    WCCommentInputView * _inputBackView; // +0x98
    double _inputViewDefaultHeight; // +0xa0
    UIView * _textViewBackGroundView; // +0xa8
    UIView * _commentBackgroundView; // +0xb0
    WCFinderCommentDetailTextView * _growTextView; // +0xb8
    WCFinderHeadImageView * _avatarImageView; // +0xc0
    UIButton * _expressionButton; // +0xc8
    UIButton * _mentionButton; // +0xd0
    UIImageView * _iconImageView; // +0xd8
    UIView * _avatarContainerView; // +0xe0
    EmoticonBoardView * _emoticonBoardView; // +0xe8
    unsigned long long _commentTextMaxLimit; // +0xf0
    unsigned long long _commentStyleType; // +0xf8
    NSMutableArray * _pastedStrArray; // +0x100
    NSMutableArray * _commitPastedStrArray; // +0x108
    WCFinderCommentIdentityActionSheetView * _identityActionSheet; // +0x110
    CommentInputRequest * _inputRequest; // +0x118
    id /* block */ _inputResult; // +0x120
    FinderCommentInfo * _replyCommentInfo; // +0x128
    TingMusicCommentCallBack * _commentCallback; // +0x130
    NSArray * _rightButtons; // +0x138
    _NSRange _commentTextViewLatestSelectionRange; // +0x140
}
- (id)init;
- (void)dealloc;
- (id)containerView;
- (BOOL)shouldSkipNavInteractiveGesture;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)layoutIconImageView;
- (void)reloadLayout;
- (void)resetUI;
- (void)layoutGrowTextView;
- (void)activeInput:(id)arg1 resultHanlder:(id /* block */)arg2;
- (void)p_updateCommentInputView:(id)arg1;
- (void)p_updateGrowTextViewPlaceHolder:(id)arg1;
- (void)tapBecomeFirstResponder;
- (void)resignResponder;
- (void)exitEnterComment;
- (void)resignInput:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setupFlutterCallback:(id)arg1;
- (BOOL)isFinderComment:(unsigned long long)arg1;
- (BOOL)isSelfPostComment:(id)arg1;
- (BOOL)isSelfComment:(id)arg1;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (unsigned long long)getCommentIdentityType;
- (void)initEmoticonView;
- (id)expressionButton;
- (double)defaultInputBottomViewHeight;
- (void)setUpTextView;
- (void)setupInputView;
- (void)setupEmojiInputView;
- (double)getVisibleHeight;
- (void)layoutInputBackView;
- (CGSize)inputBackViewSize;
- (id)postAuthorIconImageColor;
- (id)commentIdentityNickname;
- (void)addGrowTextView;
- (id)textViewBackGroundView;
- (double)inputViewYForInputController;
- (void)updateCommentIdentityStatus:(BOOL)arg1;
- (void)updateTextViewPostCommentIdentity:(BOOL)arg1;
- (void)updateCommetIdentityView:(BOOL)arg1;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(BOOL)arg2 useVMData:(BOOL)arg3;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)clickCommentIdentityChange;
- (void)onExpressionButtonClicked:(id)arg1;
- (BOOL)commentFunctionIsSpam;
- (void)updateCommentSpamState;
- (void)clickToToast;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewDidPasted:(id)arg1 pastedText:(id)arg2;
- (void)textViewTextDidChange;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)clearCurrentInput;
- (BOOL)canCommitWithText:(id)arg1;
- (void)didCommitEmptyText;
- (id)getMentionedUserV2List:(id)arg1;
- (void)didCommitText:(id)arg1;
- (id)willPostComment:(id)arg1;
- (id)pastedStrArray;
- (void)addPastedText:(id)arg1;
- (void)cleanPastedTextArray;
- (void)didCommitPastedArray;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)p_emoticonBoardViewDidShow;
- (void)emoticonBoardViewDidShow;
- (void)emoticonBoardViewWillHide;
- (void)keyboardWillShow;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardDidShow;
- (void)keyboardWillHide;
- (void)keyboardDidHide;
- (int)keyboardAndInputerViewHeight;
- (void)showEducateDoubleIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)rightButtons;
- (id)mentionButton;
- (void)onMentionButtonClicked:(id)arg1;
- (void)updateMentionButtonState;
- (BOOL)canShowMentionButton;
- (void)commentDetailTextViewDidInputValidMentionCharacter;
- (void)showSearchMentionContainerView;
- (void)onSelectFinderContact:(id)arg1;
- (BOOL)quickEmojiSend;
- (void)setQuickEmojiSend:(BOOL)arg1;
- (id)quickEmojiScene;
- (void)setQuickEmojiScene:(id)arg1;
- (BOOL)enableMention;
- (void)setEnableMention:(BOOL)arg1;
- (unsigned long long)mentionNumLimit;
- (void)setMentionNumLimit:(unsigned long long)arg1;
- (BOOL)isMentionDialogShowing;
- (void)setIsMentionDialogShowing:(BOOL)arg1;
- (id)flutterCommentMentionDelegate;
- (void)setFlutterCommentMentionDelegate:(id)arg1;
- (id /* block */)keyboardDidHideHandler;
- (void)setKeyboardDidHideHandler:(id /* block */)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputBackView;
- (void)setInputBackView:(id)arg1;
- (double)inputViewDefaultHeight;
- (void)setInputViewDefaultHeight:(double)arg1;
- (void)setTextViewBackGroundView:(id)arg1;
- (id)commentBackgroundView;
- (void)setCommentBackgroundView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (void)setMentionButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)commentStyleType;
- (void)setCommentStyleType:(unsigned long long)arg1;
- (void)setPastedStrArray:(id)arg1;
- (id)commitPastedStrArray;
- (void)setCommitPastedStrArray:(id)arg1;
- (_NSRange)commentTextViewLatestSelectionRange;
- (void)setCommentTextViewLatestSelectionRange:(_NSRange)arg1;
- (id)identityActionSheet;
- (void)setIdentityActionSheet:(id)arg1;
- (id)inputRequest;
- (void)setInputRequest:(id)arg1;
- (id /* block */)inputResult;
- (void)setInputResult:(id /* block */)arg1;
- (id)replyCommentInfo;
- (void)setReplyCommentInfo:(id)arg1;
- (id)commentCallback;
- (void)setCommentCallback:(id)arg1;
- (void)setRightButtons:(id)arg1;
- (void).cxx_destruct;
@end

