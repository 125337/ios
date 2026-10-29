@interface MMLiveEntranceExposeReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int scene; // +0x8
    unsigned int redDot; // +0xc
    unsigned int roomRole; // +0x10
    NSString * roomId; // +0x18
}
+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_redDot;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)onGroupLiveEntranceExposed:(long long)arg1 contact:(id)arg2;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)redDot;
- (void)setRedDot:(unsigned int)arg1;
- (unsigned int)roomRole;
- (void)setRoomRole:(unsigned int)arg1;
- (void).cxx_destruct;
@end

