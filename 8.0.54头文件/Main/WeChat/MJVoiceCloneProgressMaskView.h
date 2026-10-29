@interface MJVoiceCloneProgressMaskView : WCProgressMaskView
{
    id <MJVoiceCloneProgressMaskViewDelegate> _mj_delegate; // +0x8
    MMUIButton * _cancelButton; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)cancelButton;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (id)mj_delegate;
- (void)setMj_delegate:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end

