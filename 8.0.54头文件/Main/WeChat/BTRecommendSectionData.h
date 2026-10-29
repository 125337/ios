@interface BTRecommendSectionData : BTMsgSectionData <BrandTimelineMsgMgrExt>
{
    BTRecommendMsgData * _recommendData; // +0x18
    NSMutableDictionary * _cachedRowHeightMap; // +0x20
}
+ (BOOL)canCreateSectionDataWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
- (void)updateMsgWrap:(id)arg1;
- (void)initOrUpdateItemViewModelArr;
- (id)arrAccountData;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)heightForSectionFooter;
- (id)cachedRowHeightMap;
- (void)updateHeight:(double)arg1 forRow:(long long)arg2;
- (unsigned long long)sectionType;
- (BOOL)isMsgTopRightUseRecReason;
- (void)onFinderRecommendCardDidDeleteFinderCardDataWithObjectIdArr:(id)arg1 msgWrapBrandTimelineMsgId:(unsigned int)arg2;
- (void)updateDataWithObjectIdArr:(id)arg1;
- (id)recommendData;
- (void)setCachedRowHeightMap:(id)arg1;
- (void).cxx_destruct;
@end

