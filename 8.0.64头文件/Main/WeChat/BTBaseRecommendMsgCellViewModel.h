@interface BTBaseRecommendMsgCellViewModel : BTBaseItemCellViewModel
{
    unsigned int _itemIndex; // +0x28
    BTRecommendSectionData * _sectionData; // +0x30
}
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 viewWidth:(double)arg4;
- (void)clearCacheOnDataChanged;
- (id)feedbackInfo;
- (BOOL)bShowFeedback;
- (double)separateLineWidth;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (unsigned int)itemIndex;
- (void)setItemIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
