@interface MJExportProgressMaskView : WCProgressMaskView
{
    id <MJExportProgressMaskViewDelegate> _mj_delegate; // +0x8
    MMUIButton * _cancelButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupCancelButton;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)enableCancelAction;
- (void)disableCancelAction;
- (id)mj_delegate;
- (void)setMj_delegate:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
