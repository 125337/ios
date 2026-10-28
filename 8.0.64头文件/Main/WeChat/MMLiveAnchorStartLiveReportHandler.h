@interface MMLiveAnchorStartLiveReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int scene; // +0x8
    unsigned int rulePop; // +0xc
    unsigned int ruleCheck; // +0x10
    unsigned int customTopic; // +0x14
    unsigned int cameraStatus; // +0x18
    unsigned int horizontalStatus; // +0x1c
    unsigned int exitType; // +0x20
    unsigned int errCode; // +0x24
    unsigned int roomRole; // +0x28
    unsigned int roomCount; // +0x2c
    unsigned int cameraSwitch; // +0x30
    unsigned int micSwitch; // +0x34
    unsigned int castSwitch; // +0x38
    unsigned int hasClickedRuleConfirm; // +0x3c
    unsigned int hasRealNameProcess; // +0x40
    NSString * roomId; // +0x48
    NSString * topic; // +0x50
}
+ (void)MMLiveReportFieldAdd_scene;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_rulePop;
+ (void)MMLiveReportFieldAdd_ruleCheck;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_customTopic;
+ (void)MMLiveReportFieldAdd_cameraStatus;
+ (void)MMLiveReportFieldAdd_horizontalStatus;
+ (void)MMLiveReportFieldAdd_exitType;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_cameraSwitch;
+ (void)MMLiveReportFieldAdd_micSwitch;
+ (void)MMLiveReportFieldAdd_castSwitch;
+ (void)MMLiveReportFieldAdd_hasClickedRuleConfirm;
+ (void)MMLiveReportFieldAdd_hasRealNameProcess;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 verifySuccess:(BOOL)arg3;
- (void)reportActionWithReportTag:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)rulePop;
- (void)setRulePop:(unsigned int)arg1;
- (unsigned int)ruleCheck;
- (void)setRuleCheck:(unsigned int)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (unsigned int)customTopic;
- (void)setCustomTopic:(unsigned int)arg1;
- (unsigned int)cameraStatus;
- (void)setCameraStatus:(unsigned int)arg1;
- (unsigned int)horizontalStatus;
- (void)setHorizontalStatus:(unsigned int)arg1;
- (unsigned int)exitType;
- (void)setExitType:(unsigned int)arg1;
- (unsigned int)errCode;
- (void)setErrCode:(unsigned int)arg1;
- (unsigned int)roomRole;
- (void)setRoomRole:(unsigned int)arg1;
- (unsigned int)roomCount;
- (void)setRoomCount:(unsigned int)arg1;
- (unsigned int)cameraSwitch;
- (void)setCameraSwitch:(unsigned int)arg1;
- (unsigned int)micSwitch;
- (void)setMicSwitch:(unsigned int)arg1;
- (unsigned int)castSwitch;
- (void)setCastSwitch:(unsigned int)arg1;
- (unsigned int)hasClickedRuleConfirm;
- (void)setHasClickedRuleConfirm:(unsigned int)arg1;
- (unsigned int)hasRealNameProcess;
- (void)setHasRealNameProcess:(unsigned int)arg1;
- (void).cxx_destruct;
@end
