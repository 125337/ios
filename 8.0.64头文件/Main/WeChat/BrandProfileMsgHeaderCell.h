@interface BrandProfileMsgHeaderCell : BrandProfileMsgBaseCell
{
    MMUILabel * _titleLabel; // +0x8
    UIImageView * _foldImgView; // +0x10
    UIImageView * _publishFailedImgView; // +0x18
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
- (void).cxx_destruct;
@end
