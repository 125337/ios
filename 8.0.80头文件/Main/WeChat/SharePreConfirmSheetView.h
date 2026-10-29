@interface SharePreConfirmSheetView : MMPageSheetBaseView <ChatroomProfileViewLayoutDelegate, MMImgFullScreenViewControllerDelegate, IMMGrowTextViewExt, InputControllerDelegate, WCGroupUndoneEduViewDelegate, MMSceneDelegateExt, UIGestureRecognizerDelegate, QuickReplyFullscreenAnimateExt, MsgFullScreenInputDelegate, MMPageSheetGestureRecognizerDelegate, WXKeyBoardActiveReceiver, MsgImgFullScreenViewControllerDelegate>
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
    BOOL _showLargeFileDeleteConfirm; // +0x22
    BOOL _isAppearing; // +0x23
    BOOL _isDismissed; // +0x24
    BOOL _showDictationIconWhenInactive; // +0x25
    unsigned int _status; // +0x28
    id <SharePreConfirmSheetViewDelegate> _delegate; // +0x30
    NSArray * _arrContacts; // +0x38
    NSArray * _arrMsgs; // +0x40
    NSArray * _originArrMsgs; // +0x48
    NSString * _shareMsgCountFormat; // +0x50
    WCGroupUndoneShareReport * _groupUndoneShareReport; // +0x58
    NSString * _title; // +0x60
    NSString * _contentTitle; // +0x68
    unsigned long long _customRichtextParseType; // +0x70
    NSString * _textViewPlaceholder; // +0x78
    NSString * _textViewPrefilledText; // +0x80
    NSString * _confirmButtonTitle; // +0x88
    NSString * _confirmButtonTips; // +0x90
    NSString * _sendSuccessText; // +0x98
    NSString * _backToAppString; // +0xa0
    NSString * _stayAtWeChatString; // +0xa8
    unsigned long long _supportedOrientationMask; // +0xb0
    NSDictionary * _reportParams; // +0xb8
    UIView * _containerView; // +0xc0
    UIScrollView * _contentScrollView; // +0xc8
    MMUILabel * _titleLabel; // +0xd0
    SharePreConfirmHeadView * _headView; // +0xd8
    UIView * _contentView; // +0xe0
    UIView * _contentBackgroundView; // +0xe8
    UIView * _groupUndoneContentView; // +0xf0
    MMGrowTextView * _textView; // +0xf8
    UIView * _textBackgroundView; // +0x100
    MsgBigFileDeleteSelectView * _bigFileConfrimView; // +0x108
    UIView * _bottomView; // +0x110
    UIButton * _cancelButton; // +0x118
    UIButton * _confirmButton; // +0x120
    UIButton * _expressionButton; // +0x128
    UIButton * _sendButton; // +0x130
    UIButton * _resignButton; // +0x138
    EmoticonBoardView * _emoticonBoardView; // +0x140
    WCInputController * _inputController; // +0x148
    UITapGestureRecognizer * _tapGesture; // +0x150
    MsgFullScreenInputAnimationController * _fullScreenInputTransition; // +0x158
    MessagePageSheetTransition * _pageSheetTransition; // +0x160
    NSString * _hotwordContextKey; // +0x168
    NSNumber * _confirmScreenFromForReport; // +0x170
    ChatroomProfileView * _chatroomProfileViewInfo; // +0x178
    MMUIViewController * _preViewController; // +0x180
    BaseMsgContentLogicController * _msgLogicController; // +0x188
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
- (void)viewPhotoAccountNameShareCardMsg;
- (void)viewFinderMsg;
- (void)viewFinderLiveMsg;
- (void)viewLiteAppMsg;
- (id)currentViewController;
- (void)showPreViewController:(id)arg1;
- (void)openWeApp:(id)arg1;
- (void)openShareCard:(id)arg1;
- (void)openPhotoAccountNameShareCard:(id)arg1;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMMImgPreviewDataRequired:(id)arg1;
- (double)profileViewHeadLength;
- (void)openContactInfo:(id)arg1;
- (void)viewChatBotShareMsg;
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
- (BOOL)updateMessagePreviewLayout:(id)arg1 referenceWidth:(double)arg2;
- (id)formEmoticonContentView:(id)arg1;
- (id)formImageContentView:(id)arg1;
- (id)formFinderShareContentView:(id)arg1;
- (id)formFinderSharePureTextView:(id)arg1;
- (id)formFinderNameCardContentView:(id)arg1;
- (id)formFinderLiveShareContentView:(id)arg1;
- (id)formLinkContentView:(id)arg1;
- (id)formMediaGroupContentView:(id)arg1;
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
- (void)initBigFileConfirmView;
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
- (BOOL)isForwardLargeFile;
- (id)largeFileMessages;
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
- (id)supportMessageTypes;
- (unsigned int)activeScene;
- (void)sendMessage:(id)arg1;
- (BOOL)startDictationByKeyBoard;
- (BOOL)stopDictationByKeyBoard;
- (id)getCurrentChatName;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewDidStopVoiceInput:(id)arg1;
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
- (BOOL)showLargeFileDeleteConfirm;
- (void)setShowLargeFileDeleteConfirm:(BOOL)arg1;
- (id)textViewPlaceholder;
- (void)setTextViewPlaceholder:(id)arg1;
- (id)textViewPrefilledText;
- (void)setTextViewPrefilledText:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)confirmButtonTips;
- (void)setConfirmButtonTips:(id)arg1;
- (void)setSendSuccessText:(id)arg1;
- (void)setBackToAppString:(id)arg1;
- (void)setStayAtWeChatString:(id)arg1;
- (unsigned long long)supportedOrientationMask;
- (void)setSupportedOrientationMask:(unsigned long long)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
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
- (id)bigFileConfrimView;
- (void)setBigFileConfrimView:(id)arg1;
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
- (BOOL)showDictationIconWhenInactive;
- (void)setShowDictationIconWhenInactive:(BOOL)arg1;
- (id)hotwordContextKey;
- (void)setHotwordContextKey:(id)arg1;
- (id)confirmScreenFromForReport;
- (void)setConfirmScreenFromForReport:(id)arg1;
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
