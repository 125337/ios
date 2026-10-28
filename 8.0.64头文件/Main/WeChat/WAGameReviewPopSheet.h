@interface WAGameReviewPopSheet : MMObject <MMWebImageViewDelegate, CAAnimationDelegate>
{
    NSString * _appId; // +0x8
    unsigned int _appVersion; // +0x10
    unsigned int _appState; // +0x14
    MMUIView * _interactView; // +0x18
    MMUIView * _sheetView; // +0x20
    MMWebImageView * _badgeImgView; // +0x28
    MMUILabel * _summaryLabel; // +0x30
    MMUILabel * _detailLabel; // +0x38
    MMUILabel * _commentLabel; // +0x40
    MMUIButton * _closeButton; // +0x48
    MMUIButton * _jumpButton; // +0x50
    GetWxaGameConfigResponse_WxagGameReviewsConfig * _config; // +0x58
    id <WAGameReviewPopSheetDelegate> _delegate; // +0x60
    UIView * _parentView; // +0x68
}
- (id)initWithAppid:(id)arg1 appVersion:(unsigned long long)arg2 appState:(unsigned int)arg3 Config:(id)arg4;
- (void)showInView:(id)arg1;
- (void)relayoutWhenResize;
- (void)dismissWithWithoutAnimation;
- (void)releaseViews;
- (double)sheetViewY;
- (double)sheetViewX;
- (double)sheetViewWidth;
- (double)sheetViewHeight;
- (void)addInteractView;
- (void)genSheetView;
- (id)closeButton;
- (id)jumpButton;
- (void)resetSheetViewCornerRadius;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onClickCloseButton:(id)arg1;
- (void)onClickJumpButton:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
