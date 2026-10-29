@interface TLProfileDragAnimateHelper : MMObject <TLProfileBaseMediaViewDelegate, TLProfileDragDownViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _disableHover; // +0x8
    BOOL _isAtHoverState; // +0x9
    BOOL _autoPlay; // +0xa
    BOOL _hasTriggerDragShock; // +0xb
    BOOL _isHeaderPlaying; // +0xc
    UIView * _frontView; // +0x10
    UITableView * _frontTableView; // +0x18
    TLProfileDragDownView * _dragDownInfoView; // +0x20
    UIView * _bkgMaskView; // +0x28
    id <TLProfileDragAnimateHelperDelegate> _delegate; // +0x30
    id /* block */ _frontViewTopChangeBlock; // +0x38
    double _hoverTargetOffset; // +0x40
    double _expandedHeight; // +0x48
    double _frontViewTop; // +0x50
    id /* block */ _enterHoverPreparation; // +0x58
    id /* block */ _enterHoverAnimation; // +0x60
    id /* block */ _enterHoverCompletion; // +0x68
    id /* block */ _exitHoverPreparation; // +0x70
    id /* block */ _exitHoverAnimation; // +0x78
    id /* block */ _exitHoverCompletion; // +0x80
    id /* block */ _alphaAnimation; // +0x88
    NSDate * _dragStartTime; // +0x90
    double _lastMovement; // +0x98
    double _beginTouchPosY; // +0xa0
    double _lastTouchPosY; // +0xa8
    double _frontViewY; // +0xb0
    double _currentDragProgress; // +0xb8
    double _mediaViewMinHeight; // +0xc0
    double _mediaViewInitialBottomMargin; // +0xc8
    double _mediaViewDrawDownBottomMargin; // +0xd0
    NSHashTable * _alphaAnimateViews; // +0xd8
    TLProfileMediaContainerView * _tlProfileMediaView; // +0xe0
    UIButton * _tlProfileDragMaskView; // +0xe8
    CAGradientLayer * _gradientLayer; // +0xf0
    CContact * _contact; // +0xf8
    TLProfileModel * _tlProfileModel; // +0x100
    UILongPressGestureRecognizer * _longPressGesture; // +0x108
    UITapGestureRecognizer * _tapGesture; // +0x110
    unsigned long long _scene; // +0x118
}
+ (id)tlProfileDragHelperWithFrontContainer:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3 scene:(unsigned long long)arg4;
- (void)lightShock;
- (id)init;
- (void)dealloc;
- (void)setEnterHoverPreparaion:(id /* block */)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setExitHoverPreparaion:(id /* block */)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setDragAnimationProgress:(id /* block */)arg1;
- (void)setupUI;
- (void)enableLongPressAction:(BOOL)arg1;
- (void)onMediaViewLongPress:(id)arg1;
- (void)onMediaViewSingleTap:(id)arg1;
- (void)enterHoverState:(BOOL)arg1;
- (void)exitHoverState:(BOOL)arg1;
- (void)setDisableHover:(BOOL)arg1;
- (CGSize)tlProfileMediaSizeForWidth:(double)arg1;
- (void)setIsAtHoverState:(BOOL)arg1;
- (void)enterHoverStateByUser;
- (void)exitHoverStateByUser;
- (void)touchAndEnterHoverStateAnimated;
- (void)touchAndExitHoverStateAnimated;
- (void)processFrontViewGesture:(id)arg1;
- (void)handlePanGestureAtHoverEnable:(id)arg1;
- (void)handlePanGestureAtHoverDisable:(id)arg1;
- (void)resetFrontViewOffsetAnimated:(BOOL)arg1;
- (void)addAlphaAnimateView:(id)arg1;
- (void)handleAlphaAnimateWithFrontViewTopOffset:(double)arg1;
- (double)progressForCurrentOffset:(double)arg1;
- (void)setCurrentDragProgress:(double)arg1;
- (void)updateDragMaskView:(double)arg1;
- (void)updateFrontViewTop:(double)arg1;
- (void)updateMediaWithContact:(id)arg1 profileModel:(id)arg2;
- (void)setupMediaViewMinHeight:(double)arg1;
- (void)setupMediaViewInitialBottomMargin:(double)arg1;
- (void)setupMediaViewDrawDownBottomMargin:(double)arg1;
- (void)startMediaPlay;
- (void)pauseMediaPlay;
- (void)stopMediaPlay;
- (void)setMediaMuted:(BOOL)arg1;
- (void)onMediaFinishPlaying;
- (id)onGetViewControllerForMediaContainerView;
- (id)onGetViewControllerForDragDownView;
- (void)onTapTLProfileHeaderDetailButton:(id)arg1;
- (void)onTapTLProfileHeadButton:(id)arg1;
- (void)onTapTLProfileChangeCoverButton:(id)arg1;
- (void)onTapTLProfileLikeButton:(id)arg1 toLiked:(BOOL)arg2;
- (void)onTLProfileDragMaskButtonClick:(id)arg1;
- (BOOL)canTrigerAtPositionY:(double)arg1;
- (double)calMediaViewHeight;
- (double)calMediaViewHeightWithDragProgress:(double)arg1;
- (double)calMediaViewBottom;
- (id)frontView;
- (void)setFrontView:(id)arg1;
- (id)frontTableView;
- (void)setFrontTableView:(id)arg1;
- (id)dragDownInfoView;
- (void)setDragDownInfoView:(id)arg1;
- (id)bkgMaskView;
- (void)setBkgMaskView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)frontViewTopChangeBlock;
- (void)setFrontViewTopChangeBlock:(id /* block */)arg1;
- (BOOL)disableHover;
- (double)hoverTargetOffset;
- (void)setHoverTargetOffset:(double)arg1;
- (BOOL)isAtHoverState;
- (double)expandedHeight;
- (void)setExpandedHeight:(double)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (double)frontViewTop;
- (void)setFrontViewTop:(double)arg1;
- (id /* block */)enterHoverPreparation;
- (void)setEnterHoverPreparation:(id /* block */)arg1;
- (id /* block */)enterHoverAnimation;
- (void)setEnterHoverAnimation:(id /* block */)arg1;
- (id /* block */)enterHoverCompletion;
- (void)setEnterHoverCompletion:(id /* block */)arg1;
- (id /* block */)exitHoverPreparation;
- (void)setExitHoverPreparation:(id /* block */)arg1;
- (id /* block */)exitHoverAnimation;
- (void)setExitHoverAnimation:(id /* block */)arg1;
- (id /* block */)exitHoverCompletion;
- (void)setExitHoverCompletion:(id /* block */)arg1;
- (id /* block */)alphaAnimation;
- (void)setAlphaAnimation:(id /* block */)arg1;
- (id)dragStartTime;
- (void)setDragStartTime:(id)arg1;
- (double)lastMovement;
- (void)setLastMovement:(double)arg1;
- (double)beginTouchPosY;
- (void)setBeginTouchPosY:(double)arg1;
- (double)lastTouchPosY;
- (void)setLastTouchPosY:(double)arg1;
- (double)frontViewY;
- (void)setFrontViewY:(double)arg1;
- (BOOL)hasTriggerDragShock;
- (void)setHasTriggerDragShock:(BOOL)arg1;
- (double)currentDragProgress;
- (double)mediaViewMinHeight;
- (void)setMediaViewMinHeight:(double)arg1;
- (double)mediaViewInitialBottomMargin;
- (void)setMediaViewInitialBottomMargin:(double)arg1;
- (double)mediaViewDrawDownBottomMargin;
- (void)setMediaViewDrawDownBottomMargin:(double)arg1;
- (id)alphaAnimateViews;
- (void)setAlphaAnimateViews:(id)arg1;
- (id)tlProfileMediaView;
- (void)setTlProfileMediaView:(id)arg1;
- (BOOL)isHeaderPlaying;
- (void)setIsHeaderPlaying:(BOOL)arg1;
- (id)tlProfileDragMaskView;
- (void)setTlProfileDragMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)tlProfileModel;
- (void)setTlProfileModel:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

