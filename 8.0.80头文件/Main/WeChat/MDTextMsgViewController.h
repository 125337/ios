@interface MDTextMsgViewController : MMUIViewController <TransitioningAnimationDelegate, CBTStreamMDParseLogicDelegate, CBTStreamMDTextViewDelegate, UIGestureRecognizerDelegate, MMRTCMenuResponderDelegate, MMRTCMenuEventDelegate, MMRichTextSelectEventDelegate>
{
    BOOL _canRotate; // +0x70
    id <MDTextMsgViewControllerDelegate> _delegate; // +0x78
    CMessageWrap * _msgWrap; // +0x80
    NSString * _content; // +0x88
    double _initialOffsetPercentage; // +0x90
    CrossfadeAnimationController * _transitionInstance; // +0x98
    UIScrollView * _scrollView; // +0xa0
    CBTStreamMDTextView * _streamMDTextView; // +0xa8
    CBTStreamMDParseLogic * _mdParserLogic; // +0xb0
    NSMutableAttributedString * _attributeContent; // +0xb8
    double _lastLayoutContentMaxWidth; // +0xc0
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xc8
    MMRichTextCoverView * _richTextCoverView; // +0xd0
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0xd8
}
- (BOOL)hidesStatusBar;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)dealloc;
- (void)setupTransitionAnimate;
- (void)viewDidLoad;
- (void)setupSelectionView;
- (void)setupLongPressGesture;
- (void)removeLongPressGesture;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutTextView;
- (void)tapGestureRecognized:(id)arg1;
- (void)longPressGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)startParser;
- (void)onGeneratedContent:(id)arg1;
- (void)onParseFinished;
- (void)onClickLink:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getScrollView;
- (id)getCurrentViewController;
- (void)onSingleTapRTCV;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (double)initialOffsetPercentage;
- (void)setInitialOffsetPercentage:(double)arg1;
- (id)transitionInstance;
- (void)setTransitionInstance:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)streamMDTextView;
- (void)setStreamMDTextView:(id)arg1;
- (id)mdParserLogic;
- (void)setMdParserLogic:(id)arg1;
- (id)attributeContent;
- (void)setAttributeContent:(id)arg1;
- (double)lastLayoutContentMaxWidth;
- (void)setLastLayoutContentMaxWidth:(double)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)richTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (BOOL)canRotate;
- (void)setCanRotate:(BOOL)arg1;
- (void).cxx_destruct;
@end
