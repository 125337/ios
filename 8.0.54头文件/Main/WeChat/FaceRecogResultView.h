@interface FaceRecogResultView : MMUIView
{
    UILabel * _waitLabel; // +0x8
    UIImageView * _loadingBlurView; // +0x10
    UIImageView * _loadingIndicator; // +0x18
    UIView * _faceIconBgView; // +0x20
    UIImageView * _faceIcon; // +0x28
    UIButton * _closeButton; // +0x30
    UIButton * _feedbackButton; // +0x38
    BOOL _showIconFromFaceCenter; // +0x40
    double _faceTipsTopOffset; // +0x48
    UIButton * _bizCustomButton; // +0x50
    UILabel * _subDescLabel; // +0x58
    CGRect _faceRect; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)resetView;
- (void)setFaceTipsTopOffset:(double)arg1;
- (void)showLoadingWithTip:(id)arg1;
- (void)startLoadingAnimate;
- (void)showFeedBackBtn:(id)arg1 sel:(SEL)arg2;
- (void)showCloseBtn:(id)arg1 strongStyle:(BOOL)arg2 target:(id)arg3 sel:(SEL)arg4;
- (void)showBizBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)showFailedTip:(id)arg1;
- (void)showFailedTip:(id)arg1 subDesc:(id)arg2;
- (void)showOKView;
- (void)stopLoading;
- (CGRect)getTipIconFrame;
- (void)layoutSubviews;
- (CGRect)faceRect;
- (void)setFaceRect:(CGRect)arg1;
- (double)faceTipsTopOffset;
- (BOOL)showIconFromFaceCenter;
- (void)setShowIconFromFaceCenter:(BOOL)arg1;
- (id)bizCustomButton;
- (void)setBizCustomButton:(id)arg1;
- (id)subDescLabel;
- (void)setSubDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

