@interface BrandProfileMsgHeaderCell : BrandProfileMsgBaseCell
{
    BOOL _useFeatureStyle; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _foldImgView; // +0x18
    UIImageView * _publishFailedImgView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (void)updateSubviews;
- (void)initFoldImgView;
- (void)initPublishFailedImgView;
- (void)layoutSubviews;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)foldImgView;
- (void)setFoldImgView:(id)arg1;
- (id)publishFailedImgView;
- (void)setPublishFailedImgView:(id)arg1;
- (BOOL)useFeatureStyle;
- (void)setUseFeatureStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
