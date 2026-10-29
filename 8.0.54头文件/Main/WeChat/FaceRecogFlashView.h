@interface FaceRecogFlashView : FaceRecogBaseView
{
    BOOL _closeButtonStrongStyle; // +0x8
    BOOL _showFacePositionBox; // +0x9
    BOOL _isUsedInWePay; // +0xa
    BOOL _isTitleTipAnimating; // +0xb
    BOOL _finished; // +0xc
    BOOL _animating; // +0xd
    BOOL _isReflecting; // +0xe
    BOOL _hasEverDetectFace; // +0xf
    FaceRecogRoundView * _faceRectView; // +0x10
    NSString * _businessTip; // +0x18
    NSString * _bizButtonAtFail; // +0x20
    NSString * _loadingTip; // +0x28
    UIFont * _businessTipFont; // +0x30
    UIColor * _businessTipColor; // +0x38
    UIFont * _actionTipFont; // +0x40
    double _faceRectWidth; // +0x48
    FaceRecogResultView * _resultView; // +0x50
    CAShapeLayer * _shapeLayer; // +0x58
    MMUILabel * _bigTipFaceTitle; // +0x60
    MMUILabel * _bigTipAnimateTitle; // +0x68
    MMUILabel * _businessTitleLabel; // +0x70
    UIView * _reflectColorView; // +0x78
    NSString * _curErrorTip; // +0x80
    NSString * _curMotionTip; // +0x88
}
- (id)init;
- (void)resetViews;
- (CGRect)getFaceFrame;
- (void)setBusinessTipFont:(id)arg1;
- (void)setBusinessTipColor:(id)arg1;
- (void)setActionTipFont:(id)arg1;
- (id)loadingTip;
- (void)setIsUsedInWePay:(BOOL)arg1;
- (void)initView;
- (void)viewDidAppear;
- (void)setTip:(id)arg1;
- (void)setTip:(id)arg1 animated:(BOOL)arg2;
- (void)initCancelBtn;
- (void)attachPreviewLayer:(id)arg1;
- (void)procedureDidStartDetectFace;
- (void)procedureDidDetectFace;
- (void)procedureDidDoneLoading;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3;
- (void)setBusinessTip:(id)arg1;
- (id)currBusinessTipColor;
- (id)currBusinessTipFont;
- (void)updateLayout;
- (void)initFaceRectView;
- (void)resetColor;
- (void)setReflectColor:(unsigned int)arg1;
- (void)setIsReflecting:(BOOL)arg1;
- (void)startCirleAnimation:(long long)arg1;
- (void)stopCircleAnimation;
- (void)showFinish;
- (void)setShowFacePositionBox:(BOOL)arg1;
- (void)cancelButtonDone;
- (void)closeButtonDone;
- (void)successAutoDone;
- (void)retryButtonDone;
- (void)onBizCustomButtonClick;
- (void)onFeedback;
- (id)faceRectView;
- (void)setFaceRectView:(id)arg1;
- (id)businessTip;
- (id)bizButtonAtFail;
- (void)setBizButtonAtFail:(id)arg1;
- (void)setLoadingTip:(id)arg1;
- (BOOL)closeButtonStrongStyle;
- (void)setCloseButtonStrongStyle:(BOOL)arg1;
- (id)businessTipFont;
- (id)businessTipColor;
- (id)actionTipFont;
- (double)faceRectWidth;
- (void)setFaceRectWidth:(double)arg1;
- (BOOL)showFacePositionBox;
- (BOOL)isUsedInWePay;
- (id)resultView;
- (void)setResultView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (BOOL)isTitleTipAnimating;
- (void)setIsTitleTipAnimating:(BOOL)arg1;
- (id)bigTipFaceTitle;
- (void)setBigTipFaceTitle:(id)arg1;
- (id)bigTipAnimateTitle;
- (void)setBigTipAnimateTitle:(id)arg1;
- (id)businessTitleLabel;
- (void)setBusinessTitleLabel:(id)arg1;
- (id)reflectColorView;
- (void)setReflectColorView:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (id)curErrorTip;
- (void)setCurErrorTip:(id)arg1;
- (id)curMotionTip;
- (void)setCurMotionTip:(id)arg1;
- (BOOL)isReflecting;
- (BOOL)hasEverDetectFace;
- (void)setHasEverDetectFace:(BOOL)arg1;
- (void).cxx_destruct;
@end

