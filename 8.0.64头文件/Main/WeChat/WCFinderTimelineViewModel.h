@interface WCFinderTimelineViewModel : NSObject
{
    BOOL _showPostMenu; // +0x8
    BOOL _postFeedInsertMachineTab; // +0x9
    BOOL _timelineNoMoreCanShowHotSwitch; // +0xa
    BOOL _enableShowCity; // +0xb
    BOOL _enableShowFollowTab; // +0xc
    BOOL _enableShowRecommendTab; // +0xd
    BOOL _enableShowMachineTab; // +0xe
    BOOL _timelineScrollPageFeature; // +0xf
    BOOL _alreadyCheckLimitModeGuide; // +0x10
    BOOL _cancelSpeedViewAnimateBlock; // +0x11
    FinderRecommendCloseConfig * _recommentCloseConfig; // +0x18
    WCFinderSearchStatReportShim * _searchStatCollecter; // +0x20
    NSArray * _tabConfigArray; // +0x28
    long long _enterTLTabByFindPage; // +0x30
    long long _lastMachineRefreshTimeStamp; // +0x38
    WCFinderFeedContentVM * _lastPostBubbleContentVM; // +0x40
    long long _machineTabConfigStyle; // +0x48
    FinderNewUserPrepareResponse * _prepareResponse; // +0x50
    FinderTeenagerInfo * _teenagerInfo; // +0x58
}
- (id)init;
- (void)setUpNecessaryData;
- (void)setUpSwitchConfig;
- (void)setUpBusinessInfo;
- (void)setUpTabConfigPriority;
- (BOOL)showPostMenu;
- (void)setShowPostMenu:(BOOL)arg1;
- (id)recommentCloseConfig;
- (void)setRecommentCloseConfig:(id)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (id)searchStatCollecter;
- (void)setSearchStatCollecter:(id)arg1;
- (BOOL)timelineNoMoreCanShowHotSwitch;
- (void)setTimelineNoMoreCanShowHotSwitch:(BOOL)arg1;
- (BOOL)enableShowCity;
- (void)setEnableShowCity:(BOOL)arg1;
- (BOOL)enableShowFollowTab;
- (void)setEnableShowFollowTab:(BOOL)arg1;
- (BOOL)enableShowRecommendTab;
- (void)setEnableShowRecommendTab:(BOOL)arg1;
- (BOOL)enableShowMachineTab;
- (void)setEnableShowMachineTab:(BOOL)arg1;
- (BOOL)timelineScrollPageFeature;
- (void)setTimelineScrollPageFeature:(BOOL)arg1;
- (id)tabConfigArray;
- (void)setTabConfigArray:(id)arg1;
- (long long)enterTLTabByFindPage;
- (void)setEnterTLTabByFindPage:(long long)arg1;
- (BOOL)alreadyCheckLimitModeGuide;
- (void)setAlreadyCheckLimitModeGuide:(BOOL)arg1;
- (long long)lastMachineRefreshTimeStamp;
- (void)setLastMachineRefreshTimeStamp:(long long)arg1;
- (BOOL)cancelSpeedViewAnimateBlock;
- (void)setCancelSpeedViewAnimateBlock:(BOOL)arg1;
- (id)lastPostBubbleContentVM;
- (void)setLastPostBubbleContentVM:(id)arg1;
- (long long)machineTabConfigStyle;
- (void)setMachineTabConfigStyle:(long long)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (id)teenagerInfo;
- (void)setTeenagerInfo:(id)arg1;
- (void).cxx_destruct;
@end
