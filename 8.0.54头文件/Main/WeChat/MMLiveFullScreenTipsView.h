@interface MMLiveFullScreenTipsView : UIView
{
    MMLiveTaskId * _taskId; // +0x8
    UIView * _blurBackgroundView; // +0x10
    UIImageView * _iconImageView; // +0x18
    MMUILabel * _fullViewTipsTitleLabel; // +0x20
    MMUILabel * _fullViewTipsDescLabel; // +0x28
    UIButton * _closeButton; // +0x30
    id <MMLiveFullScreenTipsViewDelegate> _delegate; // +0x38
    UIView * _parentView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2 delegate:(id)arg3;
- (void)layoutUI;
- (void)layoutBlurBackgroundView;
- (void)layoutCloseButton;
- (id)fullViewTipsTitleLabel;
- (id)fullViewTipsDescLabel;
- (void)showInView:(id)arg1 titleWording:(id)arg2 descWording:(id)arg3;
- (void)setCloseButtonColor:(id)arg1 andTitleColor:(id)arg2;
- (void)relayout;
- (void)onCloseButtonClicked:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void)setFullViewTipsTitleLabel:(id)arg1;
- (void)setFullViewTipsDescLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end

