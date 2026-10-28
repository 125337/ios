@interface MiniAudioTaskContentView : UIView <UIGestureRecognizerDelegate, MinimizeTaskPlayCtrl>
{
    BOOL _isPlaying; // +0x8
    BOOL _useBlurBackgroundView; // +0x9
    BOOL _customizedLeftViewAutoResize; // +0xa
    BOOL _hasUserChangedSize; // +0xb
    BOOL _enableGestsureShrink; // +0xc
    BOOL _enablePIPShrink; // +0xd
    BOOL _bUsePIPStyle; // +0xe
    BOOL _enableTap; // +0xf
    BOOL _pinchProcessing; // +0x10
    unsigned int _style; // +0x14
    int _sizeLevel; // +0x18
    NSString * _accessibilityBizPrefix; // +0x20
    id <MiniAudioTaskContentViewDelegate> _delegate; // +0x28
    MMUIButton * _playPauseButton; // +0x30
    UIImageView * _playPauseButtonImage; // +0x38
    UIImageView * _playTypeImage; // +0x40
    MMUIButton * _closeButton; // +0x48
    MMUIButton * _outerContentButton; // +0x50
    UIView * _outerContentView; // +0x58
    UIView * _pinchView; // +0x60
    MinimizeAudioTaskExtendCoverView * _coverView; // +0x68
    UIView * _customizedLeftView; // +0x70
    UIView * _customizedTopRightView; // +0x78
    UIImageView * _topMaskView; // +0x80
    UIImageView * _bottomMaskView; // +0x88
    double _coverWidth; // +0x90
    MMBezierDisplayLinkAnimator * _animator; // +0x98
    CADisplayLink * _displayLink; // +0xa0
    SpringInterpolator * _spring; // +0xa8
    long long _curPlayType; // +0xb0
    MMUIButton * _playTypeButton; // +0xb8
    double _targetWidth; // +0xc0
    double _targetHeight; // +0xc8
    double _startWidth; // +0xd0
    double _startHeight; // +0xd8
    double _lastTimestamp; // +0xe0
    CGSize _originalSize; // +0xe8
    CGSize _maximumSize; // +0xf8
}
+ (CGSize)fullSizeForOuterContentViewSize:(CGSize)arg1;
- (id)initWitStyle:(unsigned int)arg1;
- (id)initWitStyle:(unsigned int)arg1 useGestureShrink:(BOOL)arg2;
- (id)initWitStyle:(unsigned int)arg1 usePIPStyle:(BOOL)arg2 useGestureShrink:(BOOL)arg3;
- (id)initWitStyle:(unsigned int)arg1 usePIPStyle:(BOOL)arg2;
- (id)initWitStyle:(unsigned int)arg1 coverWidth:(double)arg2;
- (void)setupSubviews;
- (void)setOuterContentView:(id)arg1;
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
- (CGSize)originalSize;
- (void)setOriginalSize:(CGSize)arg1;
- (CGSize)maximumSize;
- (void)setMaximumSize:(CGSize)arg1;
- (BOOL)hasUserChangedSize;
- (void)setHasUserChangedSize:(BOOL)arg1;
- (BOOL)enableGestsureShrink;
- (void)setEnableGestsureShrink:(BOOL)arg1;
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
