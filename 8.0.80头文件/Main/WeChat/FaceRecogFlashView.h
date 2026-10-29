@interface FaceRecogFlashView : FaceRecogBaseView
{
    BOOL _closeButtonStrongStyle; // +0x8
    BOOL _showFacePositionBox; // +0x9
    BOOL _isUsedInWePay; // +0xa
    BOOL _hideResultView; // +0xb
    BOOL _isTitleTipAnimating; // +0xc
    BOOL _finished; // +0xd
    BOOL _animating; // +0xe
    BOOL _isReflecting; // +0xf
    BOOL _hasEverDetectFace; // +0x10
    FaceRecogRoundView * _faceRectView; // +0x18
    NSString * _businessTip; // +0x20
    NSString * _bizButtonAtFail; // +0x28
    NSString * _loadingTip; // +0x30
    UIFont * _businessTipFont; // +0x38
    UIColor * _businessTipColor; // +0x40
    UIFont * _actionTipFont; // +0x48
    double _faceRectWidth; // +0x50
    FaceIdentifyResp_CTIDVerifyParam * _ctidVerifyParam; // +0x58
    FaceRecogResultView * _resultView; // +0x60
    CAShapeLayer * _shapeLayer; // +0x68
    MMUILabel * _bigTipFaceTitle; // +0x70
    MMUILabel * _bigTipAnimateTitle; // +0x78
    MMUILabel * _businessTitleLabel; // +0x80
    UIView * _reflectColorView; // +0x88
    NSString * _curErrorTip; // +0x90
    NSString * _curMotionTip; // +0x98
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
- (void)procedureDidFinishCTIDVerify;
- (void)procedureDidFinishCTIDVerifyWithTitle:(id)arg1 desc:(id)arg2;
- (void)procedureDidFailedWithCTIDSystemError;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3 showCtidVerifyEntry:(BOOL)arg4 ctidVerifyParam:(id)arg5;
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
- (void)showCTIDFinishWithTitle:(id)arg1 desc:(id)arg2;
- (void)showCTIDSystemError;
- (void)setShowFacePositionBox:(BOOL)arg1;
- (void)cancelButtonDone;
- (void)closeButtonDone;
- (void)successAutoDone;
- (void)retryButtonDone;
- (void)onBizCustomButtonClick;
- (void)onFeedback;
- (void)onCTIDVerifyButtonClick;
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
- (BOOL)hideResultView;
- (void)setHideResultView:(BOOL)arg1;
- (id)ctidVerifyParam;
- (void)setCtidVerifyParam:(id)arg1;
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
