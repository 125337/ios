@interface BrandProfileItemBaseCell : BrandProfileMsgBaseCell
{
    BOOL _isLongPressEnable; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    BTRichTextTagView * _titleView; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIView * _separateLine; // +0x28
    UILongPressGestureRecognizer * _longPressGesture; // +0x30
}
- (void)updateTitleView;
- (void)updateDescLabel;
- (void)updateCoverImageView;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSeparateLine;
- (void)setIsLongPressEnable:(BOOL)arg1;
- (id)longPressGesture;
- (void)didLongPressCell:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (BOOL)isLongPressEnable;
- (void)setLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end
