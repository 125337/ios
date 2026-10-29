@interface MMFinderLiveConnectMicPlugin : MMLiveTaskBaseFunctionPlugin
{
    BOOL _isMultiAnchorMicEnabled; // +0x8
    BOOL _isAudiencePkEnable; // +0x9
    BOOL _isCrossRoomPkEnable; // +0xa
    BOOL _isOrdinaryLiveInviteAudienceMicEnabled; // +0xb
    BOOL _isDisplayMicLocationEnabled; // +0xc
    BOOL _isUseNewPKPanel; // +0xd
    BOOL _isLikeMicAudienceEnabled; // +0xe
    BOOL _allowEmptyMicTopicForChatRoom; // +0xf
    BOOL _isDualMicLayoutModeAvailable; // +0x10
    BOOL _isPIPMicLayoutModeAvailable; // +0x11
    BOOL _isMicInviteShareToChatAvailable; // +0x12
    BOOL _isMicAudienceInviteMicAvailable; // +0x13
    unsigned int _locationDisplayTimeInterval; // +0x14
    unsigned int _anchorPkPanelChangeSessionOpenTimes; // +0x18
    unsigned int _anchorPkPanelChangeSessionDurationTimeS; // +0x1c
    unsigned int _micTopicSource; // +0x20
    FinderLiveBattleSettingInfo * _battleSettings; // +0x28
    NSString * _micTopicTitle; // +0x30
    NSString * _micTopic; // +0x38
    unsigned long long _micTopicVersion; // +0x40
    unsigned long long _micTopicRefFeedId; // +0x48
    NSString * _micTopicReportJson; // +0x50
    MMLiveAudioRoomContext * _audioRoomContext; // +0x58
}
- (void)updateMultiAnchorMicEnabled:(BOOL)arg1;
- (void)updateIsAudiencePkEnable:(BOOL)arg1;
- (void)updateIsCrossRoomPkEnable:(BOOL)arg1;
- (void)updateIsOrdinaryLiveInviteAudienceMicEnabled:(BOOL)arg1;
- (void)updateLocationDisplayTimeInterval:(unsigned int)arg1;
- (void)updateIsDisplayMicLocationEnabled:(BOOL)arg1;
- (void)updateIsUseNewPKPanel:(BOOL)arg1;
- (void)updateAnchorPkPanelChangeSessionOpenTimes:(unsigned int)arg1;
- (void)updateAnchorPkPanelChangeSessionDurationTimeS:(unsigned int)arg1;
- (void)updateIsLikeMicAudienceEnabled:(BOOL)arg1;
- (BOOL)updateMicTopic:(id)arg1;
- (BOOL)updateMicTopic:(id)arg1 version:(unsigned long long)arg2;
- (void)updateMicTopicSource:(unsigned int)arg1 refFeedId:(unsigned long long)arg2 reportJson:(id)arg3;
- (void)updateAllowEmptyMicTopicForChatRoom:(BOOL)arg1;
- (void)updateDataWithFinderLiveMicConfig:(id)arg1;
- (void)updateAudioRoomContext:(id)arg1;
- (void)updateIsDualMicLayoutModeAvailable:(BOOL)arg1;
- (void)updateIsPIPMicLayoutModeAvailable:(BOOL)arg1;
- (void)updateIsMicInviteShareToChatAvailable:(BOOL)arg1;
- (void)updateIsMicAudienceInviteMicAvailable:(BOOL)arg1;
- (BOOL)isMultiAnchorMicEnabled;
- (void)setIsMultiAnchorMicEnabled:(BOOL)arg1;
- (BOOL)isAudiencePkEnable;
- (void)setIsAudiencePkEnable:(BOOL)arg1;
- (BOOL)isCrossRoomPkEnable;
- (void)setIsCrossRoomPkEnable:(BOOL)arg1;
- (id)battleSettings;
- (void)setBattleSettings:(id)arg1;
- (BOOL)isOrdinaryLiveInviteAudienceMicEnabled;
- (void)setIsOrdinaryLiveInviteAudienceMicEnabled:(BOOL)arg1;
- (BOOL)isDisplayMicLocationEnabled;
- (void)setIsDisplayMicLocationEnabled:(BOOL)arg1;
- (unsigned int)locationDisplayTimeInterval;
- (void)setLocationDisplayTimeInterval:(unsigned int)arg1;
- (BOOL)isUseNewPKPanel;
- (void)setIsUseNewPKPanel:(BOOL)arg1;
- (unsigned int)anchorPkPanelChangeSessionOpenTimes;
- (void)setAnchorPkPanelChangeSessionOpenTimes:(unsigned int)arg1;
- (unsigned int)anchorPkPanelChangeSessionDurationTimeS;
- (void)setAnchorPkPanelChangeSessionDurationTimeS:(unsigned int)arg1;
- (BOOL)isLikeMicAudienceEnabled;
- (void)setIsLikeMicAudienceEnabled:(BOOL)arg1;
- (id)micTopicTitle;
- (void)setMicTopicTitle:(id)arg1;
- (id)micTopic;
- (void)setMicTopic:(id)arg1;
- (unsigned long long)micTopicVersion;
- (void)setMicTopicVersion:(unsigned long long)arg1;
- (unsigned int)micTopicSource;
- (void)setMicTopicSource:(unsigned int)arg1;
- (unsigned long long)micTopicRefFeedId;
- (void)setMicTopicRefFeedId:(unsigned long long)arg1;
- (id)micTopicReportJson;
- (void)setMicTopicReportJson:(id)arg1;
- (BOOL)allowEmptyMicTopicForChatRoom;
- (void)setAllowEmptyMicTopicForChatRoom:(BOOL)arg1;
- (id)audioRoomContext;
- (void)setAudioRoomContext:(id)arg1;
- (BOOL)isDualMicLayoutModeAvailable;
- (void)setIsDualMicLayoutModeAvailable:(BOOL)arg1;
- (BOOL)isPIPMicLayoutModeAvailable;
- (void)setIsPIPMicLayoutModeAvailable:(BOOL)arg1;
- (BOOL)isMicInviteShareToChatAvailable;
- (void)setIsMicInviteShareToChatAvailable:(BOOL)arg1;
- (BOOL)isMicAudienceInviteMicAvailable;
- (void)setIsMicAudienceInviteMicAvailable:(BOOL)arg1;
- (void).cxx_destruct;
@end
