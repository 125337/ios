@interface MMFinderLiveWinterOlympicTorchEventInfo : NSObject
{
    NSString * _eventNickname; // +0x8
    NSString * _eventUsername; // +0x10
    NSString * _eventWxUsername; // +0x18
    NSString * _byPassInfoString; // +0x20
    NSData * _byPassInfo; // +0x28
    long long _relayIndex; // +0x30
    NSString * _avatarUrl; // +0x38
    unsigned long long _eventType; // +0x40
}
- (id)eventNickname;
- (void)setEventNickname:(id)arg1;
- (id)eventUsername;
- (void)setEventUsername:(id)arg1;
- (id)eventWxUsername;
- (void)setEventWxUsername:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (long long)relayIndex;
- (void)setRelayIndex:(long long)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
