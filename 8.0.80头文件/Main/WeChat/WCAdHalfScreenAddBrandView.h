@interface WCAdHalfScreenAddBrandView : WCAdHalfScreenContainerBaseView <MMPageSheetBottomViewDelegate>
{
    WCAdHalfScreenContainerSheetView * _sheetView; // +0x8
    UIImageView * _tipImageView; // +0x10
    UIView * _headAndTitleView; // +0x18
    WCAdURLImageView * _headImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    MMUILabel * _tipsLabel; // +0x38
}
- (id)initWithContainerInfo:(id)arg1;
- (void)setupSheetView;
- (double)halfScreenContentWidth;
- (void)initSubviews;
- (void)layoutSubviewsWithContentWidth;
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
- (id)headAndTitleView;
- (void)setHeadAndTitleView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
