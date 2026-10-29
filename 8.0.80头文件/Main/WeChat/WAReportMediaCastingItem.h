@interface WAReportMediaCastingItem : WAReportBaseItem
{
    unsigned int _eventTimeMs; // +0x8
    NSString * _videoURI; // +0x10
    unsigned long long _eventID; // +0x18
    unsigned long long _deviceCount; // +0x20
    unsigned long long _castResult; // +0x28
    unsigned long long _protocolType; // +0x30
    NSString * _modelName; // +0x38
    NSString * _manuFacturer; // +0x40
    unsigned long long _videoState; // +0x48
    unsigned long long _component; // +0x50
}
- (void)makeSafeString;
- (int)reportID;
- (id)reportString;
- (unsigned int)eventTimeMs;
- (void)setEventTimeMs:(unsigned int)arg1;
- (id)videoURI;
- (void)setVideoURI:(id)arg1;
- (unsigned long long)eventID;
- (void)setEventID:(unsigned long long)arg1;
- (unsigned long long)deviceCount;
- (void)setDeviceCount:(unsigned long long)arg1;
- (unsigned long long)castResult;
- (void)setCastResult:(unsigned long long)arg1;
- (unsigned long long)protocolType;
- (void)setProtocolType:(unsigned long long)arg1;
- (id)modelName;
- (void)setModelName:(id)arg1;
- (id)manuFacturer;
- (void)setManuFacturer:(id)arg1;
- (unsigned long long)videoState;
- (void)setVideoState:(unsigned long long)arg1;
- (unsigned long long)component;
- (void)setComponent:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
