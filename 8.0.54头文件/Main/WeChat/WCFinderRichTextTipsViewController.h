@interface WCFinderRichTextTipsViewController : MMUIViewController <ILinkEventExt, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    id <WCFinderRictTextTipsViewControllerDelegate> _delegate; // +0x68
    UIView * _backgroundView; // +0x70
    UIView * _contentView; // +0x78
    UIImageView * _iconView; // +0x80
    UILabel * _titleLabel; // +0x88
    RichTextView * _tipsLabel; // +0x90
    UIButton * _confirmButton; // +0x98
    UIButton * _cancelButton; // +0xa0
}
- (id)init;
- (void)showTipsWithTipsTitle:(id)arg1 tipsDetail:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 viewController:(id)arg5;
- (void)cancel;
- (void)confirm;
- (void)hide;
- (void)realHideWithoutReport;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(BOOL)arg2 topRight:(BOOL)arg3 bottomLeft:(BOOL)arg4 bottomRight:(BOOL)arg5 radius:(float)arg6;
- (id)backgroundView;
- (id)contentView;
- (id)iconView;
- (id)titleLabel;
- (id)tipsLabel;
- (id)confirmButton;
- (id)cancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end

