@interface MMLiveAnchorCloseLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int scene; // +0x8
    unsigned int roomRole; // +0xc
    unsigned int lastTime; // +0x10
    unsigned int audienceCount; // +0x14
    unsigned int audienceCountMax; // +0x18
    unsigned int commentCount; // +0x1c
    unsigned int heartCount; // +0x20
    unsigned int connectCount; // +0x24
    unsigned int allowReplay; // +0x28
    unsigned int roomCount; // +0x2c
    NSString * roomId; // +0x30
    unsigned long long liveId; // +0x38
    NSString * topic; // +0x40
    unsigned long long costTime; // +0x48
}
+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_audienceCountMax;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_allowReplay;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_costTime;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (unsigned int)roomRole;
- (void)setRoomRole:(unsigned int)arg1;
- (unsigned int)lastTime;
- (void)setLastTime:(unsigned int)arg1;
- (unsigned int)audienceCount;
- (void)setAudienceCount:(unsigned int)arg1;
- (unsigned int)audienceCountMax;
- (void)setAudienceCountMax:(unsigned int)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (unsigned int)heartCount;
- (void)setHeartCount:(unsigned int)arg1;
- (unsigned int)connectCount;
- (void)setConnectCount:(unsigned int)arg1;
- (unsigned int)allowReplay;
- (void)setAllowReplay:(unsigned int)arg1;
- (unsigned int)roomCount;
- (void)setRoomCount:(unsigned int)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
