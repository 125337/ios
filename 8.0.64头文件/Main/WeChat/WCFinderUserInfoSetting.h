@interface WCFinderUserInfoSetting : NSObject <PBCoding>
{
    BOOL _shouldShowTimelineRedDot; // +0x8
    BOOL _shouldShowPersonCenterRedDot; // +0x9
    BOOL _hasShowFindPostRedDot; // +0xa
    BOOL _hasShowCameraRedDot; // +0xb
    BOOL _hasShowLocationChangeTipsInProfile; // +0xc
    BOOL _isFinishShowTouchTips; // +0xd
    BOOL _hasShowDiscoveryFindPostRedDot; // +0xe
    BOOL _hasBuildFindPostRedDot; // +0xf
    BOOL _hasPostRealName; // +0x10
    int _unreadMessageCount; // +0x14
    WCFinderUserMentionModel * _mentionModel; // +0x18
    WCFinderUserMessage * _userMessage; // +0x20
    NSArray * _notInterestedConfigArr; // +0x28
    long long _touchTipsShouldTimes; // +0x30
    DataCenterConfig * _dataCenterConfig; // +0x38
    NSArray * _slideUpGuideConfigArr; // +0x40
    unsigned long long _requestFansCacheDate; // +0x48
}
+ (void)PBArrayAdd_unreadMessageCount;
+ (void)PBArrayAdd_mentionModel;
+ (void)PBArrayAdd_userMessage;
+ (void)PBArrayAdd_shouldShowTimelineRedDot;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_shouldShowPersonCenterRedDot;
+ (void)PBArrayAdd_hasShowFindPostRedDot;
+ (void)PBArrayAdd_hasShowCameraRedDot;
+ (void)PBArrayAdd_hasShowLocationChangeTipsInProfile;
+ (void)PBArrayAdd_dataCenterConfig;
+ (void)PBArrayAdd_isFinishShowTouchTips;
+ (void)PBArrayAdd_touchTipsShouldTimes;
+ (void)PBArrayAdd_hasShowDiscoveryFindPostRedDot;
+ (void)PBArrayAdd_hasBuildFindPostRedDot;
+ (void)PBArrayAdd_slideUpGuideConfigArr;
+ (void)PBArrayAdd_requestFansCacheDate;
+ (void)PBArrayAdd_hasPostRealName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)mentionModel;
- (id)userMessage;
- (id)notInterestedConfigArr;
- (id)slideUpGuideConfigArr;
- (id)description;
- (int)unreadMessageCount;
- (void)setUnreadMessageCount:(int)arg1;
- (void)setMentionModel:(id)arg1;
- (void)setUserMessage:(id)arg1;
- (BOOL)shouldShowTimelineRedDot;
- (void)setShouldShowTimelineRedDot:(BOOL)arg1;
- (BOOL)shouldShowPersonCenterRedDot;
- (void)setShouldShowPersonCenterRedDot:(BOOL)arg1;
- (void)setNotInterestedConfigArr:(id)arg1;
- (BOOL)hasShowFindPostRedDot;
- (void)setHasShowFindPostRedDot:(BOOL)arg1;
- (BOOL)hasShowCameraRedDot;
- (void)setHasShowCameraRedDot:(BOOL)arg1;
- (BOOL)hasShowLocationChangeTipsInProfile;
- (void)setHasShowLocationChangeTipsInProfile:(BOOL)arg1;
- (BOOL)isFinishShowTouchTips;
- (void)setIsFinishShowTouchTips:(BOOL)arg1;
- (long long)touchTipsShouldTimes;
- (void)setTouchTipsShouldTimes:(long long)arg1;
- (BOOL)hasShowDiscoveryFindPostRedDot;
- (void)setHasShowDiscoveryFindPostRedDot:(BOOL)arg1;
- (BOOL)hasBuildFindPostRedDot;
- (void)setHasBuildFindPostRedDot:(BOOL)arg1;
- (id)dataCenterConfig;
- (void)setDataCenterConfig:(id)arg1;
- (void)setSlideUpGuideConfigArr:(id)arg1;
- (unsigned long long)requestFansCacheDate;
- (void)setRequestFansCacheDate:(unsigned long long)arg1;
- (BOOL)hasPostRealName;
- (void)setHasPostRealName:(BOOL)arg1;
- (void).cxx_destruct;
@end
