@interface BypSendPCRemindSheetView : MMPageSheetBaseView
{
    BOOL _isClosing; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    UIView * _contentView; // +0x28
    id /* block */ _closeCallback; // +0x30
}
- (id)initWithTitle:(id)arg1 iconUrl:(id)arg2 desc:(id)arg3;
- (void)initSubviews:(id)arg1 iconUrl:(id)arg2 desc:(id)arg3;
- (void)initReportInfoWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)fitSubViews;
- (void)setImageWithUrl:(id)arg1;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)isClosing;
- (void)setIsClosing:(BOOL)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
