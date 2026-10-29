@interface MMFinderLivePaymentVisivilitySettingInfo : MMFinderLiveVisivilitySettingInfo
{
    BOOL _hasTrialTimeManuallyModified; // +0x8
    unsigned int _curPriceInWecoin; // +0xc
    unsigned int _curTrialTimeHour; // +0x10
    unsigned int _curTrialTimeMinute; // +0x14
    long long _purchaseLivePreviewType; // +0x18
    NSMutableArray * _chooseFreeContactChatroomList; // +0x20
    NSMutableArray * _chooseFreeContactUsernameList; // +0x28
    NSArray * _chooseFreeContactListForDigestDisplay; // +0x30
    NSMutableArray * _selectedFreeFileLists; // +0x38
    NSMutableArray * _selectedFreeTagNameList; // +0x40
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (void)recoverInfosToInitParam:(id)arg1;
- (BOOL)isSettingEnabled;
- (id)getDescriptionForCurrentSetting;
- (id)getDefaultDescription;
- (id)getFormatTrialTimeDesc;
- (BOOL)shouldDisplayLiveMemberAndSuperfanFree;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (unsigned int)curPriceInWecoin;
- (void)setCurPriceInWecoin:(unsigned int)arg1;
- (unsigned int)curTrialTimeHour;
- (void)setCurTrialTimeHour:(unsigned int)arg1;
- (unsigned int)curTrialTimeMinute;
- (void)setCurTrialTimeMinute:(unsigned int)arg1;
- (BOOL)hasTrialTimeManuallyModified;
- (void)setHasTrialTimeManuallyModified:(BOOL)arg1;
- (id)chooseFreeContactChatroomList;
- (void)setChooseFreeContactChatroomList:(id)arg1;
- (id)chooseFreeContactUsernameList;
- (void)setChooseFreeContactUsernameList:(id)arg1;
- (id)chooseFreeContactListForDigestDisplay;
- (void)setChooseFreeContactListForDigestDisplay:(id)arg1;
- (id)selectedFreeFileLists;
- (void)setSelectedFreeFileLists:(id)arg1;
- (id)selectedFreeTagNameList;
- (void)setSelectedFreeTagNameList:(id)arg1;
- (void).cxx_destruct;
@end
