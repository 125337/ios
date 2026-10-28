@interface MMFinderLiveEventInfo : NSObject
{
    unsigned int _eventId; // +0x8
    unsigned int _participantIdentity; // +0xc
    unsigned int _eventStatus; // +0x10
    unsigned int _streamStatus; // +0x14
    NSString * _eventToken; // +0x18
}
- (void)updateWithFinderLiveEventInfo:(id)arg1;
- (void)updateWithFinderLiveAudienceEventInfo:(id)arg1;
- (id)genFinderEventInfo;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (unsigned int)participantIdentity;
- (void)setParticipantIdentity:(unsigned int)arg1;
- (unsigned int)eventStatus;
- (void)setEventStatus:(unsigned int)arg1;
- (unsigned int)streamStatus;
- (void)setStreamStatus:(unsigned int)arg1;
- (id)eventToken;
- (void)setEventToken:(id)arg1;
- (void).cxx_destruct;
@end
