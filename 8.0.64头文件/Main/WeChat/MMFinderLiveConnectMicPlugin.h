@interface MMFinderLiveConnectMicPlugin : MMLiveTaskBaseFunctionPlugin
{
    BOOL _isMultiAnchorMicEnabled; // +0x8
    BOOL _isAudiencePkEnable; // +0x9
    BOOL _isCrossRoomPkEnable; // +0xa
    BOOL _isOrdinaryLiveInviteAudienceMicEnabled; // +0xb
    BOOL _isDisplayMicLocationEnabled; // +0xc
    BOOL _isUseNewPKPanel; // +0xd
    unsigned int _locationDisplayTimeInterval; // +0x10
    unsigned int _anchorPkPanelChangeSessionOpenTimes; // +0x14
    unsigned int _anchorPkPanelChangeSessionDurationTimeS; // +0x18
    FinderLiveBattleSettingInfo * _battleSettings; // +0x20
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
- (void).cxx_destruct;
@end
