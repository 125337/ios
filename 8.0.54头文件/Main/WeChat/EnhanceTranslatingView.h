@interface EnhanceTranslatingView : UIImageView <IOCRTransMgrExt>
{
    unsigned int _sessionId; // +0x8
    BOOL _active; // +0xc
    int _scene; // +0x10
    id <EnhanceTranslatingViewDelegate> _delegate; // +0x18
    MMUIButton * _cancelButton; // +0x20
    double _cancelBtnCenterY; // +0x28
    OCRTransReport * _report; // +0x30
    EnhanceTranslatingCropImageView * _boardView; // +0x38
    EnhanceTranslatingRectBoardView * _rectBoardView; // +0x40
    UIView * _maskView; // +0x48
    UIImageView * _perspectiveAnimationView; // +0x50
    EnhanceTranslatingResultView * _resultView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)boardView;
- (id)maskView;
- (void)onTapMaskView;
- (id)resultView;
- (id)perspectiveAnimationView;
- (id)rectBoardView;
- (id)cancelButton;
- (id)contentImageView;
- (void)invalidate;
- (void)reset;
- (void)onTapCancelBtn;
- (void)showDocumentImg:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 leftTop:(CGPoint)arg4 rightTop:(CGPoint)arg5 rightBottom:(CGPoint)arg6 leftBottom:(CGPoint)arg7 boardAnimated:(BOOL)arg8;
- (void)doPerspectiveTransform:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 imgSize:(CGSize)arg4 leftTop:(CGPoint)arg5 rightTop:(CGPoint)arg6 rightBottom:(CGPoint)arg7 leftBottom:(CGPoint)arg8;
- (void)showResultView:(id)arg1 backgroundView:(id)arg2 boardSize:(CGSize)arg3;
- (void)autoTranslatingImage:(id)arg1;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(BOOL)arg2;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)cancelTranslate;
- (void)updateBeforeTransitionAnimation;
- (void)updateAfterTransitionAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (double)cancelBtnCenterY;
- (void)setCancelBtnCenterY:(double)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (void)setBoardView:(id)arg1;
- (void)setRectBoardView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setPerspectiveAnimationView:(id)arg1;
- (void)setResultView:(id)arg1;
- (void).cxx_destruct;
@end

