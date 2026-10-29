@interface MMFinderLiveConnectMicAudienceTableViewDataModel : NSObject
{
    NSMutableArray * _sectionTypeList; // +0x8
    unsigned long long _cellCountInMicUserSection; // +0x10
    unsigned long long _cellCountInApplyingMicUserSection; // +0x18
    unsigned long long _cellCountInCanBeInvitedMicUserSection; // +0x20
}
- (id)initWithMicUsersCount:(unsigned long long)arg1 applyingMicUsersCount:(unsigned long long)arg2 isAudiencePkEnable:(BOOL)arg3 canBeInvitedMicUsersCount:(unsigned long long)arg4 isPaidConnectMic:(BOOL)arg5 canShowKtvSongList:(BOOL)arg6;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (unsigned long long)cellTypeForRowAtIndexPath:(id)arg1;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (id)sectionTypeList;
- (void)setSectionTypeList:(id)arg1;
- (unsigned long long)cellCountInMicUserSection;
- (void)setCellCountInMicUserSection:(unsigned long long)arg1;
- (unsigned long long)cellCountInApplyingMicUserSection;
- (void)setCellCountInApplyingMicUserSection:(unsigned long long)arg1;
- (unsigned long long)cellCountInCanBeInvitedMicUserSection;
- (void)setCellCountInCanBeInvitedMicUserSection:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

