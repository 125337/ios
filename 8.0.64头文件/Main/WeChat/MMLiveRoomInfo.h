@interface MMLiveRoomInfo : NSObject
{
    unsigned int _startTime; // +0x8
    unsigned int _endTime; // +0xc
    unsigned long long _liveId; // +0x10
    unsigned long long _liveStatus; // +0x18
    NSString * _joinLiveTips; // +0x20
    NSString * _wxaGameExportId; // +0x28
    NSString * _topic; // +0x30
}
- (id)initWithLiveTask:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)joinLiveTips;
- (void)setJoinLiveTips:(id)arg1;
- (id)wxaGameExportId;
- (void)setWxaGameExportId:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (void).cxx_destruct;
@end
