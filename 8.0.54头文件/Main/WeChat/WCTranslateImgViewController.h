@interface WCTranslateImgViewController : PhotoViewController <MMImgageBrowseViewDelegate, MMScrollActionSheetDelegate, WCImageTranslateDelegate, UIViewControllerTransitioningDelegate>
{
    UIImage * _translateImage; // +0x80
    BOOL _popOrDismissWithFadeOutAnimation; // +0x88
    BOOL _isChangeAlphaWithFullScreenItem; // +0x89
    BOOL _isDisplayOriginImage; // +0x8a
    int _ocrTransScene; // +0x8c
    UIView * _transitionBackView; // +0x90
    double _transitionDuration; // +0x98
    WCImageTranslateLogic * _imgTranslateLogic; // +0xa0
    UINavigationController * _fromNavigationController; // +0xa8
    UIImage * _originImage; // +0xb0
    MMImageBrowseView * _browseView; // +0xb8
    UIView * _bottomBar; // +0xc0
    UIView * _brandContentView; // +0xc8
    MMUILabel * _brandLabel; // +0xd0
    NSString * _brandWording; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)setTranslateImage:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initBottomView;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickTranslateButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)handleViewWillBePoped:(BOOL)arg1;
- (void)onReTranslateImage;
- (void)OnLongPress:(id)arg1;
- (void)onScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)onScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)updateTranslateOpHidden:(BOOL)arg1;
- (void)updateBottomBar;
- (void)viewDidLayoutSubviews;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateFadeOutTransition:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (int)ocrTransScene;
- (void)setOcrTransScene:(int)arg1;
- (id)transitionBackView;
- (void)setTransitionBackView:(id)arg1;
- (BOOL)popOrDismissWithFadeOutAnimation;
- (void)setPopOrDismissWithFadeOutAnimation:(BOOL)arg1;
- (double)transitionDuration;
- (void)setTransitionDuration:(double)arg1;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (id)fromNavigationController;
- (void)setFromNavigationController:(id)arg1;
- (BOOL)isChangeAlphaWithFullScreenItem;
- (void)setIsChangeAlphaWithFullScreenItem:(BOOL)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)browseView;
- (void)setBrowseView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)brandContentView;
- (void)setBrandContentView:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)brandWording;
- (void)setBrandWording:(id)arg1;
- (BOOL)isDisplayOriginImage;
- (void)setIsDisplayOriginImage:(BOOL)arg1;
- (void).cxx_destruct;
@end

