@interface MMLiveAutoGenerateReplayGuidePanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <MMLiveAutoGenerateReplayGuidePanelDelegate> _actionDelegate; // +0x8
    MMLiveAutoGenerateReplaySettings * _autoGenerateReplaySettings; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descriptionLabel; // +0x28
}
- (id)initWithAutoGenerateReplaySettings:(id)arg1;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)autoGenerateReplaySettings;
- (void)setAutoGenerateReplaySettings:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
