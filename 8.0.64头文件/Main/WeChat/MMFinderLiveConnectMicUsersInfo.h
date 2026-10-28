@interface MMFinderLiveConnectMicUsersInfo : NSObject
{
    BOOL _hasFocusedUser; // +0x8
    BOOL _isGlobalSmallMode; // +0x9
    BOOL _isFitRenderMode; // +0xa
    unsigned long long _anchorZOrder; // +0x10
    unsigned long long _anchorFocusState; // +0x18
    unsigned long long _anchorUIType; // +0x20
    unsigned long long _anchorHeatValue; // +0x28
    double _aspectRatio; // +0x30
    unsigned long long _micLayoutMode; // +0x38
    unsigned long long _anchorMicIndex; // +0x40
    unsigned long long _cloudMixBackgroundType; // +0x48
    MMFinderLiveConnectMicPKInfo * _anchorPkInfo; // +0x50
    MMFinderLiveConnectMicUser * _fakeAnchorMicUser; // +0x58
    NSArray * _micAudienceUsersList; // +0x60
    NSArray * _otherRoomMicAnchorUsersList; // +0x68
    NSArray * _otherRoomMicAudienceUsersList; // +0x70
    NSArray * _allMicUsersList; // +0x78
    NSArray * _holeList; // +0x80
    NSArray * _unoccupiedSeatList; // +0x88
    CGRect _normalizedAnchorFrame; // +0x90
}
+ (BOOL)emptyUserListAllowedForLayoutMode:(unsigned long long)arg1;
- (BOOL)isInConnectedMicUI;
- (unsigned long long)connectMicSeiMode;
- (unsigned long long)audioRoomConnectMicSeiMode;
- (BOOL)useDesignatedAspectRatio;
- (BOOL)emptyUserListAllowed;
- (BOOL)enableMasking;
- (void)generateFakeAnchorMicUserWithSdkUserId:(id)arg1 andContact:(id)arg2;
- (BOOL)inCrossRoomPkLayoutMode;
- (BOOL)inAudiencePkLayoutMode;
- (BOOL)isSeiReadyForPk;
- (BOOL)showSeatName;
- (BOOL)isFullScreenDisplayMode;
- (BOOL)isAudienceMicFullScreenDisplayMode;
- (BOOL)isAnchorMicFullScreenDisplayMode;
- (BOOL)isAnchorPkChangeLayoutEnabled;
- (CGRect)normalizedAnchorFrame;
- (void)setNormalizedAnchorFrame:(CGRect)arg1;
- (unsigned long long)anchorZOrder;
- (void)setAnchorZOrder:(unsigned long long)arg1;
- (unsigned long long)anchorFocusState;
- (void)setAnchorFocusState:(unsigned long long)arg1;
- (BOOL)hasFocusedUser;
- (void)setHasFocusedUser:(BOOL)arg1;
- (unsigned long long)anchorUIType;
- (void)setAnchorUIType:(unsigned long long)arg1;
- (unsigned long long)anchorHeatValue;
- (void)setAnchorHeatValue:(unsigned long long)arg1;
- (BOOL)isGlobalSmallMode;
- (void)setIsGlobalSmallMode:(BOOL)arg1;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (unsigned long long)micLayoutMode;
- (void)setMicLayoutMode:(unsigned long long)arg1;
- (unsigned long long)anchorMicIndex;
- (void)setAnchorMicIndex:(unsigned long long)arg1;
- (BOOL)isFitRenderMode;
- (void)setIsFitRenderMode:(BOOL)arg1;
- (unsigned long long)cloudMixBackgroundType;
- (void)setCloudMixBackgroundType:(unsigned long long)arg1;
- (id)anchorPkInfo;
- (void)setAnchorPkInfo:(id)arg1;
- (id)fakeAnchorMicUser;
- (void)setFakeAnchorMicUser:(id)arg1;
- (id)micAudienceUsersList;
- (void)setMicAudienceUsersList:(id)arg1;
- (id)otherRoomMicAnchorUsersList;
- (void)setOtherRoomMicAnchorUsersList:(id)arg1;
- (id)otherRoomMicAudienceUsersList;
- (void)setOtherRoomMicAudienceUsersList:(id)arg1;
- (id)allMicUsersList;
- (void)setAllMicUsersList:(id)arg1;
- (id)holeList;
- (void)setHoleList:(id)arg1;
- (id)unoccupiedSeatList;
- (void)setUnoccupiedSeatList:(id)arg1;
- (void).cxx_destruct;
@end
