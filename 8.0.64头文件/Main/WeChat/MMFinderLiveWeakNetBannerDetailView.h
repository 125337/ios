@interface MMFinderLiveWeakNetBannerDetailView : MMPageSheetBaseView
{
    id /* block */ _gotoMoreFuncBlock; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subtitle1Label; // +0x20
    MMUILabel * _subdetail1Label; // +0x28
    MMUILabel * _subtitle2Label; // +0x30
    MMUILabel * _subdetail2Label; // +0x38
    MMUILabel * _recoverTitleLabel; // +0x40
    MMUILabel * _recoverDetailLabel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onGoSettingLabelClicked;
- (id /* block */)gotoMoreFuncBlock;
- (void)setGotoMoreFuncBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitle1Label;
- (void)setSubtitle1Label:(id)arg1;
- (id)subdetail1Label;
- (void)setSubdetail1Label:(id)arg1;
- (id)subtitle2Label;
- (void)setSubtitle2Label:(id)arg1;
- (id)subdetail2Label;
- (void)setSubdetail2Label:(id)arg1;
- (id)recoverTitleLabel;
- (void)setRecoverTitleLabel:(id)arg1;
- (id)recoverDetailLabel;
- (void)setRecoverDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end
