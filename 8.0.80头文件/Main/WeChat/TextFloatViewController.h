@interface TextFloatViewController : MMUIViewController <TransitioningAnimationDelegate, MMRTCMenuResponderDelegate, MMTextFloatBottomToolViewDelegate, MMRTCMenuEventDelegate, WAAppContactPreLoaderProtocol, IShortCutExt, IMsgRevokeExt, ILinkEventExt, scrollViewDelegate, MMRichTextSelectEventDelegate>
{
    UIView * m_oBackView; // +0x70
    UIButton * m_view; // +0x78
    MMScrollView * m_oScrollView; // +0x80
    CTRichTextView * m_oRichTextView; // +0x88
    id <ILinkEventExt> m_linkDelegate; // +0x90
    id <TextFloatPreviewDelegate> m_delegate; // +0x98
    BOOL _bNeedRebuildTextView; // +0xa0
    BOOL m_bHidden; // +0xa1
    MMRichTextCoverView * m_oRichTextCoverView; // +0xa8
    CrossfadeAnimationController * m_transitionInstance; // +0xb0
    BOOL m_allowAutorotate; // +0xb8
    CGRect m_originFrame; // +0xc0
    MMTextFloatBottomToolView * m_bottomToolView; // +0xe0
    BOOL m_bHadDragHiddeToolView; // +0xe8
    double m_currentOffset; // +0xf0
    BOOL _forbidShare; // +0xf8
    BOOL _forbidOperate; // +0xf9
    BOOL _forbidCopy; // +0xfa
    BOOL _fromRefer; // +0xfb
    BOOL _isEnablePartialRefer; // +0xfc
    BOOL _canRotate; // +0xfd
    NSString * _nsContent; // +0x100
    CMessageWrap * _msgWrap; // +0x108
    NSString * _tipUrl; // +0x110
    UIFont * _oFont; // +0x118
    unsigned long long _parserType; // +0x120
    MMMsgMenuReporter * _menuReporter; // +0x128
    NSMutableArray * _highlightPathRects; // +0x130
    TextFloatReferButton * _referButton; // +0x138
    _NSRange _highlightRange; // +0x140
}
- (BOOL)hidesStatusBar;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTransitioningAnimationCompleted;
- (id)init;
- (void)dealloc;
- (void)setupTransitionAnimate;
- (double)contentWidth;
- (void)viewDidLoad;
- (void)scrollToHighlightCenterAndDelayExitaHighlight;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setLinkDelegate:(id)arg1;
- (void)updateTextView;
- (unsigned int)getTextPreFontSize;
- (void)setContent:(id)arg1;
- (void)setOriginFrame:(CGRect)arg1;
- (void)onSingleTapWithPoint:(CGPoint)arg1;
- (void)onSingleTapRTCV;
- (void)onSingleTapRTCVAtPoint:(CGPoint)arg1;
- (void)onSingleTap;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)hideWithAnimate:(BOOL)arg1;
- (void)forceUnderlyingChatBackToPortraitIfNeeded;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)onReferButtonClicked;
- (void)setMsgWrap:(id)arg1;
- (void)menuResponder:(id)arg1 didCopyText:(id)arg2;
- (void)menuResponderDidSelectAll:(id)arg1;
- (void)menuResponderDidForward:(id)arg1;
- (void)menuResponderDidSearch:(id)arg1 didCopyText:(id)arg2;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerWillShow;
- (void)animateShowToolView;
- (void)animateHiddeToolView;
- (void)onPushNewVieController:(id)arg1;
- (void)onRichTextViewExit;
- (void)onRTCReferPartTextWithMsgWrap:(id)arg1;
- (id)getScrollView;
- (id)getCurrentViewController;
- (void)OnDetailClickedUrl:(id)arg1;
- (void)rtcScrollViewDidScroll:(id)arg1;
- (void)rtcScrollViewWillBeginDragging:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)showVoipCheckMicView;
- (void)installFakeLongPressGesture;
- (void)onFakeLongPress;
- (BOOL)ignoreVCCheckJumpOutWhenOpen;
- (void)onPerformShortCut:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)m_view;
- (void)setM_view:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (id)msgWrap;
- (id)tipUrl;
- (void)setTipUrl:(id)arg1;
- (id)oFont;
- (void)setOFont:(id)arg1;
- (_NSRange)highlightRange;
- (void)setHighlightRange:(_NSRange)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (BOOL)forbidShare;
- (void)setForbidShare:(BOOL)arg1;
- (BOOL)forbidOperate;
- (void)setForbidOperate:(BOOL)arg1;
- (BOOL)forbidCopy;
- (void)setForbidCopy:(BOOL)arg1;
- (BOOL)fromRefer;
- (void)setFromRefer:(BOOL)arg1;
- (BOOL)isEnablePartialRefer;
- (void)setIsEnablePartialRefer:(BOOL)arg1;
- (id)menuReporter;
- (void)setMenuReporter:(id)arg1;
- (id)highlightPathRects;
- (void)setHighlightPathRects:(id)arg1;
- (id)referButton;
- (void)setReferButton:(id)arg1;
- (BOOL)canRotate;
- (void)setCanRotate:(BOOL)arg1;
- (void).cxx_destruct;
@end
