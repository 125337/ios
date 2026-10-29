@interface BrandProfileMsgBaseViewModel : MMObject
{
    double _cellHeight; // +0x8
    BrandProfileMsgBaseCell * _cellView; // +0x10
    BrandProfileMessageSectionData * _sectionData; // +0x18
}
- (double)cellWidth;
- (double)cellHeight;
- (double)calCellHeight;
- (void)clearLayoutCache;
- (id)tableViewCellClassName;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (void).cxx_destruct;
@end
