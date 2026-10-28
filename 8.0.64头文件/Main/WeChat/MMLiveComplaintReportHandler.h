@interface MMLiveComplaintReportHandler : MMLiveBaseReportHandler
{
    unsigned int scene; // +0x8
    unsigned int roomRole; // +0xc
    unsigned int audienceCount; // +0x10
    NSString * roomId; // +0x18
    unsigned long long liveId; // +0x20
    NSString * topic; // +0x28
    unsigned long long liveUin; // +0x30
    NSString * liveUserName; // +0x38
}
+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (unsigned long long)liveUin;
- (void)setLiveUin:(unsigned long long)arg1;
- (unsigned int)roomRole;
- (void)setRoomRole:(unsigned int)arg1;
- (unsigned int)audienceCount;
- (void)setAudienceCount:(unsigned int)arg1;
- (id)liveUserName;
- (void)setLiveUserName:(id)arg1;
- (void).cxx_destruct;
@end
