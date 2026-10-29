@interface MMLiveAnchorLiveMicReportHandler : MMLiveBaseReportHandler
{
    unsigned int waitCount; // +0x8
    unsigned int allowConnect; // +0xc
    unsigned int actionCode; // +0x10
    unsigned int linkCount; // +0x14
    NSString * roomId; // +0x18
    unsigned long long liveId; // +0x20
    NSString * audienceUin; // +0x28
}
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_waitCount;
+ (void)MMLiveReportFieldAdd_allowConnect;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_actionCode;
+ (void)MMLiveReportFieldAdd_linkCount;
+ (void)initialize;
- (void)report;
- (id)init;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)waitCount;
- (void)setWaitCount:(unsigned int)arg1;
- (unsigned int)allowConnect;
- (void)setAllowConnect:(unsigned int)arg1;
- (id)audienceUin;
- (void)setAudienceUin:(id)arg1;
- (unsigned int)actionCode;
- (void)setActionCode:(unsigned int)arg1;
- (unsigned int)linkCount;
- (void)setLinkCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

