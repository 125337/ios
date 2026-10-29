@interface VoiceMessageCellView : CommonMessageCellView <TextFloatPreviewDelegate, IMsgRevokeExt, VoiceTranslateMsgMgrExt, TextFloatPreviewDelegate, MsgPlayingFacadeExt, CAAnimationDelegate>
{
    UIView * m_translateView; // +0xa8
    UILabel * m_secLabel; // +0xb0
    UIImageView * m_playingImageView; // +0xb8
    UIImageView * m_recordingView; // +0xc0
    MMBadgeView * m_unreadImageView; // +0xc8
    UIButton * m_quickTransTipButton; // +0xd0
    UIButton * m_resumePlayButton; // +0xd8
    CTRichTextView * m_oTranslateTextLabel; // +0xe0
    CTRichTextView * m_translatingTextLabel; // +0xe8
    UIView * m_translatingView; // +0xf0
    NSArray * m_translateMenus; // +0xf8
    MMTimer * m_animationTimer; // +0x100
    UIView * m_textTranslateView; // +0x108
    RichTextView * m_textTranslateTextView; // +0x110
    MMUIActivityIndicatorView * m_textTranslateLoadingView; // +0x118
    UIImageView * m_textTranslateSuccessIconView; // +0x120
    UILabel * m_textTranslateSuccessLabel; // +0x128
    NSArray * m_textTranslateMenus; // +0x130
    BOOL m_isTranslating; // +0x138
    BOOL m_isAnimatingTranslateText; // +0x139
}
- (void)initTextTranslateView;
- (void)initTextTranslateTextView;
- (void)updateTextTranslateLoadingView;
- (void)updateTextTranslateSuccessView;
- (void)setTextTranslateText;
- (void)addTextTranslateViewMenus;
- (void)onDoubleTapTextTranslateView:(id)arg1;
- (void)onLongPressTextTranslateView:(id)arg1;
- (void)onTapTextTranslateView:(id)arg1;
- (void)onCopyTextTranslate:(id)arg1;
- (void)onFavoriteTextTranslate:(id)arg1;
- (void)onForwardTextTranslate:(id)arg1;
- (void)onClickTextTranslate:(id)arg1;
- (void)translateMsg;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)onReportTextTranslationError:(id)arg1;
- (void)onReportTextTranslationErrorWithMenuItemView:(id)arg1;
- (void)onReportTextTranslationErrorWithReason:(unsigned int)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onAppear;
- (void)initSecLabel;
- (void)initPlayingImageView;
- (void)initRecordingView;
- (void)initUnreadView;
- (double)redDotWidth;
- (void)initQuickTransTipButton;
- (void)updateQuickTransTipButtonColor;
- (void)updateQuickTransTipButtonPosition;
- (void)onVoiceTransByQuickButton:(id)arg1;
- (void)animateShowQuickTransTips;
- (void)animateHiddenQuickTransTips;
- (double)translateButtonWidth;
- (void)initResumePlayButton;
- (void)updateResumePlayButtonColor;
- (void)updateResumePlayButtonPosition;
- (void)onClickResumePlayButton:(id)arg1;
- (double)resumeButtonWidth;
- (id)createTranslateTextLabel;
- (id)createTranslateView;
- (void)initTranslatingView;
- (void)initTranslatingTextLabel;
- (void)initTranslateView;
- (void)initTranslateTextLabel;
- (id)displayViewForImageBrowser;
- (void)onLongPressTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)reportTranslateClickAction:(unsigned int)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)addTranslateViewMenus;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onLongTouch;
- (id)operationMenuItems;
- (BOOL)canShowVoiceTransMenu;
- (void)onSwitch:(id)arg1;
- (void)onVoiceTransStop:(id)arg1;
- (void)onVoiceTransClose:(id)arg1;
- (void)onVoiceTrans:(id)arg1;
- (void)showVoiceTransView;
- (BOOL)shouldLayoutIfNeeded;
- (BOOL)isTouchInView:(id)arg1;
- (void)onTouchUpInside;
- (void)onClick;
- (BOOL)responseUserClick;
- (BOOL)checkVoiceState:(int)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)updateSecLabelColor;
- (void)updateVoiceLength;
- (id)getVoicePath;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onWindowHide;
- (id)getMediaWrap;
- (id)getViewController;
- (void)startTranslatingAnimation;
- (void)startTextAnimation;
- (void)stopTextAnimation;
- (void)updateTranslateText;
- (void)setTranslatingText:(id)arg1;
- (void)setTranslateText:(id)arg1;
- (void)animateSetTranslateText:(id)arg1;
- (void)doTranslateTextLineAnimation:(id)arg1 lineNumber:(int)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)OnVoiceTranslateBegin:(id)arg1;
- (void)OnVoiceTranslateSuccess:(id)arg1;
- (void)OnVoiceTranslateFail:(id)arg1;
- (void)onExtChatBackgroundChanged:(id)arg1;
- (void)onBeginPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (void)onEndPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (unsigned long long)accessibilityTraits;
- (id)additionalCustomActions;
- (void).cxx_destruct;
@end

