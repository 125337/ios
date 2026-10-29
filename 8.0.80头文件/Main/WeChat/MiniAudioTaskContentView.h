@interface MiniAudioTaskContentView : UIView <UIGestureRecognizerDelegate, MinimizeTaskPlayCtrl>
{
    BOOL _isPlaying; // +0x8
    BOOL _useBlurBackgroundView; // +0x9
    BOOL _customizedLeftViewAutoResize; // +0xa
    BOOL _hasUserChangedSize; // +0xb
    BOOL _enableGestsureShrink; // +0xc
    BOOL _bigger; // +0xd
    BOOL _enablePIPShrink; // +0xe
    BOOL _bUsePIPStyle; // +0xf
    BOOL _enableTap; // +0x10
    BOOL _pinchProcessing; // +0x11
    unsigned int _style; // +0x14
    int _sizeLevel; // +0x18
    NSString * _accessibilityBizPrefix; // +0x20
    id <MiniAudioTaskContentViewDelegate> _delegate; // +0x28
    id /* block */ _onViewSizeChangedNotifyMinimize; // +0x30
    MMUIButton * _playPauseButton; // +0x38
    UIImageView * _playPauseButtonImage; // +0x40
    UIImageView * _playTypeImage; // +0x48
    MMUIButton * _closeButton; // +0x50
    MMUIButton * _outerContentButton; // +0x58
    UIView * _outerContentView; // +0x60
    UIView * _pinchView; // +0x68
    MinimizeAudioTaskExtendCoverView * _coverView; // +0x70
    UIView * _customizedLeftView; // +0x78
    UIView * _customizedTopRightView; // +0x80
    UIImageView * _topMaskView; // +0x88
    UIImageView * _bottomMaskView; // +0x90
    double _coverWidth; // +0x98
    MMBezierDisplayLinkAnimator * _animator; // +0xa0
    CADisplayLink * _displayLink; // +0xa8
    SpringInterpolator * _spring; // +0xb0
    MinimizePIPReportInfo * _reportInfo; // +0xb8
    long long _curPlayType; // +0xc0
    MMUIButton * _playTypeButton; // +0xc8
    double _targetWidth; // +0xd0
    double _targetHeight; // +0xd8
    double _startWidth; // +0xe0
    double _startHeight; // +0xe8
    double _lastTimestamp; // +0xf0
    CGSize _originalSize; // +0xf8
    CGSize _maximumSize; // +0x108
}
+ (CGSize)fullSizeForOuterContentViewSize:(CGSize)arg1;
- (id)initWitStyle:(unsigned int)arg1;
- (id)initWitStyle:(unsigned int)arg1 useGestureShrink:(BOOL)arg2;
- (id)initWitStyle:(unsigned int)arg1 usePIPStyle:(BOOL)arg2 useGestureShrink:(BOOL)arg3;
- (id)initWitStyle:(unsigned int)arg1 usePIPStyle:(BOOL)arg2;
- (id)initWitStyle:(unsigned int)arg1 coverWidth:(double)arg2;
- (void)setupSubviews;
- (void)setPIPReportInfo:(id)arg1;
- (void)setOuterContentView:(id)arg1;
- (void)setOuterContentView:(id)arg1 reportInfo:(id)arg2;
- (CGSize)size:(CGSize)arg1 fittingAvailableSize:(CGSize)arg2;
- (void)cancelSizeAnimationForHostLayout;
- (BOOL)updateForHostSize:(CGSize)arg1 availableSize:(CGSize)arg2;
- (id)reportParams;
- (void)checkExp:(id)arg1;
- (void)reportDoubleClick;
- (void)reportPinch;
- (void)setCoverImageUrl:(id)arg1;
- (void)setCoverDefaultImage:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)setUseBlurBackgroundView:(BOOL)arg1;
- (void)setCustomizedLeftView:(id)arg1;
- (void)setCustomizedTopRightView:(id)arg1;
- (id)playPauseButton;
- (id)closeButton;
- (id)pinchView;
- (id)outerContentButton;
- (void)setAccessibilityBizPrefix:(id)arg1;
- (id)accessibilityBizPrefix;
- (id)coverView;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setPlayOrPauseButtonDisabled:(BOOL)arg1;
- (void)setShadowShow:(BOOL)arg1;
- (void)setButtonsShow:(BOOL)arg1;
- (void)setOuterContentViewAccessibilityLabel:(id)arg1;
- (id)topMaskView;
- (id)bottomMaskView;
- (id)buttonTintColor;
- (void)layoutSubviews;
- (void)onPlayPauseButtonClicked;
- (void)onCloseButtonClicked;
- (void)onOuterContentViewClicked:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)startInterpolation;
- (void)startBounce:(BOOL)arg1;
- (void)onDisplayLink:(id)arg1;
- (void)onOuterContentViewDoubleClicked;
- (void)handlePinch:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)notifyOuterContainerButtonTouch:(id)arg1 phase:(long long)arg2;
- (void)setCloseButtonState:(unsigned int)arg1;
- (void)setPlayOrPauseButtonState:(unsigned int)arg1;
- (void)setUpButton:(id)arg1 withState:(unsigned int)arg2;
- (void)setFrame:(CGRect)arg1;
- (BOOL)enableNewPIPStyle;
- (double)opButtonSize;
- (id)closeButtonIcon;
- (id)playButtonIcon;
- (id)pauseButtonIcon;
- (id)playTypeButtonIcon;
- (void)setPlayCtrlPlayType:(long long)arg1;
- (long long)playType;
- (void)initPlayTypeButton;
- (void)onPlayTypeButtonClicked;
- (void)setFoldingState:(BOOL)arg1;
- (BOOL)isPlaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useBlurBackgroundView;
- (BOOL)customizedLeftViewAutoResize;
- (void)setCustomizedLeftViewAutoResize:(BOOL)arg1;
- (id /* block */)onViewSizeChangedNotifyMinimize;
- (void)setOnViewSizeChangedNotifyMinimize:(id /* block */)arg1;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (id)playPauseButtonImage;
- (void)setPlayPauseButtonImage:(id)arg1;
- (id)playTypeImage;
- (void)setPlayTypeImage:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setOuterContentButton:(id)arg1;
- (id)outerContentView;
- (void)setPinchView:(id)arg1;
- (void)setCoverView:(id)arg1;
- (id)customizedLeftView;
- (id)customizedTopRightView;
- (void)setTopMaskView:(id)arg1;
- (void)setBottomMaskView:(id)arg1;
- (double)coverWidth;
- (void)setCoverWidth:(double)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)spring;
- (void)setSpring:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (CGSize)originalSize;
- (void)setOriginalSize:(CGSize)arg1;
- (CGSize)maximumSize;
- (void)setMaximumSize:(CGSize)arg1;
- (BOOL)hasUserChangedSize;
- (void)setHasUserChangedSize:(BOOL)arg1;
- (BOOL)enableGestsureShrink;
- (void)setEnableGestsureShrink:(BOOL)arg1;
- (BOOL)bigger;
- (void)setBigger:(BOOL)arg1;
- (int)sizeLevel;
- (void)setSizeLevel:(int)arg1;
- (BOOL)enablePIPShrink;
- (void)setEnablePIPShrink:(BOOL)arg1;
- (BOOL)bUsePIPStyle;
- (void)setBUsePIPStyle:(BOOL)arg1;
- (long long)curPlayType;
- (void)setCurPlayType:(long long)arg1;
- (id)playTypeButton;
- (void)setPlayTypeButton:(id)arg1;
- (double)targetWidth;
- (void)setTargetWidth:(double)arg1;
- (double)targetHeight;
- (void)setTargetHeight:(double)arg1;
- (double)startWidth;
- (void)setStartWidth:(double)arg1;
- (double)startHeight;
- (void)setStartHeight:(double)arg1;
- (BOOL)enableTap;
- (void)setEnableTap:(BOOL)arg1;
- (BOOL)pinchProcessing;
- (void)setPinchProcessing:(BOOL)arg1;
- (double)lastTimestamp;
- (void)setLastTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
