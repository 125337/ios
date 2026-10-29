@interface BTRecoFlowSectionData : BTBaseSectionData
{
    BOOL _isExposed; // +0x8
    GetRecommendFeedsResp_RecommendCardMsg * _cardMsg; // +0x10
    NSString * _titleTag; // +0x18
    NSMutableDictionary * _cachedRowHeightMap; // +0x20
}
+ (BOOL)canCreateSectionDataWithCardMsg:(id)arg1;
- (id)initWithSectionWidth:(double)arg1 cardMsg:(id)arg2;
- (void)dealloc;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (id)cachedRowHeightMap;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (void)updateHeight:(double)arg1 forRow:(long long)arg2;
- (double)heightForSectionFooter;
- (id)identifierWithRow:(unsigned long long)arg1;
- (id)cardMsg;
- (void)setCardMsg:(id)arg1;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (id)titleTag;
- (void)setTitleTag:(id)arg1;
- (void)setCachedRowHeightMap:(id)arg1;
- (void).cxx_destruct;
@end
