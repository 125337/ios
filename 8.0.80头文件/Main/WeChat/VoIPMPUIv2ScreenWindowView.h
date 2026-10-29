@interface VoIPMPUIv2ScreenWindowView : VoIPMPUIv2View <VoIPMPUIv2TouchAlgorithmDelegate>
{
    BOOL _isMirror; // +0x8
    BOOL _isRendered; // +0x9
    BOOL _isLocalCamera; // +0xa
    BOOL _hasLandscapeMode; // +0xb
    BOOL _isLandscapeModeOn; // +0xc
    BOOL _isMainWindow; // +0xd
    BOOL _canMove; // +0xe
    BOOL _isTalking; // +0xf
    BOOL _isFliping; // +0x10
    BOOL _isSuspend; // +0x11
    BOOL _isFloated; // +0x12
    BOOL _isAudioInterruption; // +0x13
    BOOL _isCallee; // +0x14
    BOOL _isFrontCamera; // +0x15
    id <VoIPScreenWindowViewDelegate> _screenWindowViewDelegate; // +0x18
    VoIPMPUIv2TouchAlgorithm * _touchAlgorithm; // +0x20
    VoIPMPUIv2View * _canvasView; // +0x28
    XImageViewRenderer * _renderer; // +0x30
    XImageViewRenderer * _activeRenderer; // +0x38
    VoIPMPUIv2ScreenProfileView * _profileView; // +0x40
    VoIPMPUIv2View * _blurView; // +0x48
    CAShapeLayer * _arrowLayer; // +0x50
    unsigned long long _foldEdge; // +0x58
    MMUIButton * _unfoldIconButton; // +0x60
    VoIPMPUIv2View * _foldBlurView; // +0x68
    UIView * _canvasMaskView; // +0x70
    double _foldScale; // +0x78
    unsigned long long _splitLocation; // +0x80
    id /* block */ _onTapEvent; // +0x88
    id /* block */ _onRestoreEvent; // +0x90
    id /* block */ _willMoveEvent; // +0x98
    id /* block */ _onMoveEvent; // +0xa0
    id /* block */ _didMoveEvent; // +0xa8
    CGAffineTransform _originalTransform; // +0xb0
    CGAffineTransform _contentTransform; // +0xe0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsFloated:(BOOL)arg1;
- (void)setupAudioInterruption:(BOOL)arg1;
- (void)setContentTransform:(CGAffineTransform)arg1;
- (void)setupSuspend:(BOOL)arg1;
- (void)setIsLocalCamera:(BOOL)arg1;
- (void)setSplitLocation:(unsigned long long)arg1;
- (void)setIsLandscapeModeOn:(BOOL)arg1;
- (void)updateXimageViewSize:(BOOL)arg1;
- (void)flipWithCompletion:(id /* block */)arg1;
- (void)layoutBlurView;
- (void)layoutIconView;
- (void)updateUnfoldIconButtonImage;
- (void)layoutProfileView;
- (void)layoutCanvasView;
- (void)loadRender;
- (id)activeRenderer;
- (void)VoIPMPUIv2TouchAlgorithmOnBegin;
- (void)VoIPMPUIv2TouchAlgorithmOnEndWithOrigin:(CGPoint)arg1 size:(CGSize)arg2 targetFoldScale:(double)arg3;
- (void)VoIPMPUIv2TouchAlgorithmOnMoveWithOrigin:(CGPoint)arg1 size:(CGSize)arg2;
- (void)VoIPMPUIv2TouchAlgorithmOnTaped:(CGPoint)arg1;
- (id)VoIPMPUIv2TouchAlgorithmView;
- (CGSize)VoIPMPUIv2TouchAlgorithmScreenViewSize;
- (CGPoint)VoIPMPUIv2TouchAlgorithmTransformPointWithPoint:(CGPoint)arg1;
- (void)VoIPMPUIv2TouchAlgorithmUpdateFoldViewWithScale:(double)arg1;
- (BOOL)VoIPMPUIv2TouchAlgorithmIsPreparingHorizontalSplitFromFloat;
- (BOOL)ignoreTouches:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)adsorbToWindow;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)updateFoldViewWithScale:(double)arg1;
- (void)applyFoldScaleToViews;
- (void)doLandscapeAnimationWithCompletion:(id /* block */)arg1;
- (void)setContentCornerRadius:(double)arg1;
- (id)screenWindowViewDelegate;
- (void)setScreenWindowViewDelegate:(id)arg1;
- (BOOL)isMirror;
- (void)setIsMirror:(BOOL)arg1;
- (BOOL)isRendered;
- (void)setIsRendered:(BOOL)arg1;
- (BOOL)isLocalCamera;
- (BOOL)hasLandscapeMode;
- (void)setHasLandscapeMode:(BOOL)arg1;
- (BOOL)isLandscapeModeOn;
- (BOOL)isMainWindow;
- (void)setIsMainWindow:(BOOL)arg1;
- (id)touchAlgorithm;
- (void)setTouchAlgorithm:(id)arg1;
- (BOOL)canMove;
- (void)setCanMove:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)setActiveRenderer:(id)arg1;
- (id)profileView;
- (void)setProfileView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)isFliping;
- (void)setIsFliping:(BOOL)arg1;
- (id)arrowLayer;
- (void)setArrowLayer:(id)arg1;
- (unsigned long long)foldEdge;
- (void)setFoldEdge:(unsigned long long)arg1;
- (id)unfoldIconButton;
- (void)setUnfoldIconButton:(id)arg1;
- (id)foldBlurView;
- (void)setFoldBlurView:(id)arg1;
- (id)canvasMaskView;
- (void)setCanvasMaskView:(id)arg1;
- (double)foldScale;
- (void)setFoldScale:(double)arg1;
- (unsigned long long)splitLocation;
- (BOOL)isSuspend;
- (void)setIsSuspend:(BOOL)arg1;
- (id /* block */)onTapEvent;
- (void)setOnTapEvent:(id /* block */)arg1;
- (id /* block */)onRestoreEvent;
- (void)setOnRestoreEvent:(id /* block */)arg1;
- (id /* block */)willMoveEvent;
- (void)setWillMoveEvent:(id /* block */)arg1;
- (id /* block */)onMoveEvent;
- (void)setOnMoveEvent:(id /* block */)arg1;
- (id /* block */)didMoveEvent;
- (void)setDidMoveEvent:(id /* block */)arg1;
- (CGAffineTransform)originalTransform;
- (void)setOriginalTransform:(CGAffineTransform)arg1;
- (BOOL)isFloated;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (BOOL)isCallee;
- (void)setIsCallee:(BOOL)arg1;
- (CGAffineTransform)contentTransform;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void).cxx_destruct;
@end
