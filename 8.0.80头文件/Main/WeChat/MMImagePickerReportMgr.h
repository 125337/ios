@interface MMImagePickerReportMgr : MMUserService <IMsgExt, IMMNewSessionMgrExt, MMAssetPickerControllerExt, MMServiceProtocol>
{
    BOOL _clearingAllSessions; // +0x8
    NSMapTable * _sessions; // +0x10
    WCTDatabase * _database; // +0x18
    WCTTable * _recordTable; // +0x20
    unsigned long long _lastCleanupTime; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)preparePickerOptions:(id)arg1 albumUIType:(unsigned long long)arg2;
- (id)getOrCreateReportSessionForControlCenter:(id)arg1;
- (void)resetSendAttempt:(id)arg1;
- (id)assetPickerForControlCenter:(id)arg1;
- (id)currentPickerReportParametersForControlCenter:(id)arg1;
- (id)reportParametersFromContext:(id)arg1 includingKeys:(id)arg2;
- (id)acceptedMediaTypesByAssetIDForPicker:(id)arg1;
- (void)beginSlideSelection:(id)arg1;
- (void)endSlideSelection:(id)arg1;
- (id /* block */)beginSlideAssetSelection:(id)arg1 controlCenter:(id)arg2;
- (void)reportSlideSelectionIfSettled:(id)arg1;
- (id)viewIDForKind:(unsigned long long)arg1;
- (id)viewReportParametersForKind:(unsigned long long)arg1 controlCenter:(id)arg2;
- (void)bindView:(id)arg1 kind:(unsigned long long)arg2 controlCenter:(id)arg3;
- (void)bindMergeView:(id)arg1 controlCenter:(id)arg2 inPreview:(BOOL)arg3;
- (void)reportClickOnView:(id)arg1 kind:(unsigned long long)arg2 controlCenter:(id)arg3;
- (void)bindDiscardAlertView:(id)arg1 controlCenter:(id)arg2;
- (void)reportDiscardAlertClickOnView:(id)arg1 confirmed:(BOOL)arg2;
- (id)encodedMediaIndexListWithPictureIndexes:(id)arg1 videoIndexes:(id)arg2;
- (void)reportSendFromPicker:(id)arg1 groupInfo:(id)arg2 systemAssetCount:(unsigned long long)arg3;
- (BOOL)openReportDatabaseIfNeeded;
- (id)unexpiredRecordForMessage:(id)arg1;
- (id)recordKeyForMessage:(id)arg1;
- (id)reportContextFromMessage:(id)arg1;
- (BOOL)isMessageStillStored:(id)arg1;
- (id)decodedReportContextForRecord:(id)arg1;
- (BOOL)canReuseRecordContext:(id)arg1 forMessage:(id)arg2 currentContext:(id)arg3;
- (void)migrateReportRecord:(id)arg1 toMessage:(id)arg2;
- (void)bindReportContextToMessage:(id)arg1;
- (void)reportMessageEvent:(id)arg1 revokeAction:(BOOL)arg2;
- (void)deleteExpiredReportRecordsIfNeeded;
- (void)deleteReportRecordsForUsername:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgSendFail:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)onWillDeleteAllSession;
- (void)onDidDeleteAllSession;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (BOOL)clearingAllSessions;
- (void)setClearingAllSessions:(BOOL)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)recordTable;
- (void)setRecordTable:(id)arg1;
- (unsigned long long)lastCleanupTime;
- (void)setLastCleanupTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
