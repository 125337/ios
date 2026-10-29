@interface MMFinderLiveSquareSwitchPanel : MMPageSheetBaseView
{
    id /* block */ _iKnowBlock; // +0x8
    id /* block */ _goToSettingBlock; // +0x10
    FinderLiveEntranceNavResponse_ExtInfo * _extInfo; // +0x18
    UIView * _backgroundView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMWebImageView * _guideImageView; // +0x30
    UIButton * _confirmBtn; // +0x38
    UILabel * _setLabel; // +0x40
}
- (id)initWithExtInfo:(id)arg1;
- (void)setupPageSheetConfig;
- (void)setupGuideImage;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)backgroundView;
- (id)titleLabel;
- (id)guideImageView;
- (id)confirmBtn;
- (id)setLabel;
- (void)onTapOK;
- (void)onTapSet;
- (id /* block */)iKnowBlock;
- (void)setIKnowBlock:(id /* block */)arg1;
- (id /* block */)goToSettingBlock;
- (void)setGoToSettingBlock:(id /* block */)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setGuideImageView:(id)arg1;
- (void)setConfirmBtn:(id)arg1;
- (void)setSetLabel:(id)arg1;
- (void).cxx_destruct;
@end
