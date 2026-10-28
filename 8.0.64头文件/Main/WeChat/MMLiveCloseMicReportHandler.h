@interface MMLiveCloseMicReportHandler : MMLiveBaseReportHandler
{
    unsigned int closeRole; // +0x8
    unsigned int hasVideo; // +0xc
    int isMicConnected; // +0x10
    NSString * roomId; // +0x18
    unsigned long long liveId; // +0x20
    unsigned long long micId; // +0x28
    NSString * liveUin; // +0x30
    unsigned long long lastTime; // +0x38
    NSString * liveUserName; // +0x40
    NSString * liveMicId; // +0x48
    long long startTime; // +0x50
    long long endTime; // +0x58
    long long startAudienceUV; // +0x60
    long long endAudienceUV; // +0x68
}
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_micId;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_closeRole;
+ (void)MMLiveReportFieldAdd_hasVideo;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_liveMicId;
+ (void)MMLiveReportFieldAdd_startTime;
+ (void)MMLiveReportFieldAdd_endTime;
+ (void)MMLiveReportFieldAdd_startAudienceUV;
+ (void)MMLiveReportFieldAdd_endAudienceUV;
+ (void)MMLiveReportFieldAdd_isMicConnected;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)reportWithLiveTask:(id)arg1 liveMicId:(id)arg2 isMicConnected:(BOOL)arg3;
- (void)doReportWidthGroupLiveTask:(id)arg1 isMicConnected:(BOOL)arg2;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)micId;
- (void)setMicId:(unsigned long long)arg1;
- (id)liveUin;
- (void)setLiveUin:(id)arg1;
- (unsigned long long)lastTime;
- (void)setLastTime:(unsigned long long)arg1;
- (unsigned int)closeRole;
- (void)setCloseRole:(unsigned int)arg1;
- (unsigned int)hasVideo;
- (void)setHasVideo:(unsigned int)arg1;
- (id)liveUserName;
- (void)setLiveUserName:(id)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (long long)startAudienceUV;
- (void)setStartAudienceUV:(long long)arg1;
- (long long)endAudienceUV;
- (void)setEndAudienceUV:(long long)arg1;
- (int)isMicConnected;
- (void)setIsMicConnected:(int)arg1;
- (void).cxx_destruct;
@end
