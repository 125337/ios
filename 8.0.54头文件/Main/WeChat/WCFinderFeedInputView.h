@interface WCFinderFeedInputView : UIView <InputControllerDelegate, WCActionSheetDelegate>
{
    BOOL _hasMask; // +0x8
    NSString * _nickname; // +0x10
    id <WCFinderFeedInputViewDelegate> _delegate; // +0x18
    id <WCFinderFeedInputCommentPostDelegate> _postDelegate; // +0x20
    UIView * _inputView; // +0x28
    WCInputController * _inputController; // +0x30
    EmoticonBoardView * _emoticonBoardView; // +0x38
    MMGrowTextView * _growTextView; // +0x40
    UIButton * _expressionButton; // +0x48
    UIButton * _backGroundButton; // +0x50
    double _scrollViewContentOffset; // +0x58
    WCFinderFeedInputViewModel * _viewModel; // +0x60
    id /* block */ _dismissBlock; // +0x68
    UIView * _textViewBackGroundView; // +0x70
    unsigned long long _commentTextMaxLimit; // +0x78
    unsigned long long _commentInputMaxLineWrap; // +0x80
    UIImageView * _identitySwitchView; // +0x88
    MMHeadImageView * _avatarImageView; // +0x90
    UITapGestureRecognizer * _identitySwitchRecognizer; // +0x98
    WCFinderCommentIdentityActionSheetView * _identityActionSheet; // +0xa0
}
+ (void)showForDataItemTid:(id)arg1 nonceID:(id)arg2 identitySwitchType:(unsigned long long)arg3 postCommentScene:(int)arg4 scrollView:(id)arg5 positioningView:(id)arg6;
- (id)initWithFrame:(CGRect)arg1 dataItemTid:(id)arg2 nonceID:(id)arg3 currentFinderContact:(id)arg4 identitySwitchType:(unsigned long long)arg5 postCommentScene:(int)arg6;
- (void)updateFeedTID:(id)arg1 nonceID:(id)arg2;
- (void)showReplyComment:(id)arg1 inScrollView:(id)arg2 offsetY:(double)arg3 dismissBlock:(id /* block */)arg4;
- (void)showInScrollView:(id)arg1 offsetY:(double)arg2 dismissBlock:(id /* block */)arg3;
- (void)setUpTextView;
- (void)setupInputView;
- (void)initEmoticonView;
- (void)addGrowTextView;
- (void)createEmojiKeyboardView;
- (void)updateSwitchIndentity;
- (id)createIndetitySwitchView;
- (void)layoutViewWithStyle;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)arg1;
- (void)didCommitText:(id)arg1;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)handleExcessiveWrap;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)exitInput;
- (void)exitInputWithHasComment:(BOOL)arg1;
- (void)clearInputContent;
- (id)currentReplyComment;
- (double)getVisibleHeight;
- (void)onSwitchIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateCommentIdentityView;
- (void)updateCommentIdentity;
- (void)updateIdentityAvatar;
- (void)updateGrowTextViewPlaceholder;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (BOOL)hasMask;
- (void)setHasMask:(BOOL)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)backGroundButton;
- (void)setBackGroundButton:(id)arg1;
- (double)scrollViewContentOffset;
- (void)setScrollViewContentOffset:(double)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)textViewBackGroundView;
- (void)setTextViewBackGroundView:(id)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (unsigned long long)commentInputMaxLineWrap;
- (void)setCommentInputMaxLineWrap:(unsigned long long)arg1;
- (id)identitySwitchView;
- (void)setIdentitySwitchView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)identitySwitchRecognizer;
- (void)setIdentitySwitchRecognizer:(id)arg1;
- (id)identityActionSheet;
- (void)setIdentityActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

