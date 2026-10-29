@interface EcsKfReportMgr : MMUserService <MMServiceProtocol>
{
    unsigned long long _lastExposedSvrId; // +0x8
    NSString * _lastBoxRedDotId; // +0x10
    NSString * _listEntryBoxRedDotId; // +0x18
}
- (void)onServiceInit;
- (void)clearKFSessionId;
- (void)onServiceClearData;
- (unsigned int)resolveWWKFKefuTypeFromMessageWrap:(id)arg1;
- (unsigned int)resolveWWKFKefuTypeFromUserName:(id)arg1;
- (unsigned int)toolbarItemLinkTypeWithActionUrl:(id)arg1;
- (id)baseReportParamsWithUserName:(id)arg1 scene:(int)arg2;
- (void)reportCustomEventWithViewId:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)reportScreenShotShareViewEvent:(id)arg1 msgWrap:(id)arg2 viewId:(id)arg3;
- (void)mergeCommonReportData:(id)arg1 messageWrap:(id)arg2;
- (void)mergeCommonReportDataJson:(id)arg1 json:(id)arg2;
- (void)reportScreenShotShareButtonEvent:(id)arg1 commonReportData:(id)arg2;
- (id)toolbarItemExtraParams:(id)arg1;
- (id)onEnterKFRoom;
- (void)bindReportForView:(id)arg1 message:(id)arg2 viewId:(id)arg3;
- (void)bindReportForView:(id)arg1 message:(id)arg2 viewId:(id)arg3 viewIndex:(long long)arg4;
- (id)buildKfReportParams:(id)arg1 isShareConfirm:(BOOL)arg2;
- (id)mainSessionDigestForCellData:(id)arg1 sessionInfo:(id)arg2;
- (id)redDotSnapshotKeyWithSvrId:(unsigned long long)arg1 unreadCount:(unsigned long long)arg2 digest:(id)arg3 redType:(long long)arg4;
- (id)redDotReportParamsWithSvrId:(unsigned long long)arg1 unreadCount:(unsigned long long)arg2 digest:(id)arg3 redType:(long long)arg4 kefuType:(unsigned int)arg5 kfUserName:(id)arg6 parentRedDotId:(id)arg7;
- (void)onMainSessionExpose:(id)arg1;
- (void)onMainSessionClick:(id)arg1 digest:(id)arg2 nickName:(id)arg3;
- (void)bindMainSessionRedDotReport:(id)arg1 cellData:(id)arg2;
- (void)onEnterKfListPage;
- (id)quickSendCardParamsWithInfo:(id)arg1;
- (void)onQuickSendCardExpose:(id)arg1;
- (void)onQuickSendCardClick:(id)arg1;
- (void)tryReportRoomEnterForEcs:(id)arg1 scene:(int)arg2 isHalfScreen:(BOOL)arg3;
- (void)bindExposeReportForView:(id)arg1 viewId:(id)arg2 userName:(id)arg3 scene:(int)arg4 extraParams:(id)arg5;
- (void)bindClickReportForView:(id)arg1 viewId:(id)arg2 userName:(id)arg3 scene:(int)arg4 extraParams:(id)arg5;
- (void)bindReportForView:(id)arg1 viewId:(id)arg2 userName:(id)arg3 scene:(int)arg4 extraParams:(id)arg5 policy:(unsigned int)arg6;
- (void)onToolbarItemExpose:(id)arg1 userName:(id)arg2 scene:(int)arg3;
- (void)onToolbarItemClick:(id)arg1 userName:(id)arg2 scene:(int)arg3;
- (void)reportListItemCell:(id)arg1 cellData:(id)arg2 sessionInfo:(id)arg3 contact:(id)arg4 reportSessionId:(id)arg5 kefuType:(unsigned int)arg6;
- (id)lastBoxRedDotId;
- (void)setLastBoxRedDotId:(id)arg1;
- (id)listEntryBoxRedDotId;
- (void)setListEntryBoxRedDotId:(id)arg1;
- (void).cxx_destruct;
@end
