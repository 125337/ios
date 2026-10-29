@interface WCFinderDebugSetting : NSObject <PBCoding>
{
    BOOL _showSpeedFloatWindow; // +0x8
    BOOL _testStreamSwitch; // +0x9
    BOOL _showFansCount; // +0xa
    BOOL _isHeaderBlurStyle; // +0xb
    BOOL _isBulletAnimationAtTop; // +0xc
    BOOL _shouldHideLiveEntrance; // +0xd
    BOOL _openFPSTest; // +0xe
    BOOL _openFPSAutoScroll; // +0xf
    BOOL _openRotationDector; // +0x10
    unsigned long long _useRecommendSystemType; // +0x18
    unsigned long long _configFeedStyle; // +0x20
    unsigned long long _configNearbyStyle; // +0x28
    unsigned long long _configMachineStyle; // +0x30
    unsigned long long _TLRightItemType; // +0x38
    unsigned long long _unreadFeedNum; // +0x40
    unsigned long long _unreadLiveNum; // +0x48
    unsigned long long _unreadDynamicNum; // +0x50
    unsigned long long _totalFeedNum; // +0x58
    unsigned long long _totalLiveNum; // +0x60
    unsigned long long _totalDynamicNum; // +0x68
}
+ (void)PBArrayAdd_showSpeedFloatWindow;
+ (void)PBArrayAdd_testStreamSwitch;
+ (void)PBArrayAdd_showFansCount;
+ (void)PBArrayAdd_useRecommendSystemType;
+ (void)PBArrayAdd_isHeaderBlurStyle;
+ (void)PBArrayAdd_configFeedStyle;
+ (void)PBArrayAdd_configNearbyStyle;
+ (void)PBArrayAdd_configMachineStyle;
+ (void)PBArrayAdd_isBulletAnimationAtTop;
+ (void)PBArrayAdd_shouldHideLiveEntrance;
+ (void)PBArrayAdd_TLRightItemType;
+ (void)PBArrayAdd_unreadFeedNum;
+ (void)PBArrayAdd_unreadLiveNum;
+ (void)PBArrayAdd_unreadDynamicNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)showSpeedFloatWindow;
- (void)setShowSpeedFloatWindow:(BOOL)arg1;
- (BOOL)testStreamSwitch;
- (void)setTestStreamSwitch:(BOOL)arg1;
- (BOOL)showFansCount;
- (void)setShowFansCount:(BOOL)arg1;
- (unsigned long long)useRecommendSystemType;
- (void)setUseRecommendSystemType:(unsigned long long)arg1;
- (BOOL)isHeaderBlurStyle;
- (void)setIsHeaderBlurStyle:(BOOL)arg1;
- (unsigned long long)configFeedStyle;
- (void)setConfigFeedStyle:(unsigned long long)arg1;
- (unsigned long long)configNearbyStyle;
- (void)setConfigNearbyStyle:(unsigned long long)arg1;
- (unsigned long long)configMachineStyle;
- (void)setConfigMachineStyle:(unsigned long long)arg1;
- (BOOL)isBulletAnimationAtTop;
- (void)setIsBulletAnimationAtTop:(BOOL)arg1;
- (BOOL)shouldHideLiveEntrance;
- (void)setShouldHideLiveEntrance:(BOOL)arg1;
- (unsigned long long)TLRightItemType;
- (void)setTLRightItemType:(unsigned long long)arg1;
- (unsigned long long)unreadFeedNum;
- (void)setUnreadFeedNum:(unsigned long long)arg1;
- (unsigned long long)unreadLiveNum;
- (void)setUnreadLiveNum:(unsigned long long)arg1;
- (unsigned long long)unreadDynamicNum;
- (void)setUnreadDynamicNum:(unsigned long long)arg1;
- (unsigned long long)totalFeedNum;
- (void)setTotalFeedNum:(unsigned long long)arg1;
- (unsigned long long)totalLiveNum;
- (void)setTotalLiveNum:(unsigned long long)arg1;
- (unsigned long long)totalDynamicNum;
- (void)setTotalDynamicNum:(unsigned long long)arg1;
- (BOOL)openFPSTest;
- (void)setOpenFPSTest:(BOOL)arg1;
- (BOOL)openFPSAutoScroll;
- (void)setOpenFPSAutoScroll:(BOOL)arg1;
- (BOOL)openRotationDector;
- (void)setOpenRotationDector:(BOOL)arg1;
@end

