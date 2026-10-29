@interface MMLiveUserActionReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int liveRole; // +0x8
    unsigned int roomRole; // +0xc
    unsigned int action; // +0x10
    unsigned int actionResult; // +0x14
    unsigned int audienceCount; // +0x18
    NSString * roomId; // +0x20
    unsigned long long liveId; // +0x28
    unsigned long long audienceUin; // +0x30
    unsigned long long actionTS; // +0x38
    NSString * audienceUserName; // +0x40
    NSString * anchorusername; // +0x48
}
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_liveRole;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_actionResult;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)MMLiveReportFieldAdd_audienceUserName;
+ (void)MMLiveReportFieldAdd_anchorusername;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (void)onActionSheetClicked:(id)arg1 controller:(id)arg2 button:(id)arg3 buttonTitle:(id)arg4;
- (void)onUIOrientationChanged:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)reportAction:(unsigned int)arg1 result:(unsigned int)arg2;
- (void)doReport;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)audienceUin;
- (void)setAudienceUin:(unsigned long long)arg1;
- (unsigned int)liveRole;
- (void)setLiveRole:(unsigned int)arg1;
- (unsigned int)roomRole;
- (void)setRoomRole:(unsigned int)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)actionResult;
- (void)setActionResult:(unsigned int)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (id)audienceUserName;
- (void)setAudienceUserName:(id)arg1;
- (id)anchorusername;
- (void)setAnchorusername:(id)arg1;
- (unsigned int)audienceCount;
- (void)setAudienceCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

