@interface MMFinderLiveAnchorStatusItem : MMLiveAnchorStatusItem
{
    FinderLiveLayerAnchorVerificationShowInfo * _anchorVerificationShowInfo; // +0x8
    unsigned long long _layerDisplayType; // +0x10
    NSString * _focusedMicSdkUserId; // +0x18
    NSString * _makeupsModelType; // +0x20
    NSString * _detailSetList; // +0x28
    MicSetting_PurchaseMicSetting * _purchaseMicSetting; // +0x30
    unsigned long long _timeMs; // +0x38
    unsigned long long _pausedAccumulatedTime; // +0x40
    NSString * _audiencePauseWording; // +0x48
}
- (id)initWithFinderExtLiveInfo:(id)arg1 layerDisplayInfo:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getAnchorStatusBuffer;
- (BOOL)fromLiveExtInfo:(id)arg1;
- (BOOL)fromLiveLayerDisplayInfo:(id)arg1;
- (BOOL)isPausedLayerDisplayed;
- (void)updateDisplayInfoFromServer:(id)arg1;
- (id)anchorVerificationShowInfo;
- (void)setAnchorVerificationShowInfo:(id)arg1;
- (unsigned long long)layerDisplayType;
- (void)setLayerDisplayType:(unsigned long long)arg1;
- (id)focusedMicSdkUserId;
- (void)setFocusedMicSdkUserId:(id)arg1;
- (id)makeupsModelType;
- (void)setMakeupsModelType:(id)arg1;
- (id)detailSetList;
- (void)setDetailSetList:(id)arg1;
- (id)purchaseMicSetting;
- (void)setPurchaseMicSetting:(id)arg1;
- (unsigned long long)timeMs;
- (void)setTimeMs:(unsigned long long)arg1;
- (long long)pausedAccumulatedTime;
- (void)setPausedAccumulatedTime:(unsigned long long)arg1;
- (id)audiencePauseWording;
- (void)setAudiencePauseWording:(id)arg1;
- (void).cxx_destruct;
@end

