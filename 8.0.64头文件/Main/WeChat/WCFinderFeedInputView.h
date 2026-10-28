@interface WCFinderFeedInputView : UIView <InputControllerDelegate, WCActionSheetDelegate, EmoticonSearchViewControllerDelegate, MMImagePickerManagerDelegate>
{
    BOOL _hasMask; // +0x8
    id <WCFinderFeedInputViewDelegate> _delegate; // +0x10
    id <WCFinderFeedInputCommentPostDelegate> _postDelegate; // +0x18
    UIView * _inputView; // +0x20
    WCInputController * _inputController; // +0x28
    EmoticonBoardView * _emoticonBoardView; // +0x30
    MMGrowTextView * _growTextView; // +0x38
    UILabel * _overMaxCharLimitTipsLabel; // +0x40
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
    WCFinderFeedInputViewOption * _option; // +0xa8
    UIImageView * _commentImageView; // +0xb0
    MMUIButton * _commentImageDeleteButton; // +0xb8
    UIButton * _postImageCommentButton; // +0xc0
}
+ (void)showForDataItemTid:(id)arg1 nonceID:(id)arg2 identitySwitchType:(unsigned long long)arg3 postCommentScene:(int)arg4 scrollView:(id)arg5 positioningView:(id)arg6;
- (id)initWithFrame:(CGRect)arg1 dataItemTid:(id)arg2 nonceID:(id)arg3 currentFinderContact:(id)arg4 identitySwitchType:(unsigned long long)arg5 postCommentScene:(int)arg6 optionalParams:(id)arg7;
- (void)updateFeedTID:(id)arg1 nonceID:(id)arg2;
- (void)updateInputOption:(id)arg1;
- (void)showReplyComment:(id)arg1 inScrollView:(id)arg2 offsetY:(double)arg3 dismissBlock:(id /* block */)arg4;
- (void)showInScrollView:(id)arg1 offsetY:(double)arg2 dismissBlock:(id /* block */)arg3;
- (void)setUpTextView;
- (void)setupInputView;
- (void)initEmoticonView;
- (void)addGrowTextView;
- (void)updateEmojiKeyboardView;
- (void)updateSwitchIndentity;
- (id)createIndetitySwitchView;
- (void)onClickPostImageCommentButton:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)arg1;
- (BOOL)canPostBidEmoticonComment;
- (BOOL)canPostImageComment;
- (BOOL)hasSelectedEmoticon;
- (BOOL)hasSelectedImage;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)_handleCommitWithText:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)handleExcessiveWrap;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)adjustInputBackViewLayout;
- (void)onSelectEmoticonSearchItem;
- (void)exitInput;
- (void)exitInputWithHasComment:(BOOL)arg1;
- (void)clearInputContent;
- (id)currentReplyComment;
- (double)getVisibleHeight;
- (void)onTapCommentImageDeleteButton:(id)arg1;
- (void)onTapCommentImageView:(id)arg1;
- (void)onSwitchIdentity;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateCommentIdentityView;
- (void)updateCommentIdentity;
- (void)updateIdentityAvatar;
- (void)_handleDidSelectEmoticon:(id)arg1;
- (void)_handleDidSelectImage:(id)arg1;
- (void)_handleUnSelectCommentImage;
- (void)_showCommentImageWithImage:(id)arg1 contentMode:(long long)arg2;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)updateGrowTextViewPlaceholder;
- (id)_createMaxCharLimitLabel;
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
- (id)overMaxCharLimitTipsLabel;
- (void)setOverMaxCharLimitTipsLabel:(id)arg1;
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
- (id)option;
- (void)setOption:(id)arg1;
- (id)commentImageView;
- (void)setCommentImageView:(id)arg1;
- (id)commentImageDeleteButton;
- (void)setCommentImageDeleteButton:(id)arg1;
- (id)postImageCommentButton;
- (void)setPostImageCommentButton:(id)arg1;
- (void).cxx_destruct;
@end
