@interface GCAtCellModelLayout : GCDynamicLayoutProvider
{
    double _headWidth; // +0x8
    double _avatarToTitleSpace; // +0x10
    GCLabelDynamicLayout * _titleLabelLayout; // +0x18
    double _titleToSubTitleSpace; // +0x20
    GCLabelDynamicLayout * _subTitleLayout; // +0x28
    double _selectedImgWidth; // +0x30
    double _cellHeight; // +0x38
    double _totalHeight; // +0x40
    UIEdgeInsets _collectionViewInset; // +0x48
}
- (id)init;
- (double)headWidth;
- (void)setHeadWidth:(double)arg1;
- (double)avatarToTitleSpace;
- (void)setAvatarToTitleSpace:(double)arg1;
- (id)titleLabelLayout;
- (void)setTitleLabelLayout:(id)arg1;
- (double)titleToSubTitleSpace;
- (void)setTitleToSubTitleSpace:(double)arg1;
- (id)subTitleLayout;
- (void)setSubTitleLayout:(id)arg1;
- (double)selectedImgWidth;
- (void)setSelectedImgWidth:(double)arg1;
- (UIEdgeInsets)collectionViewInset;
- (void)setCollectionViewInset:(UIEdgeInsets)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)totalHeight;
- (void)setTotalHeight:(double)arg1;
- (void).cxx_destruct;
@end

