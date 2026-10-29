@interface WCFinderSyncExptSwitchModel : NSObject
{
    BOOL _finderMentionEntranceIndependent; // +0x8
    BOOL _isNewLifeEntryOpened; // +0x9
    BOOL _isNewLifeFeedDetailSwitchOpened; // +0xa
    BOOL _isK1KUniformReddotEnabled; // +0xb
    BOOL _isNewLifeReserveLookRedDotSwitchOpened; // +0xc
    BOOL _reddotPersonalExposeClearSwitch; // +0xd
    NSString * _testExptString; // +0x10
    long long _timelineTabCacheFeedValue; // +0x18
    unsigned long long _seeBrowseLongVideoSwitch; // +0x20
    unsigned long long _enterStreamTipsSwitch; // +0x28
    unsigned long long _friendBubbleShowSec; // +0x30
    NSArray * _finderGetrelatedlistSupportBackupScenes; // +0x38
    NSMutableDictionary * _finderInitExptBufferDic; // +0x40
}
- (id)initWithExptBufferDic:(id)arg1;
- (void)updateFinderInitExptBufferDic:(id)arg1;
- (void)setFinderInitExptBufferDic:(id)arg1;
- (void)loadSyncExptSwitch;
- (long long)getIntExptCmdId:(long long)arg1 keyName:(id)arg2 defaultValue:(long long)arg3;
- (BOOL)getBoolExptCmdId:(long long)arg1 keyName:(id)arg2;
- (id)getExptValueByCmdId:(long long)arg1 keyName:(id)arg2;
- (BOOL)isNewLifePhotoAtSecondTab;
- (id)testExptString;
- (void)setTestExptString:(id)arg1;
- (long long)timelineTabCacheFeedValue;
- (void)setTimelineTabCacheFeedValue:(long long)arg1;
- (BOOL)finderMentionEntranceIndependent;
- (void)setFinderMentionEntranceIndependent:(BOOL)arg1;
- (BOOL)isNewLifeEntryOpened;
- (void)setIsNewLifeEntryOpened:(BOOL)arg1;
- (BOOL)isNewLifeFeedDetailSwitchOpened;
- (void)setIsNewLifeFeedDetailSwitchOpened:(BOOL)arg1;
- (BOOL)isK1KUniformReddotEnabled;
- (void)setIsK1KUniformReddotEnabled:(BOOL)arg1;
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
- (id)finderInitExptBufferDic;
- (void).cxx_destruct;
@end

