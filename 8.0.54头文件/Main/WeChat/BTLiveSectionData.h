@interface BTLiveSectionData : BTBaseSectionData
{
    BOOL _isLiveBarExpand; // +0x8
    NSArray * _arrLiveInfo; // +0x10
    NSArray * _arrItemViewModel; // +0x18
    BTLiveSectionBarCellView * _cellView; // +0x20
    BrandFinderLiveInfo * _redDotLiveInfo; // +0x28
}
- (id)initWithSectionWidth:(double)arg1 arrLiveInfo:(id)arg2 mainCellRedDotLiveInfo:(id)arg3 delegate:(id)arg4;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (void)updateWithArrLiveInfo:(id)arg1 mainCellRedDotLiveInfo:(id)arg2;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (void)initItemViewModelList;
- (id)genItemViewModelWithLiveInfo:(id)arg1;
- (id)arrLiveInfo;
- (void)setArrLiveInfo:(id)arg1;
- (id)arrItemViewModel;
- (void)setArrItemViewModel:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (BOOL)isLiveBarExpand;
- (void)setIsLiveBarExpand:(BOOL)arg1;
- (id)redDotLiveInfo;
- (void)setRedDotLiveInfo:(id)arg1;
- (void).cxx_destruct;
@end

