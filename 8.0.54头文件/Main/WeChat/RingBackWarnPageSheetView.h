@interface RingBackWarnPageSheetView : MMPageSheetBaseView
{
    id <RingRecommendSwitchDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    UIView * _customizedContentView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _messageLabel; // +0x28
    UIButton * _cancelButton; // +0x30
    UIButton * _acceptButton; // +0x38
}
- (id)init;
- (void)initView;
- (void)cancelButtonDidClick:(id)arg1;
- (void)acceptButtonDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)customizedContentView;
- (void)setCustomizedContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end

