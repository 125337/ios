@interface VoIPMPUIv2ScreenWindowView : VoIPMPUIv2View <VoIPMPUIv2TouchAlgorithmDelegate>
{
    BOOL _isMirror; // +0x8
    BOOL _isSuspend; // +0x9
    BOOL _isRendered; // +0xa
    BOOL _canMove; // +0xb
    BOOL _isTalking; // +0xc
    BOOL _isFliping; // +0xd
    BOOL _isRestoreTopViewHidden; // +0xe
    BOOL _isRestoreBottomViewHidden; // +0xf
    BOOL _isFloated; // +0x10
    BOOL _isAudioInterruption; // +0x11
    BOOL _isCallee; // +0x12
    XImageViewRenderer * _renderer; // +0x18
    VoIPMPUIv2ScreenProfileView * _profileView; // +0x20
    VoIPMPUIv2TouchAlgorithm * _touchAlgorithm; // +0x28
    VoIPMPUIv2View * _canvasView; // +0x30
    VoIPMPUIv2View * _blurView; // +0x38
    VoIPMPUIv2View * _restoreTopView; // +0x40
    VoIPMPUIv2ImageView * _restoreTopIconImageView; // +0x48
    VoIPMPUIv2View * _restoreBottomView; // +0x50
    VoIPMPUIv2ImageView * _restoreBottomIconImageView; // +0x58
    CAShapeLayer * _arrowLayer; // +0x60
    unsigned long long _foldEdge; // +0x68
    unsigned long long _splitLocation; // +0x70
    id /* block */ _onTapEvent; // +0x78
    id /* block */ _onRestoreEvent; // +0x80
    id /* block */ _willMoveEvent; // +0x88
    id /* block */ _onMoveEvent; // +0x90
    id /* block */ _didMoveEvent; // +0x98
    CGAffineTransform _originalTransform; // +0xa0
}
- (void)setIsFloated:(BOOL)arg1;
- (void)setupAudioInterruption:(BOOL)arg1;
- (void)setupSuspend:(BOOL)arg1;
- (void)setSplitLocation:(unsigned long long)arg1;
- (void)flipWithCompletion:(id /* block */)arg1;
- (void)layoutBlurView;
- (void)layoutProfileView;
- (void)layoutCanvasView;
- (void)loadRender;
- (void)VoIPMPUIv2TouchAlgorithmOnBegin;
- (void)VoIPMPUIv2TouchAlgorithmOnEndWithOrigin:(CGPoint)arg1 size:(CGSize)arg2;
- (void)VoIPMPUIv2TouchAlgorithmOnMoveWithOrigin:(CGPoint)arg1 size:(CGSize)arg2;
- (void)VoIPMPUIv2TouchAlgorithmOnTaped:(CGPoint)arg1;
- (id)VoIPMPUIv2TouchAlgorithmView;
- (CGPoint)VoIPMPUIv2TouchAlgorithmTransformPointWithPoint:(CGPoint)arg1;
- (BOOL)VoIPMPUIv2TouchAlgorithmIsFoldEnabled;
- (BOOL)ignoreTouches:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)adsorbToWindow;
- (void)layoutSubviews;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)profileView;
- (void)setProfileView:(id)arg1;
- (BOOL)isMirror;
- (void)setIsMirror:(BOOL)arg1;
- (BOOL)isSuspend;
- (void)setIsSuspend:(BOOL)arg1;
- (BOOL)isRendered;
- (void)setIsRendered:(BOOL)arg1;
- (id)touchAlgorithm;
- (void)setTouchAlgorithm:(id)arg1;
- (BOOL)canMove;
- (void)setCanMove:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)isFliping;
- (void)setIsFliping:(BOOL)arg1;
- (id)restoreTopView;
- (void)setRestoreTopView:(id)arg1;
- (id)restoreTopIconImageView;
- (void)setRestoreTopIconImageView:(id)arg1;
- (BOOL)isRestoreTopViewHidden;
- (void)setIsRestoreTopViewHidden:(BOOL)arg1;
- (id)restoreBottomView;
- (void)setRestoreBottomView:(id)arg1;
- (id)restoreBottomIconImageView;
- (void)setRestoreBottomIconImageView:(id)arg1;
- (BOOL)isRestoreBottomViewHidden;
- (void)setIsRestoreBottomViewHidden:(BOOL)arg1;
- (id)arrowLayer;
- (void)setArrowLayer:(id)arg1;
- (unsigned long long)foldEdge;
- (void)setFoldEdge:(unsigned long long)arg1;
- (unsigned long long)splitLocation;
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
- (void).cxx_destruct;
@end
