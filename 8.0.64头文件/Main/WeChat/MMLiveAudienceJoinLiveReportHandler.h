@interface MMLiveAudienceJoinLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int scene; // +0x8
    unsigned int errCode; // +0xc
    unsigned int enterRoomCount; // +0x10
    unsigned int exitRoomCount; // +0x14
    unsigned int commentCount; // +0x18
    unsigned int heartCount; // +0x1c
    unsigned int connectReqCount; // +0x20
    unsigned int connectCount; // +0x24
    NSString * roomId; // +0x28
    unsigned long long liveId; // +0x30
    NSString * liveUin; // +0x38
    NSString * liveUserName; // +0x40
    unsigned long long lastTime; // +0x48
    unsigned long long enterTimestamp; // +0x50
    unsigned long long exitTimestamp; // +0x58
    unsigned long long exitChatroomUV; // +0x60
}
+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_enterRoomCount;
+ (void)MMLiveReportFieldAdd_exitRoomCount;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_connectReqCount;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_enterTimestamp;
+ (void)MMLiveReportFieldAdd_exitTimestamp;
+ (void)MMLiveReportFieldAdd_exitChatroomUV;
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
- (id)liveUin;
- (void)setLiveUin:(id)arg1;
- (unsigned int)errCode;
- (void)setErrCode:(unsigned int)arg1;
- (unsigned int)enterRoomCount;
- (void)setEnterRoomCount:(unsigned int)arg1;
- (unsigned int)exitRoomCount;
- (void)setExitRoomCount:(unsigned int)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (unsigned int)heartCount;
- (void)setHeartCount:(unsigned int)arg1;
- (unsigned int)connectReqCount;
- (void)setConnectReqCount:(unsigned int)arg1;
- (unsigned int)connectCount;
- (void)setConnectCount:(unsigned int)arg1;
- (id)liveUserName;
- (void)setLiveUserName:(id)arg1;
- (unsigned long long)lastTime;
- (void)setLastTime:(unsigned long long)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (unsigned long long)exitTimestamp;
- (void)setExitTimestamp:(unsigned long long)arg1;
- (unsigned long long)exitChatroomUV;
- (void)setExitChatroomUV:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
