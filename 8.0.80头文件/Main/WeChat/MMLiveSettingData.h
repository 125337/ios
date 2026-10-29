@interface MMLiveSettingData : MMObject <PBCoding>
{
    BOOL _isPolicyForAnchorConfirmed; // +0x8
    BOOL _isPolicyForAudienceConfirmed; // +0x9
    BOOL _isFinderLivePolicyForAudienceConfirmed; // +0xa
    BOOL _isLiveAnchorWeakNetOptimizationEnabled; // +0xb
    BOOL _isLiveAudienceWeakNetOptimizationEnabled; // +0xc
    NSMutableDictionary * _attendLotteryIdCache; // +0x10
    NSMutableDictionary * _followStateIdCache; // +0x18
    NSMutableDictionary * _liveGiftEffectSettingCache; // +0x20
    NSMutableDictionary * _liveChooseClarityCache; // +0x28
    NSMutableDictionary * _subTitleSwitchCache; // +0x30
    LiveLandscapeBarrageDisplaySettingInfo * _landscapeBarrageDisplaySetting; // +0x38
    NSMutableDictionary * _newedCustomMagicEngineResTagCache; // +0x40
    LiveKTVAudioSettingCacheInfo * _ktvAudioSettingCacheInfo; // +0x48
    LiveKTVAudioSettingCacheInfo * _ktvAudioSettingCacheInfoNew; // +0x50
    LiveKTVAudioSettingCacheInfo * _ktvAudioSettingCacheInfoV2; // +0x58
}
+ (void)PBArrayAdd_isPolicyForAnchorConfirmed;
+ (void)PBArrayAdd_isPolicyForAudienceConfirmed;
+ (void)PBArrayAdd_attendLotteryIdCache;
+ (void)PBArrayAdd_followStateIdCache;
+ (void)PBArrayAdd_liveGiftEffectSettingCache;
+ (void)PBArrayAdd_liveChooseClarityCache;
+ (void)PBArrayAdd_isFinderLivePolicyForAudienceConfirmed;
+ (void)PBArrayAdd_subTitleSwitchCache;
+ (void)PBArrayAdd_landscapeBarrageDisplaySetting;
+ (void)PBArrayAdd_newedCustomMagicEngineResTagCache;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfo;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoNew;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoV2;
+ (void)PBArrayAdd_isLiveAnchorWeakNetOptimizationEnabled;
+ (void)PBArrayAdd_isLiveAudienceWeakNetOptimizationEnabled;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isPolicyForAnchorConfirmed;
- (void)setIsPolicyForAnchorConfirmed:(BOOL)arg1;
- (BOOL)isPolicyForAudienceConfirmed;
- (void)setIsPolicyForAudienceConfirmed:(BOOL)arg1;
- (id)attendLotteryIdCache;
- (void)setAttendLotteryIdCache:(id)arg1;
- (id)followStateIdCache;
- (void)setFollowStateIdCache:(id)arg1;
- (id)liveGiftEffectSettingCache;
- (void)setLiveGiftEffectSettingCache:(id)arg1;
- (id)liveChooseClarityCache;
- (void)setLiveChooseClarityCache:(id)arg1;
- (BOOL)isFinderLivePolicyForAudienceConfirmed;
- (void)setIsFinderLivePolicyForAudienceConfirmed:(BOOL)arg1;
- (id)subTitleSwitchCache;
- (void)setSubTitleSwitchCache:(id)arg1;
- (id)landscapeBarrageDisplaySetting;
- (void)setLandscapeBarrageDisplaySetting:(id)arg1;
- (id)newedCustomMagicEngineResTagCache;
- (void)setNewedCustomMagicEngineResTagCache:(id)arg1;
- (id)ktvAudioSettingCacheInfo;
- (void)setKtvAudioSettingCacheInfo:(id)arg1;
- (id)ktvAudioSettingCacheInfoNew;
- (void)setKtvAudioSettingCacheInfoNew:(id)arg1;
- (id)ktvAudioSettingCacheInfoV2;
- (void)setKtvAudioSettingCacheInfoV2:(id)arg1;
- (BOOL)isLiveAnchorWeakNetOptimizationEnabled;
- (void)setIsLiveAnchorWeakNetOptimizationEnabled:(BOOL)arg1;
- (BOOL)isLiveAudienceWeakNetOptimizationEnabled;
- (void)setIsLiveAudienceWeakNetOptimizationEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
