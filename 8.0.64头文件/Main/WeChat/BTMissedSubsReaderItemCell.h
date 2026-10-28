@interface BTMissedSubsReaderItemCell : BTMissedSubsBaseItemCell
{
    MMWebImageView * _coverImgView; // +0x8
    BTRichTextTagView * _titleTextView; // +0x10
}
- (void)setViewModel:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (unsigned long long)contentViewRaddiCorners;
- (id)coverImgView;
- (id)titleTextView;
- (void)setCoverImgView:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (void).cxx_destruct;
@end
