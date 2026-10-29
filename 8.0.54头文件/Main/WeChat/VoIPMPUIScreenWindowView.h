@interface VoIPMPUIScreenWindowView : UIView <VoIPMPUITouchAlgorithmDelegate>
{
    BOOL _isMirror; // +0x8
    BOOL _canMove; // +0x9
    BOOL _isTalking; // +0xa
    BOOL _isFliping; // +0xb
    BOOL _isNewbieHidden; // +0xc
    BOOL _isRestoreTopViewHidden; // +0xd
    BOOL _isRestoreBottomViewHidden; // +0xe
    BOOL _isSuspend; // +0xf
    XImageViewRenderer * _renderer; // +0x10
    VoIPMPUIScreenProfileView * _profileView; // +0x18
    id /* block */ _onTapEvent; // +0x20
    id /* block */ _onRestoreEvent; // +0x28
    id /* block */ _willMoveEvent; // +0x30
    id /* block */ _onMoveEvent; // +0x38
    id /* block */ _didMoveEvent; // +0x40
    VoIPMPUITouchAlgorithm * _touchAlgorithm; // +0x48
    UIView * _canvasView; // +0x50
    UIView * _blurView; // +0x58
    UILabel * _newbieLabel; // +0x60
    UIView * _restoreTopView; // +0x68
    UIImageView * _restoreTopIconImageView; // +0x70
    UIView * _restoreBottomView; // +0x78
    UIImageView * _restoreBottomIconImageView; // +0x80
    CAShapeLayer * _arrowLayer; // +0x88
    unsigned long long _foldEdge; // +0x90
}
- (void)setupSuspend:(BOOL)arg1;
- (void)flipWithCompletion:(id /* block */)arg1;
- (void)layoutNewbie;
- (void)layoutRestore;
- (void)layoutBlurView;
- (void)layoutProfileView;
- (void)layoutCanvasView;
- (void)loadRender;
- (void)VoIPMPUITouchAlgorithmOnBegin;
- (void)VoIPMPUITouchAlgorithmOnEndWithOrigin:(CGPoint)arg1 size:(CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnMoveWithOrigin:(CGPoint)arg1 size:(CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnTaped:(CGPoint)arg1;
- (id)VoIPMPUITouchAlgorithmView;
- (CGPoint)VoIPMPUITouchAlgorithmTransformPointWithPoint:(CGPoint)arg1;
- (BOOL)VoIPMPUITouchAlgorithmIsFoldEnabled;
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
- (BOOL)isNewbieHidden;
- (void)setIsNewbieHidden:(BOOL)arg1;
- (id)newbieLabel;
- (void)setNewbieLabel:(id)arg1;
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
- (BOOL)isSuspend;
- (void)setIsSuspend:(BOOL)arg1;
- (void).cxx_destruct;
@end

