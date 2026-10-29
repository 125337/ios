@interface WCCommentEmotionDetailViewController : MMUIViewController <FullScreenGestureDelegate, MMUIViewControllerDelegate>
{
    BOOL _isPresentModal; // +0x70
    BOOL _disableLongPress; // +0x71
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x78
    WCZoomTransitionAnimator * _transition; // +0x80
    UIView * _bgView; // +0x88
    WCCommentBigEmoticonView * _emotionView; // +0x90
    MMUIButton * _closeBtn; // +0x98
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0xa0
    WXFullScreenGestureRecognizer * _fullScreenGesture; // +0xa8
}
+ (void)showInViewController:(id)arg1 startView:(id)arg2 startFrame:(CGRect)arg3 snsEmojiInfoObj:(id)arg4 isPresentModal:(BOOL)arg5;
+ (void)showInViewController:(id)arg1 startView:(id)arg2 startFrame:(CGRect)arg3 snsEmojiInfoObj:(id)arg4 isPresentModal:(BOOL)arg5 disableLongPress:(BOOL)arg6;
- (id)init;
- (id)initWithStartFrame:(CGRect)arg1 startView:(id)arg2;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)relayoutOnTransition;
- (void)viewDidLayoutSubviews;
- (id)createEmotionView;
- (void)closeTransparentVC:(id)arg1;
- (void)openEmotionDetailVC:(id)arg1;
- (id)getEmoticonWrap;
- (void)handleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)getAddEmoticonWrap;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragEnd;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (BOOL)isPresentModal;
- (void)setIsPresentModal:(BOOL)arg1;
- (id)emotionView;
- (void)setEmotionView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)addEmoticonLogic;
- (void)setAddEmoticonLogic:(id)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (BOOL)disableLongPress;
- (void)setDisableLongPress:(BOOL)arg1;
- (void).cxx_destruct;
@end
