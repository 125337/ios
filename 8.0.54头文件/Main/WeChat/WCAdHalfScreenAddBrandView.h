@interface WCAdHalfScreenAddBrandView : WCAdHalfScreenContainerBaseView <MMPageSheetBottomViewDelegate>
{
    MMPageSheetBaseView * _sheetView; // +0x8
    UIImageView * _tipImageView; // +0x10
    WCAdURLImageView * _headImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    MMUILabel * _tipsLabel; // +0x30
}
- (id)initWithContainerInfo:(id)arg1;
- (void)setupSheetView;
- (void)initSubviews;
- (id)tipImageView;
- (id)tipsLabel;
- (id)headImageView;
- (id)titleLabel;
- (id)descLabel;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void)setTipImageView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

