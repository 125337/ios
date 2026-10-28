@interface SharePreConfirmSheetView : MMPageSheetBaseView <ChatroomProfileViewLayoutDelegate, IMMGrowTextViewExt, InputControllerDelegate, WCGroupUndoneEduViewDelegate, MMSceneDelegateExt, UIGestureRecognizerDelegate, QuickReplyFullscreenAnimateExt, MsgFullScreenInputDelegate, MMPageSheetGestureRecognizerDelegate, MsgImgFullScreenViewControllerDelegate>
{
    NSString * m_nsLastTextViewText; // +0x8
    SharePreConfirmSuccessView * m_successView; // +0x10
    BOOL _bGroupUndoneFlag; // +0x18
    BOOL _isClickedSend; // +0x19
    BOOL _isAnimating; // +0x1a
    BOOL _hideTitleView; // +0x1b
    BOOL _isFakeContact; // +0x1c
    BOOL _canShowMsgList; // +0x1d
    BOOL _bHideContentView; // +0x1e
    BOOL _bShowWithRichtext; // +0x1f
    BOOL _bShowGroupUndoneConfig; // +0x20
    BOOL _bShowTextView; // +0x21
    BOOL _isAppearing; // +0x22
    BOOL _isDismissed; // +0x23
    unsigned int _status; // +0x24
    id <SharePreConfirmSheetViewDelegate> _delegate; // +0x28
    NSArray * _arrContacts; // +0x30
    NSArray * _arrMsgs; // +0x38
    NSArray * _originArrMsgs; // +0x40
    NSString * _shareMsgCountFormat; // +0x48
    WCGroupUndoneShareReport * _groupUndoneShareReport; // +0x50
    NSString * _title; // +0x58
    NSString * _contentTitle; // +0x60
    unsigned long long _customRichtextParseType; // +0x68
    NSString * _textViewPlaceholder; // +0x70
    NSString * _confirmButtonTitle; // +0x78
    NSString * _confirmButtonTips; // +0x80
    NSString * _sendSuccessText; // +0x88
    NSString * _backToAppString; // +0x90
    NSString * _stayAtWeChatString; // +0x98
    unsigned long long _supportedOrientationMask; // +0xa0
    UIView * _containerView; // +0xa8
    UIScrollView * _contentScrollView; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    SharePreConfirmHeadView * _headView; // +0xc0
    UIView * _contentView; // +0xc8
    UIView * _contentBackgroundView; // +0xd0
    UIView * _groupUndoneContentView; // +0xd8
    MMGrowTextView * _textView; // +0xe0
    UIView * _textBackgroundView; // +0xe8
    UIView * _bottomView; // +0xf0
    UIButton * _cancelButton; // +0xf8
    UIButton * _confirmButton; // +0x100
    UIButton * _expressionButton; // +0x108
    UIButton * _sendButton; // +0x110
    UIButton * _resignButton; // +0x118
    EmoticonBoardView * _emoticonBoardView; // +0x120
    WCInputController * _inputController; // +0x128
    UITapGestureRecognizer * _tapGesture; // +0x130
    MsgFullScreenInputAnimationController * _fullScreenInputTransition; // +0x138
    MessagePageSheetTransition * _pageSheetTransition; // +0x140
    ChatroomProfileView * _chatroomProfileViewInfo; // +0x148
    MMUIViewController * _preViewController; // +0x150
    BaseMsgContentLogicController * _msgLogicController; // +0x158
}
- (void)viewChatroomProfile:(id)arg1;
- (void)viewMsgContentList:(id)arg1;
- (id)titleViewWithContact:(id)arg1;
- (void)viewMultiMsg;
- (void)viewContactProfile:(id)arg1;
- (void)viewWeAppMsg;
- (void)viewRecordMsg;
- (void)viewTingListMsg;
- (void)viewTingAudioMsg;
- (void)viewTingChatRoomMsg;
- (void)viewFinderNameCardMsg;
- (void)viewFinderShopWindowMsg;
- (void)viewFileMsg;
- (void)viewImageMsg;
- (void)viewEmoticonMsg;
- (void)viewLinkMsg;
- (void)viewLocationMsg;
- (void)viewTextMsg;
- (void)viewGameLifeNameCardMsg;
- (void)viewFinderProductMsg;
- (void)viewProductMsg;
- (void)viewNoteMsg;
- (void)viewBecomeGuardianDisplayMsg;
- (void)viewAuthorizeRequestDisplayMsg;
- (void)viewShareCardMsg;
- (void)viewFinderMsg;
- (void)viewFinderLiveMsg;
- (void)viewLiteAppMsg;
- (id)currentViewController;
- (void)showPreViewController:(id)arg1;
- (void)openWeApp:(id)arg1;
- (void)openShareCard:(id)arg1;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (double)profileViewHeadLength;
- (void)openContactInfo:(id)arg1;
- (id)genContentView;
- (BOOL)canShowContentBackground;
- (CGRect)getContentImageViewFrame;
- (id)getContentImageView;
- (id)formContentViewByText:(id)arg1;
- (id)formContentViewByText:(id)arg1 previewSel:(SEL)arg2;
- (id)formContentViewByText:(id)arg1 image:(id)arg2 previewSel:(SEL)arg3;
- (id)formContentViewByMsg:(id)arg1;
- (id)formContentViewByMsg:(id)arg1 previewSel:(SEL)arg2;
- (id)formContentViewByMsg:(id)arg1 showImage:(BOOL)arg2 previewSel:(SEL)arg3;
- (id)formContentViewByText:(id)arg1 imageView:(id)arg2 previewSel:(SEL)arg3;
- (void)viewContentView:(id)arg1;
- (id)formMultiMsgContentView;
- (id)formRecordMsgContentView:(id)arg1;
- (id)formMsgStyleContentView:(id)arg1 previewSel:(SEL)arg2;
- (id)formEmoticonContentView:(id)arg1;
- (id)formImageContentView:(id)arg1;
- (id)formFinderShareContentView:(id)arg1;
- (id)formFinderSharePureTextView:(id)arg1;
- (id)formFinderNameCardContentView:(id)arg1;
- (id)formFinderLiveShareContentView:(id)arg1;
- (id)formLinkContentView:(id)arg1;
- (id)formBigPicReaderContentView:(id)arg1;
- (BOOL)hasWeAppRunning;
- (BOOL)hasTingAudioRunning;
- (BOOL)hasLiveRunning;
- (CGSize)calculateFitSize:(CGSize)arg1 maxSize:(CGSize)arg2 minSize:(CGSize)arg3;
- (CGSize)getImageDisplaySize:(CGSize)arg1;
- (void)startDownloadWxWorkThumbImage:(id)arg1;
- (id)init;
- (id)initWithStatus:(unsigned int)arg1;
- (void)dealloc;
- (void)setForwardThumbData:(id)arg1;
- (void)updateTableFooter;
- (void)recoverConfirmButton;
- (void)showSendSuccessView;
- (id)getInputText;
- (id)getOriginalInputText;
- (id)getTextView;
- (BOOL)footerViewTotalVisible;
- (id)sendSuccessText;
- (id)backToAppString;
- (id)stayAtWeChatString;
- (id)groupUndoneShareReport;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)pageSheetDidShow;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onPageSheetContainerBgTapped;
- (BOOL)resignFirstResponder;
- (void)initConfigs;
- (void)initTitleLabel;
- (void)initHeadView;
- (void)initContentView;
- (void)initGroupUndoneView;
- (void)initTextView;
- (void)initInputController;
- (void)initInputToolView;
- (void)onResignButtonClicked;
- (void)initEmoticonView;
- (void)initBottomView;
- (void)initView;
- (void)layoutUI;
- (void)updateDetailViewHeight;
- (void)updateDetailViewHeightForIpad;
- (void)updateConfirmButtonState:(BOOL)arg1;
- (id)getConfirmTitle:(BOOL)arg1;
- (unsigned long long)optionWithCurve:(long long)arg1;
- (BOOL)isLandscapeStyle;
- (void)handleTap:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)onClickGroupUndoneTip:(id)arg1;
- (void)onClickGroupUndoneCheckbox:(id)arg1;
- (void)onClickBackToApp;
- (void)onClickStayAtWeChat;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onTextViewChange:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)emoticonBoardViewDidShow;
- (void)emoticonBoardViewWillHide;
- (double)getVisibleHeight;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (BOOL)getInputControllerSendButtonCanSendState;
- (void)onGUEClose:(id)arg1;
- (void)onGUEConfirm:(id)arg1;
- (void)onMainSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onQuickReplyFullscreenAnimateStart;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (id)fullScreenInputTransition;
- (void)jumpToFullScreenVC;
- (void)onExitWithAttributedText:(id)arg1 selectedRange:(_NSRange)arg2 showKeyboard:(BOOL)arg3 showEmoticon:(BOOL)arg4;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)pageSheetGestureRecognizerGragButNotCloseCallBack;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrContacts;
- (void)setArrContacts:(id)arg1;
- (id)arrMsgs;
- (void)setArrMsgs:(id)arg1;
- (id)originArrMsgs;
- (void)setOriginArrMsgs:(id)arg1;
- (id)shareMsgCountFormat;
- (void)setShareMsgCountFormat:(id)arg1;
- (BOOL)bGroupUndoneFlag;
- (void)setBGroupUndoneFlag:(BOOL)arg1;
- (void)setGroupUndoneShareReport:(id)arg1;
- (BOOL)isClickedSend;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)hideTitleView;
- (void)setHideTitleView:(BOOL)arg1;
- (BOOL)isFakeContact;
- (void)setIsFakeContact:(BOOL)arg1;
- (BOOL)canShowMsgList;
- (void)setCanShowMsgList:(BOOL)arg1;
- (BOOL)bHideContentView;
- (void)setBHideContentView:(BOOL)arg1;
- (id)contentTitle;
- (void)setContentTitle:(id)arg1;
- (BOOL)bShowWithRichtext;
- (void)setBShowWithRichtext:(BOOL)arg1;
- (unsigned long long)customRichtextParseType;
- (void)setCustomRichtextParseType:(unsigned long long)arg1;
- (BOOL)bShowGroupUndoneConfig;
- (void)setBShowGroupUndoneConfig:(BOOL)arg1;
- (BOOL)bShowTextView;
- (void)setBShowTextView:(BOOL)arg1;
- (id)textViewPlaceholder;
- (void)setTextViewPlaceholder:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)confirmButtonTips;
- (void)setConfirmButtonTips:(id)arg1;
- (void)setSendSuccessText:(id)arg1;
- (void)setBackToAppString:(id)arg1;
- (void)setStayAtWeChatString:(id)arg1;
- (unsigned long long)supportedOrientationMask;
- (void)setSupportedOrientationMask:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)contentBackgroundView;
- (void)setContentBackgroundView:(id)arg1;
- (id)groupUndoneContentView;
- (void)setGroupUndoneContentView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textBackgroundView;
- (void)setTextBackgroundView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)resignButton;
- (void)setResignButton:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void)setFullScreenInputTransition:(id)arg1;
- (id)pageSheetTransition;
- (void)setPageSheetTransition:(id)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)chatroomProfileViewInfo;
- (void)setChatroomProfileViewInfo:(id)arg1;
- (id)preViewController;
- (void)setPreViewController:(id)arg1;
- (id)msgLogicController;
- (void)setMsgLogicController:(id)arg1;
- (void).cxx_destruct;
@end
