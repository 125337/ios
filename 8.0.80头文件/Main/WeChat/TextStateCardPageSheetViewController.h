@interface TextStateCardPageSheetViewController : MMWindowViewController <TextStateBaseCardContentViewDelegate, MultipleTextStateCardViewDataSource, MultipleTextStateCardViewDelegate, WCStatusViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _allowShowHeaderAvatar; // +0x7c
    BOOL _forbidShowSetStatusButton; // +0x7d
    BOOL _transitioning; // +0x7e
    BOOL _shouldReportExposeCurrentStatusCardOnAppear; // +0x7f
    CContact * _contact; // +0x80
    MMUIViewController * _delegateViewController; // +0x88
    TextStateCardAnimationConfig * _animationConfig; // +0x90
    long long _cardReportScene; // +0x98
    MMUIButton * _backgroundMaskButton; // +0xa0
    MultipleTextStateCardView * _multipleCardView; // +0xa8
    MMUIButton * _closeButton; // +0xb0
    TextStateBlurButton * _setStatusButton; // +0xb8
    unsigned long long _enterTime; // +0xc0
    TextStatePrivacyMgr * _shareScopeMgr; // +0xc8
}
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 allowShowHeaderAvatar:(BOOL)arg2 forbidShowSetStatusButton:(BOOL)arg3;
- (unsigned int)publishEnterSceneForReportScene:(long long)arg1;
- (void)reportSetStatusButtonViewEvent:(id)arg1 sessionId:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)initReport;
- (BOOL)shouldShowSetStatusButton;
- (void)updateHeaderViewStyle;
- (UIEdgeInsets)containerInsets;
- (void)updateLayout;
- (void)show;
- (void)hide;
- (void)hideWithCompletion:(id /* block */)arg1;
- (void)hideWithStopMedia:(BOOL)arg1 preventMinimize:(BOOL)arg2;
- (void)hideWithStopMedia:(BOOL)arg1 preventMinimize:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)topViewController;
- (id)targetViewController;
- (id)cardView;
- (void)onPanCardDown:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapBackgroundMaskButton;
- (void)onTapCloseButton;
- (void)onTapSetStatusButton;
- (void)onTapPositionButton:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(BOOL)arg2;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (void)doHeadImageAction:(id)arg1;
- (void)onTapTopic:(id)arg1 cardContentView:(id)arg2;
- (void)onTapBackground:(id)arg1;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)onLongPress:(id)arg1 isDown:(BOOL)arg2;
- (void)onMultipleTextStateCard:(id)arg1 didMoveFromCard:(id)arg2 toCard:(id)arg3;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (id)shareScopeMgr;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)allowShowHeaderAvatar;
- (void)setAllowShowHeaderAvatar:(BOOL)arg1;
- (BOOL)forbidShowSetStatusButton;
- (void)setForbidShowSetStatusButton:(BOOL)arg1;
- (id)delegateViewController;
- (void)setDelegateViewController:(id)arg1;
- (id)animationConfig;
- (void)setAnimationConfig:(id)arg1;
- (long long)cardReportScene;
- (void)setCardReportScene:(long long)arg1;
- (id)backgroundMaskButton;
- (void)setBackgroundMaskButton:(id)arg1;
- (id)multipleCardView;
- (void)setMultipleCardView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)setStatusButton;
- (void)setSetStatusButton:(id)arg1;
- (BOOL)isTransitioning;
- (void)setTransitioning:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (BOOL)shouldReportExposeCurrentStatusCardOnAppear;
- (void)setShouldReportExposeCurrentStatusCardOnAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
