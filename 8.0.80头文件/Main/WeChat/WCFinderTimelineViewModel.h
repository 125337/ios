@interface WCFinderTimelineViewModel : NSObject
{
    BOOL _showPostMenu; // +0x8
    BOOL _postFeedInsertMachineTab; // +0x9
    BOOL _enableShowCity; // +0xa
    BOOL _enableShowDramaTab; // +0xb
    BOOL _enableShowFollowTab; // +0xc
    BOOL _enableShowRecommendTab; // +0xd
    BOOL _enableShowMachineTab; // +0xe
    BOOL _alreadyCheckLimitModeGuide; // +0xf
    BOOL _cancelSpeedViewAnimateBlock; // +0x10
    FinderRecommendCloseConfig * _recommentCloseConfig; // +0x18
    WCFinderSearchStatReportShim * _searchStatCollecter; // +0x20
    NSArray * _tabConfigArray; // +0x28
    long long _enterTLTabByFindPage; // +0x30
    long long _likePrivacyGuideShowState; // +0x38
    long long _lastMachineRefreshTimeStamp; // +0x40
    WCFinderFeedContentVM * _lastPostBubbleContentVM; // +0x48
    long long _machineTabConfigStyle; // +0x50
    FinderNewUserPrepareResponse * _prepareResponse; // +0x58
    FinderTeenagerInfo * _teenagerInfo; // +0x60
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
- (BOOL)enableShowCity;
- (void)setEnableShowCity:(BOOL)arg1;
- (BOOL)enableShowDramaTab;
- (void)setEnableShowDramaTab:(BOOL)arg1;
- (BOOL)enableShowFollowTab;
- (void)setEnableShowFollowTab:(BOOL)arg1;
- (BOOL)enableShowRecommendTab;
- (void)setEnableShowRecommendTab:(BOOL)arg1;
- (BOOL)enableShowMachineTab;
- (void)setEnableShowMachineTab:(BOOL)arg1;
- (id)tabConfigArray;
- (void)setTabConfigArray:(id)arg1;
- (long long)enterTLTabByFindPage;
- (void)setEnterTLTabByFindPage:(long long)arg1;
- (BOOL)alreadyCheckLimitModeGuide;
- (void)setAlreadyCheckLimitModeGuide:(BOOL)arg1;
- (long long)likePrivacyGuideShowState;
- (void)setLikePrivacyGuideShowState:(long long)arg1;
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
