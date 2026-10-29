@interface WCAdDetermineHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCAdDetermineHalfScreenViewDelegate> _delegate; // +0x8
    WCAdDetermineHalfScreenInfo * _determineInfo; // +0x10
    WCAdURLImageView * _iconView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
}
- (id)initWithDetermineInfo:(id)arg1;
- (void)initCommonUI;
- (void)initDetermineUI;
- (void)layoutDetermineUI;
- (id)iconView;
- (id)nameLabel;
- (id)titleLabel;
- (id)descLabel;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetDidRotation;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)determineInfo;
- (void)setDetermineInfo:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
