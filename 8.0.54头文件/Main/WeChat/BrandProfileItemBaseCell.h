@interface BrandProfileItemBaseCell : BrandProfileMsgBaseCell
{
    MMWebImageView * _coverImageView; // +0x8
    BTRichTextTagView * _titleView; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIView * _separateLine; // +0x20
}
- (void)updateTitleView;
- (void)updateDescLabel;
- (void)updateCoverImageView;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSeparateLine;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end

