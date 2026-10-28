@interface VoiceMessageCellView : CommonMessageCellView <TextFloatPreviewDelegate, VoiceTranslateMsgMgrExt, TextFloatPreviewDelegate, MsgPlayingFacadeExt, CAAnimationDelegate>
{
    UIView * m_translateView; // +0xb0
    MMRichTextCoverView * m_richTextCoverView; // +0xb8
    UILabel * m_secLabel; // +0xc0
    VoicePlayingView * m_playingImageView; // +0xc8
    UIImageView * m_recordingView; // +0xd0
    MMBadgeView * m_unreadImageView; // +0xd8
    UIButton * m_quickTransTipButton; // +0xe0
    UIButton * m_resumePlayButton; // +0xe8
    UIButton * m_playRateButton; // +0xf0
    CTRichTextView * m_oTranslateTextLabel; // +0xf8
    CTRichTextView * m_translatingTextLabel; // +0x100
    UIView * m_translatingView; // +0x108
    NSArray * m_translateMenus; // +0x110
    MMTimer * m_animationTimer; // +0x118
    UIView * m_textTranslateView; // +0x120
    RichTextView * m_textTranslateTextView; // +0x128
    MMUIActivityIndicatorView * m_textTranslateLoadingView; // +0x130
    UIImageView * m_textTranslateSuccessIconView; // +0x138
    UILabel * m_textTranslateSuccessLabel; // +0x140
    NSArray * m_textTranslateMenus; // +0x148
    BOOL m_isTranslating; // +0x150
    BOOL m_isAnimatingTranslateText; // +0x151
    BOOL _shouldAutoScrollUp; // +0x152
}
- (void)initTextTranslateView;
- (void)initTextTranslateTextView;
- (void)updateTextTranslateLoadingView;
- (void)updateTextTranslateSuccessView;
- (void)setTextTranslateText;
- (id)getTextTranslateViewMenus;
- (void)addTextTranslateViewMenus;
- (void)onDoubleTapTextTranslateView:(id)arg1;
- (void)onLongPressTextTranslateView:(id)arg1;
- (BOOL)addTextTranslateCoverViewToControllerTable;
- (void)onTapTextTranslateView:(id)arg1;
- (void)onCopyTextTranslate:(id)arg1;
- (void)onFavoriteTextTranslate:(id)arg1;
- (void)onForwardTextTranslate:(id)arg1;
- (void)onClickTextTranslate:(id)arg1;
- (void)onClickTextResultTranslateSearchMenus;
- (void)translateMsg;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)onReportTextTranslationError:(id)arg1;
- (void)onReportTextTranslationErrorWithMenuItemView:(id)arg1;
- (void)onReportTextTranslationErrorWithReason:(unsigned int)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onAppear;
- (void)onWillBeginDragging;
- (void)prepareForReuse;
- (void)initSecLabel;
- (void)initPlayingImageView;
- (void)initRecordingView;
- (void)initUnreadView;
- (double)redDotWidth;
- (void)initQuickTransTipButton;
- (void)updateQuickTransTipButtonColor;
- (void)updateQuickTransTipButtonPosition;
- (void)onVoiceTransByQuickButton:(id)arg1;
- (id)getQuickTransTipsView;
- (void)animateShowQuickTransTips;
- (void)animateHiddenQuickTransTips;
- (double)translateButtonWidth;
- (void)initResumePlayButton;
- (void)updateResumePlayButtonColor;
- (void)updateResumePlayButtonPosition;
- (void)onClickResumePlayButton:(id)arg1;
- (double)resumeButtonWidth;
- (void)initPlayRateButton;
- (void)updatePlayRateButtonColor;
- (void)updatePlayRateButtonPosition;
- (void)onClickPlayRateButton:(id)arg1;
- (double)playRateButtonWidth;
- (id)createTranslateTextLabel;
- (id)createTranslateView;
- (void)initTranslatingView;
- (void)initTranslatingTextLabel;
- (void)initTranslateView;
- (void)initTranslateTextLabel;
- (id)displayViewForImageBrowser;
- (void)onLongPressTranslateView:(id)arg1;
- (BOOL)addCoverViewToControllerTable;
- (void)onTapTranslateView:(id)arg1;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (void)reportTranslateClickAction:(unsigned int)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (id)getTranslateMenus;
- (void)addTranslateViewMenus;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onLongTouch;
- (id)operationMenuItems;
- (void)onMinimize;
- (BOOL)canShowVoiceTransMenu;
- (void)onSwitch:(id)arg1;
- (void)onVoiceTransStop:(id)arg1;
- (void)onVoiceTransClose:(id)arg1;
- (void)onVoiceTrans:(id)arg1;
- (void)onClickTranslateSearchMenus;
- (void)showVoiceTransView;
- (BOOL)shouldLayoutIfNeeded;
- (BOOL)isTouchInView:(id)arg1;
- (void)onTouchUpInside;
- (void)onClick;
- (void)onClick:(BOOL)arg1;
- (BOOL)responseUserClick;
- (BOOL)responseUserClick:(BOOL)arg1;
- (BOOL)checkVoiceState:(int)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)updateSecLabelColor;
- (void)updateVoiceLength;
- (id)getVoicePath;
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
- (void)timerEvent;
- (void)onEndPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (unsigned long long)accessibilityTraits;
- (id)additionalCustomActions;
- (BOOL)shouldAutoScrollUp;
- (void)setShouldAutoScrollUp:(BOOL)arg1;
- (void).cxx_destruct;
@end
