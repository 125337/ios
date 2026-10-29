@interface WCFinderSyncExptSwitchModel : NSObject
{
    BOOL _finderMentionEntranceIndependent; // +0x8
    BOOL _isK1KUniformReddotEnabled; // +0x9
    BOOL _isNewLifeReserveLookRedDotSwitchOpened; // +0xa
    BOOL _reddotPersonalExposeClearSwitch; // +0xb
    BOOL _privateRedDotUseFinderSvr; // +0xc
    BOOL _allowComboLike; // +0xd
    NSString * _testExptString; // +0x10
    long long _timelineTabCacheFeedValue; // +0x18
    NSString * _findPageRedDotAvatarAvoidanceRule; // +0x20
    NSString * _findPageRedDotTwoLinesAvoidanceRule; // +0x28
    unsigned long long _seeBrowseLongVideoSwitch; // +0x30
    unsigned long long _enterStreamTipsSwitch; // +0x38
    unsigned long long _friendBubbleShowSec; // +0x40
    NSArray * _finderGetrelatedlistSupportBackupScenes; // +0x48
    NSMutableDictionary * _finderInitExptBufferDic; // +0x50
}
- (id)initWithExptBufferDic:(id)arg1;
- (void)updateFinderInitExptBufferDic:(id)arg1;
- (void)setFinderInitExptBufferDic:(id)arg1;
- (void)loadSyncExptSwitch;
- (long long)getIntExptCmdId:(long long)arg1 keyName:(id)arg2 defaultValue:(long long)arg3;
- (BOOL)getBoolExptCmdId:(long long)arg1 keyName:(id)arg2;
- (id)getExptValueByCmdId:(long long)arg1 keyName:(id)arg2;
- (id)getExptValueByKeyName:(id)arg1;
- (BOOL)enableFriendTabHighEntropy;
- (BOOL)isNewLifePhotoAtSecondTab;
- (BOOL)getPureIsNewLifeEntryOpened;
- (BOOL)getPureIsNewLifeTagStreamOpened;
- (BOOL)isNewLifeEntryOpened;
- (BOOL)isNewLifeTagStreamOpened;
- (id)testExptString;
- (void)setTestExptString:(id)arg1;
- (long long)timelineTabCacheFeedValue;
- (void)setTimelineTabCacheFeedValue:(long long)arg1;
- (BOOL)finderMentionEntranceIndependent;
- (void)setFinderMentionEntranceIndependent:(BOOL)arg1;
- (BOOL)isK1KUniformReddotEnabled;
- (void)setIsK1KUniformReddotEnabled:(BOOL)arg1;
- (id)findPageRedDotAvatarAvoidanceRule;
- (void)setFindPageRedDotAvatarAvoidanceRule:(id)arg1;
- (id)findPageRedDotTwoLinesAvoidanceRule;
- (void)setFindPageRedDotTwoLinesAvoidanceRule:(id)arg1;
- (unsigned long long)seeBrowseLongVideoSwitch;
- (void)setSeeBrowseLongVideoSwitch:(unsigned long long)arg1;
- (unsigned long long)enterStreamTipsSwitch;
- (void)setEnterStreamTipsSwitch:(unsigned long long)arg1;
- (unsigned long long)friendBubbleShowSec;
- (void)setFriendBubbleShowSec:(unsigned long long)arg1;
- (BOOL)isNewLifeReserveLookRedDotSwitchOpened;
- (void)setIsNewLifeReserveLookRedDotSwitchOpened:(BOOL)arg1;
- (id)finderGetrelatedlistSupportBackupScenes;
- (void)setFinderGetrelatedlistSupportBackupScenes:(id)arg1;
- (BOOL)reddotPersonalExposeClearSwitch;
- (void)setReddotPersonalExposeClearSwitch:(BOOL)arg1;
- (BOOL)privateRedDotUseFinderSvr;
- (void)setPrivateRedDotUseFinderSvr:(BOOL)arg1;
- (BOOL)allowComboLike;
- (void)setAllowComboLike:(BOOL)arg1;
- (id)finderInitExptBufferDic;
- (void).cxx_destruct;
@end
