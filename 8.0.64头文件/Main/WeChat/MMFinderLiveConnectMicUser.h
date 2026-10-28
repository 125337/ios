@interface MMFinderLiveConnectMicUser : MMFinderLiveConnectMicSeatBaseInfo <NSCopying>
{
    BOOL _useVideo; // +0x20
    BOOL _initialUseVideo; // +0x21
    BOOL _isConnecting; // +0x22
    BOOL _isConnectWaiting; // +0x23
    BOOL _isSelf; // +0x24
    BOOL _isAnchor; // +0x25
    BOOL _isCurrentAnchor; // +0x26
    BOOL _hasConnectedOtherRoom; // +0x27
    BOOL _isAudioMode; // +0x28
    BOOL _isAppliedBySelf; // +0x29
    BOOL _isTalking; // +0x2a
    BOOL _isRemoteClosed; // +0x2b
    BOOL _isMicTalking; // +0x2c
    BOOL _isMicMutedByAnchor; // +0x2d
    BOOL _isMicMutedBySelf; // +0x2e
    BOOL _isLiveRoomAnchorMicMutedByAnchor; // +0x2f
    BOOL _isCurrentKtvSinger; // +0x30
    BOOL _isAnchorPkChangeLayoutEnabled; // +0x31
    unsigned int _boardType; // +0x34
    unsigned int _micUserAttrFlag; // +0x38
    unsigned int _sdkRoomId; // +0x3c
    int _talkingCount; // +0x40
    unsigned int _applyScene; // +0x44
    WCFinderContact * _connectMicFinderContact; // +0x48
    unsigned long long _userState; // +0x50
    unsigned long long _localCloseState; // +0x58
    unsigned long long _tryCloseCount; // +0x60
    NSString * _sdkUserId; // +0x68
    NSString * _sessionId; // +0x70
    NSString * _boardKey; // +0x78
    unsigned long long _sequence; // +0x80
    unsigned long long _expiredTime; // +0x88
    NSString * _sdkPkSign; // +0x90
    NSString * _sdkNewPkSign; // +0x98
    NSString * _coverImageUrlString; // +0xa0
    MMFinderLiveAudioModeBackgroundConfiguration * _audioModeBackgroundConfiguration; // +0xa8
    NSString * _anchorApplyId; // +0xb0
    unsigned long long _randomMicState; // +0xb8
    NSData * _randomMicBuffer; // +0xc0
    unsigned long long _randomMicApplyPos; // +0xc8
    unsigned long long _zOrder; // +0xd0
    unsigned long long _focusState; // +0xd8
    unsigned long long _uiType; // +0xe0
    NSString * _anchorSdkUserId; // +0xe8
    MMFinderLiveFreeMicLocalInfo * _freeMicLocalInfo; // +0xf0
    NSString * _selfDisplayName; // +0xf8
    unsigned long long _sourceType; // +0x100
    NSArray * _badgeInfos; // +0x108
    FinderLiveContact * _finderLiveContact; // +0x110
    unsigned long long _liveHeatValue; // +0x118
    unsigned long long _audienceApplySearId; // +0x120
    unsigned long long _paidMicLastDurationInSeconds; // +0x128
    unsigned long long _estimatedMicEndTimeOnAnchorSideInSeconds; // +0x130
    NSData * _sceneBuffer; // +0x138
    unsigned long long _recommendType; // +0x140
    CGRect _normalizedUserFrame; // +0x148
}
+ (id)connectMicUserFromAnchorContact:(id)arg1;
+ (id)connectMicUserFromContact:(id)arg1;
+ (id)connectMicUserFromContact:(id)arg1 finderLiveContact:(id)arg2;
+ (id)currentAnchorUserFromContact:(id)arg1;
+ (id)connectMicUserFromFinderObject:(id)arg1;
+ (id)genMicUserWithSdkUserId:(id)arg1 andContact:(id)arg2;
- (BOOL)hasAnchorAudioModeBackground;
- (BOOL)isMicAnonymousUser;
- (id)getLocationName;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isSelfUser;
- (BOOL)needInvite;
- (BOOL)isNeedInviteAudience;
- (BOOL)isFinderAuthor;
- (void)updateBadgeInfo:(id)arg1;
- (void)resetStatus;
- (void)resetAllStatusValue:(BOOL)arg1;
- (void)updateInfoFromServerWithOtherUserInfo:(id)arg1;
- (id)connectMicFinderContact;
- (void)setConnectMicFinderContact:(id)arg1;
- (BOOL)useVideo;
- (void)setUseVideo:(BOOL)arg1;
- (BOOL)initialUseVideo;
- (void)setInitialUseVideo:(BOOL)arg1;
- (unsigned long long)userState;
- (void)setUserState:(unsigned long long)arg1;
- (BOOL)isConnecting;
- (void)setIsConnecting:(BOOL)arg1;
- (BOOL)isConnectWaiting;
- (void)setIsConnectWaiting:(BOOL)arg1;
- (unsigned long long)localCloseState;
- (void)setLocalCloseState:(unsigned long long)arg1;
- (unsigned long long)tryCloseCount;
- (void)setTryCloseCount:(unsigned long long)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)boardKey;
- (void)setBoardKey:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (unsigned long long)sequence;
- (void)setSequence:(unsigned long long)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (unsigned int)micUserAttrFlag;
- (void)setMicUserAttrFlag:(unsigned int)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (BOOL)isCurrentAnchor;
- (void)setIsCurrentAnchor:(BOOL)arg1;
- (unsigned int)sdkRoomId;
- (void)setSdkRoomId:(unsigned int)arg1;
- (id)sdkPkSign;
- (void)setSdkPkSign:(id)arg1;
- (id)sdkNewPkSign;
- (void)setSdkNewPkSign:(id)arg1;
- (BOOL)hasConnectedOtherRoom;
- (void)setHasConnectedOtherRoom:(BOOL)arg1;
- (id)coverImageUrlString;
- (void)setCoverImageUrlString:(id)arg1;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (id)audioModeBackgroundConfiguration;
- (void)setAudioModeBackgroundConfiguration:(id)arg1;
- (BOOL)isAppliedBySelf;
- (void)setIsAppliedBySelf:(BOOL)arg1;
- (id)anchorApplyId;
- (void)setAnchorApplyId:(id)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (int)talkingCount;
- (void)setTalkingCount:(int)arg1;
- (BOOL)isRemoteClosed;
- (void)setIsRemoteClosed:(BOOL)arg1;
- (unsigned long long)randomMicState;
- (void)setRandomMicState:(unsigned long long)arg1;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (unsigned long long)randomMicApplyPos;
- (void)setRandomMicApplyPos:(unsigned long long)arg1;
- (CGRect)normalizedUserFrame;
- (void)setNormalizedUserFrame:(CGRect)arg1;
- (unsigned long long)zOrder;
- (void)setZOrder:(unsigned long long)arg1;
- (unsigned long long)focusState;
- (void)setFocusState:(unsigned long long)arg1;
- (unsigned long long)uiType;
- (void)setUiType:(unsigned long long)arg1;
- (id)anchorSdkUserId;
- (void)setAnchorSdkUserId:(id)arg1;
- (BOOL)isMicTalking;
- (void)setIsMicTalking:(BOOL)arg1;
- (id)freeMicLocalInfo;
- (void)setFreeMicLocalInfo:(id)arg1;
- (id)selfDisplayName;
- (void)setSelfDisplayName:(id)arg1;
- (BOOL)isMicMutedByAnchor;
- (void)setIsMicMutedByAnchor:(BOOL)arg1;
- (BOOL)isMicMutedBySelf;
- (void)setIsMicMutedBySelf:(BOOL)arg1;
- (BOOL)isLiveRoomAnchorMicMutedByAnchor;
- (void)setIsLiveRoomAnchorMicMutedByAnchor:(BOOL)arg1;
- (BOOL)isCurrentKtvSinger;
- (void)setIsCurrentKtvSinger:(BOOL)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (id)finderLiveContact;
- (void)setFinderLiveContact:(id)arg1;
- (unsigned long long)liveHeatValue;
- (void)setLiveHeatValue:(unsigned long long)arg1;
- (unsigned long long)audienceApplySearId;
- (void)setAudienceApplySearId:(unsigned long long)arg1;
- (BOOL)isAnchorPkChangeLayoutEnabled;
- (void)setIsAnchorPkChangeLayoutEnabled:(BOOL)arg1;
- (unsigned long long)paidMicLastDurationInSeconds;
- (void)setPaidMicLastDurationInSeconds:(unsigned long long)arg1;
- (unsigned long long)estimatedMicEndTimeOnAnchorSideInSeconds;
- (void)setEstimatedMicEndTimeOnAnchorSideInSeconds:(unsigned long long)arg1;
- (id)sceneBuffer;
- (void)setSceneBuffer:(id)arg1;
- (unsigned long long)recommendType;
- (void)setRecommendType:(unsigned long long)arg1;
- (unsigned int)applyScene;
- (void)setApplyScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
