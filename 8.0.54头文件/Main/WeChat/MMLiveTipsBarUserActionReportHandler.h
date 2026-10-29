@interface MMLiveTipsBarUserActionReportHandler : MMLiveBaseReportHandler <MMLiveTaskMgrExt>
{
    unsigned int livesCnt; // +0x8
    unsigned int action; // +0xc
    NSString * chatName; // +0x10
    NSString * actionToLiveId; // +0x18
    unsigned long long actionTS; // +0x20
}
+ (void)MMLiveReportFieldAdd_chatName;
+ (void)MMLiveReportFieldAdd_livesCnt;
+ (void)MMLiveReportFieldAdd_actionToLiveId;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)initialize;
- (void)report;
- (id)init;
- (void)reportWithActionScene:(unsigned int)arg1 chatName:(id)arg2;
- (void)reportWithActionScene:(unsigned int)arg1 liveInfo:(id)arg2;
- (void)loadLivesCnt:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)livesCnt;
- (void)setLivesCnt:(unsigned int)arg1;
- (id)actionToLiveId;
- (void)setActionToLiveId:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

