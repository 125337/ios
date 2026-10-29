@interface MMWebTransHelpButton : UIView
{
    id <WebTransHelpButtonDelegate> _delegate; // +0x8
    UIView * _view; // +0x10
    MMUIButton * _button; // +0x18
    UILabel * _label; // +0x20
    UIImageView * _imageIconView; // +0x28
    UIImageView * _imageArrowView; // +0x30
    long long _btnViewStatus; // +0x38
}
- (id)init;
- (void)interalInit;
- (void)switchToTransView;
- (void)switchToRevertView;
- (void)switchToRevertViewWithTitle:(id)arg1;
- (void)setMPColor;
- (void)setWebColor;
- (void)setNoteColor;
- (void)layoutSubviews;
- (void)triggerDelegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)imageIconView;
- (void)setImageIconView:(id)arg1;
- (id)imageArrowView;
- (void)setImageArrowView:(id)arg1;
- (long long)btnViewStatus;
- (void)setBtnViewStatus:(long long)arg1;
- (void).cxx_destruct;
@end

