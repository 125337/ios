@interface TextFloatViewController : MMUIViewController <TransitioningAnimationDelegate, MMRTCMenuResponderDelegate, MMTextFloatBottomToolViewDelegate, MMRTCMenuEventDelegate, WAAppContactPreLoaderProtocol, IShortCutExt, ILinkEventExt, scrollViewDelegate, MMRichTextSelectEventDelegate>
{
    UIView * m_oBackView; // +0x68
    UIButton * m_view; // +0x70
    MMScrollView * m_oScrollView; // +0x78
    CTRichTextView * m_oRichTextView; // +0x80
    id <ILinkEventExt> m_linkDelegate; // +0x88
    id <TextFloatPreviewDelegate> m_delegate; // +0x90
    BOOL _bNeedRebuildTextView; // +0x98
    BOOL m_bHidden; // +0x99
    MMRichTextCoverView * m_oRichTextCoverView; // +0xa0
    CrossfadeAnimationController * m_transitionInstance; // +0xa8
    BOOL m_allowAutorotate; // +0xb0
    CGRect m_originFrame; // +0xb8
    MMTextFloatBottomToolView * m_bottomToolView; // +0xd8
    BOOL m_bHadDragHiddeToolView; // +0xe0
    double m_currentOffset; // +0xe8
    BOOL _forbidShare; // +0xf0
    BOOL _forbidOperate; // +0xf1
    BOOL _forbidCopy; // +0xf2
    NSString * _nsContent; // +0xf8
    CMessageWrap * _msgWrap; // +0x100
    NSString * _tipUrl; // +0x108
    UIFont * _oFont; // +0x110
    unsigned long long _parserType; // +0x118
}
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTransitioningAnimationCompleted;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)setLinkDelegate:(id)arg1;
- (void)updateTextView;
- (unsigned int)getTextPreFontSize;
- (void)setContent:(id)arg1;
- (void)setOriginFrame:(CGRect)arg1;
- (void)onSingleTapWithPoint:(CGPoint)arg1;
- (void)onSingleTapRTCV;
- (void)onSingleTap;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)hideWithAnimate:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
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
- (id)m_view;
- (void)setM_view:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)tipUrl;
- (void)setTipUrl:(id)arg1;
- (id)oFont;
- (void)setOFont:(id)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (BOOL)forbidShare;
- (void)setForbidShare:(BOOL)arg1;
- (BOOL)forbidOperate;
- (void)setForbidOperate:(BOOL)arg1;
- (BOOL)forbidCopy;
- (void)setForbidCopy:(BOOL)arg1;
- (void).cxx_destruct;
@end

