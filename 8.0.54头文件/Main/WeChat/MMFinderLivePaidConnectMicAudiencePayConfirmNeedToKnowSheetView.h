@interface MMFinderLivePaidConnectMicAudiencePayConfirmNeedToKnowSheetView : MMPageSheetBaseView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _contentLabel; // +0x10
    UIButton * _confirmButton; // +0x18
}
- (id)init;
- (void)initViews;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)onConfirm;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

