@interface RingBackPlaySoundReporter_23653 : KvReportBaseItem
{
    unsigned int _playDuration; // +0x8
    unsigned int _startPlayTimeStamp; // +0xc
    unsigned long long _entryType; // +0x10
    unsigned long long _roomid; // +0x18
    unsigned long long _roomkey; // +0x20
    NSString * _feedID; // +0x28
    unsigned long long _feedType; // +0x30
    unsigned long long _usageRange; // +0x38
    NSString * _toUserName; // +0x40
    unsigned long long _logButtonState; // +0x48
    unsigned long long _muteType; // +0x50
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)configueWithRing:(id)arg1;
- (void)recordStartPlayRing;
- (void)doReport;
- (unsigned long long)entryType;
- (void)setEntryType:(unsigned long long)arg1;
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
- (unsigned long long)logButtonState;
- (void)setLogButtonState:(unsigned long long)arg1;
- (unsigned int)playDuration;
- (void)setPlayDuration:(unsigned int)arg1;
- (unsigned long long)muteType;
- (void)setMuteType:(unsigned long long)arg1;
- (unsigned int)startPlayTimeStamp;
- (void)setStartPlayTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

