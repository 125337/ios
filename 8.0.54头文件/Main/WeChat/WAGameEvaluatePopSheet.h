@interface WAGameEvaluatePopSheet : MMObject <CAAnimationDelegate>
{
    NSString * _appId; // +0x8
    NSString * _weAppName; // +0x10
    MMUIView * _interactView; // +0x18
    MMUIView * _sheetView; // +0x20
    MMUIButton * _closeButton; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _questionLabel; // +0x38
    MMUIView * _optionView; // +0x40
    UIImageView * _thanksView; // +0x48
    MMUILabel * _thanksLabel; // +0x50
    unsigned int _choseOption; // +0x58
    GetWxaGameConfigResponse_WxagGameOriginalReviewConfig * _config; // +0x60
    id <WAGameEvaluatePopSheetDelegate> _delegate; // +0x68
    UIView * _parentView; // +0x70
}
- (id)initWithAppid:(id)arg1 WeAppName:(id)arg2 Config:(id)arg3;
- (void)showInView:(id)arg1;
- (void)relayoutWhenResize;
- (void)dismissWithWithoutAnimation;
- (void)releaseViews;
- (double)sheetViewWidth;
- (void)addInteractView;
- (void)genSheetView;
- (id)genOptionView;
- (id)genOptionButtonWithIndex:(unsigned int)arg1;
- (id)closeButton;
- (void)resetSheetViewCornerRadius;
- (void)showThanksView;
- (void)setThanksViewAnimation;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onClickCloseButton:(id)arg1;
- (void)onClickOptionButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end

