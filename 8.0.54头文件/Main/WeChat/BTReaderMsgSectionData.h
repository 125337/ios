@interface BTReaderMsgSectionData : BTMsgSectionData <BTReaderItemCellViewModelDelegate>
{
    CContact * _contact; // +0x18
    BOOL _bIsBrandSettingFold; // +0x20
    BOOL _isOftenReadContact; // +0x21
    BOOL _isStarContact; // +0x22
    BOOL _isTopItemShowBigCover; // +0x23
}
+ (BOOL)canCreateSectionDataWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
- (void)updateMsgWrap:(id)arg1;
- (void)updateTopItemCoverStatus;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (void)setSectionWidth:(double)arg1;
- (void)initItemViewModelArr;
- (void)updateItemViewModelArr;
- (BOOL)isFold;
- (void)updateContact:(BOOL)arg1;
- (unsigned long long)itemShowCount;
- (id)arrReaderItemCellViewModel;
- (BOOL)bIsExpand;
- (BOOL)isTopItemShowLargeCover;
- (BOOL)isMsgTopRightUseRecReason;
- (id)bizUsername;
- (unsigned long long)firstMid;
- (unsigned int)lastIdx;
- (unsigned int)expanState;
- (void)onItemViewModelViewHeightChange:(id)arg1;
- (id)contact;
- (BOOL)bIsBrandSettingFold;
- (BOOL)isOftenReadContact;
- (BOOL)isStarContact;
- (BOOL)isTopItemShowBigCover;
- (void)setIsTopItemShowBigCover:(BOOL)arg1;
- (void).cxx_destruct;
@end

