@interface TextMessageCellView : CommonMessageCellView <ILinkEventExt, RichTextLayoutDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, TextFloatPreviewDelegate, IMsgRevokeExt, IMsgExt, MMInputMsgReferDelegate, MMRichTextCoverViewDelegate, MMRTCMenuEventDelegate, IWCGroupUndoneExt>
{
    RichTextView * m_richTextView; // +0xb0
    MMTipsViewController * m_oTranslateIntroView; // +0xb8
    WCUIActionSheet * m_uiActionSheet; // +0xc0
    NavigateLogicController * m_navigationLogic; // +0xc8
    UIView * m_translateView; // +0xd0
    RichTextView * m_translateRichTextView; // +0xd8
    MMUIActivityIndicatorView * m_oTranslateLoadingView; // +0xe0
    UILabel * m_translateSuccessLabel; // +0xe8
    UIImageView * m_translateSuccessIconView; // +0xf0
    NSArray * m_translateMenus; // +0xf8
    TextFloatViewController * m_oFloatViewController; // +0x100
    UIButton * m_moreButton; // +0x108
    UIButton * m_autoTransButton; // +0x110
    UILabel * m_aiReplyLabel; // +0x118
    BOOL m_bClickLink; // +0x120
    BOOL _shouldAutoScrollUp; // +0x121
    UIButton * _jumpGroupNoticeBtn; // +0x128
    NSDate * _visibleDate; // +0x130
}
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (id)getRichTextView;
- (id)getAutoTransButton;
- (void)layoutContentView;
- (void)updateHoverStyle;
- (void)initTranslateView;
- (void)initTranslateRichTextView;
- (void)updateTranslateStatusButton;
- (void)updateTranslateSuccessView;
- (void)setTranslateText;
- (void)initAIReplyLabel;
- (void)onTapTranslateView:(id)arg1;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onClickTranslateSearchMenus;
- (id)getTranslateMenuItems;
- (void)addTranslateViewMenus;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)onCopyTranslate:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onFavoriteTranslate:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onClearTranslateCache:(id)arg1;
- (BOOL)isNetworkAvailable;
- (void)updateContentOffset;
- (void)updateStatus;
- (void)setHighlighted:(BOOL)arg1;
- (double)contentViewCenterY;
- (void)setNeedsDisplay;
- (void)willMoveToWindow:(id)arg1;
- (void)onDisappear;
- (void)onWillBeginDragging;
- (void)initRichTextView;
- (void)setRichTextViewBgColor:(id)arg1;
- (void)initMoreButton;
- (id)jumpGroupNoticeBtn;
- (void)initAutoTransButton;
- (void)onClickFullBtn;
- (void)onClickAutoTransButton;
- (id)getPreviewLinkForLocation:(CGPoint)arg1 inView:(id)arg2;
- (CGRect)getPreviewLinkFrameForLocation:(CGPoint)arg1 inView:(id)arg2;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (BOOL)preventLongPressLink;
- (BOOL)translatePreventLongPressLink;
- (void)onCopyLinkText:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (id)getFingertipSearchItem;
- (BOOL)canShowTranslateMenuItem;
- (void)onSolitaire:(id)arg1;
- (void)onAppButtonClicked:(id)arg1;
- (void)tryToRecordCopyAtUserListInfoWithCopyText:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onTranslateMsg:(id)arg1;
- (void)translateMsg;
- (void)onSetTranslateLanguage:(id)arg1;
- (void)onReportTranslationError:(id)arg1;
- (void)onReportTranslationErrorWithMenuItemView:(id)arg1;
- (void)onReportTranslationErrorWithReason:(unsigned int)arg1;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onSchedule:(id)arg1;
- (void)onShowMsgReplyMenuItem:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onMenuHide;
- (void)onFingertipSearch;
- (BOOL)canShowSpeakTextItem;
- (void)onSpeakText;
- (BOOL)supportDoubleTap;
- (BOOL)autoHighlight;
- (void)onTouchDownRepeat;
- (void)onLongTouch:(CGPoint)arg1;
- (void)onTouchUpInside;
- (void)showFloatPreviewForContentText;
- (id)createTextFloatView;
- (void)showFloatPreviewWithForceUseOriginText:(BOOL)arg1 fromRefer:(BOOL)arg2;
- (void)onClickMoreButton:(id)arg1;
- (void)onWindowHide;
- (id)getMediaWrap;
- (id)getViewController;
- (void)onFloatPreviewLongPress;
- (void)onFloatPreviewMenuHidden;
- (void)onFloatPreviewMenuCopy:(id)arg1;
- (void)onFloatPreviewMenuSelectAll;
- (void)onFloatPreviewMenuForward;
- (void)onFloatPreviewMenuSearch:(id)arg1;
- (void)onClickReferButton;
- (void)onFloatPreviewMenuPartRefer:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)addMagicTapActions:(id)arg1;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void)updateCellViewAccessibility;
- (void)accessibilityElementDidBecomeFocused;
- (id)additionalCustomActions;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkHighlighted:(BOOL)arg1 url:(id)arg2 frame:(CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onBankCardNumberLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onBankCardNumberClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)longPressOnLink:(id)arg1;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onAddressClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchWeAppBoxClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)pressIntoSelectCopyStatusWithTranlateText:(BOOL)arg1 point:(CGPoint)arg2;
- (BOOL)highLightSearchKeyWords:(id)arg1;
- (void)highlightMsgAnimatedWithHighlightTextRange:(_NSRange)arg1;
- (BOOL)addCoverViewToControllerTable:(BOOL)arg1;
- (id)getOperateMenuItem;
- (void)handleReportExposureForReferMsg:(id)arg1 timeIntervale:(long long)arg2;
- (void)onClickAsRefer;
- (void)statCopyText:(id)arg1;
- (id)getSelectRectsWithRange:(_NSRange)arg1;
- (id)getStringWithRange:(_NSRange)arg1;
- (id)getTextString;
- (_NSRange)getTouchRangeWithTouchPoint:(CGPoint)arg1;
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2;
- (float)getLineHeight;
- (BOOL)isEmojiLocation:(unsigned long long)arg1 bStart:(BOOL)arg2;
- (id)delegateView;
- (id)getRichTextViewForDelegate;
- (id)getCurrentMessageWrap;
- (void)menuResponder:(id)arg1 didCopyText:(id)arg2;
- (void)onWCGroupLatestRoomDescChanged:(long long)arg1 room:(id)arg2;
- (void)notifyAutoTranslateStart;
- (void)notifyAutoTranslateStop;
- (BOOL)isGroupNotice;
- (void)setJumpGroupNoticeBtn:(id)arg1;
- (id)visibleDate;
- (void)setVisibleDate:(id)arg1;
- (BOOL)shouldAutoScrollUp;
- (void)setShouldAutoScrollUp:(BOOL)arg1;
- (void).cxx_destruct;
@end
