@interface RingTonePlaySoundReporter_23613 : KvReportBaseItem
{
    unsigned int _playDuration; // +0x8
    unsigned int _startPlayTimeStamp; // +0xc
    unsigned long long _roomid; // +0x10
    unsigned long long _roomkey; // +0x18
    NSString * _feedID; // +0x20
    unsigned long long _feedType; // +0x28
    unsigned long long _usageRange; // +0x30
    NSString * _toUserName; // +0x38
    unsigned long long _entryType; // +0x40
    unsigned long long _applicationState; // +0x48
    unsigned long long _callKitState; // +0x50
    unsigned long long _muteType; // +0x58
    unsigned long long _vibrateType; // +0x60
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)configueWithRing:(id)arg1;
- (void)recordStartPlayRing;
- (void)doReport;
- (void)fetchMuteStateThenReport;
- (id)fetchMuteState;
- (unsigned long long)roomid;
- (void)setRoomid:(unsigned long long)arg1;
- (unsigned long long)roomkey;
- (void)setRoomkey:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (unsigned long long)usageRange;
- (void)setUsageRange:(unsigned long long)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (unsigned long long)entryType;
- (void)setEntryType:(unsigned long long)arg1;
- (unsigned long long)applicationState;
- (void)setApplicationState:(unsigned long long)arg1;
- (unsigned long long)callKitState;
- (void)setCallKitState:(unsigned long long)arg1;
- (unsigned int)playDuration;
- (void)setPlayDuration:(unsigned int)arg1;
- (unsigned long long)muteType;
- (void)setMuteType:(unsigned long long)arg1;
- (unsigned long long)vibrateType;
- (void)setVibrateType:(unsigned long long)arg1;
- (unsigned int)startPlayTimeStamp;
- (void)setStartPlayTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

