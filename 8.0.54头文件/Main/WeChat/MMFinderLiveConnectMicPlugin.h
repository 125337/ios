@interface MMFinderLiveConnectMicPlugin : MMLiveTaskBaseFunctionPlugin
{
    BOOL _isMultiAnchorMicEnabled; // +0x8
    BOOL _isAudiencePkEnable; // +0x9
    BOOL _isCrossRoomPkEnable; // +0xa
    BOOL _isOrdinaryLiveInviteAudienceMicEnabled; // +0xb
    BOOL _isDisplayMicLocationEnabled; // +0xc
    unsigned int _locationDisplayTimeInterval; // +0x10
    FinderLiveBattleSettingInfo * _battleSettings; // +0x18
}
- (void)updateMultiAnchorMicEnabled:(BOOL)arg1;
- (void)updateIsAudiencePkEnable:(BOOL)arg1;
- (void)updateIsCrossRoomPkEnable:(BOOL)arg1;
- (void)updateIsOrdinaryLiveInviteAudienceMicEnabled:(BOOL)arg1;
- (void)updateLocationDisplayTimeInterval:(unsigned int)arg1;
- (void)updateIsDisplayMicLocationEnabled:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

