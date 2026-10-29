@interface WCMomentsMenuReportMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isShow; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCUserComment * _comment; // +0x18
    long long _contentType; // +0x20
    long long _scene; // +0x28
    long long _clickedActionType; // +0x30
    WCMomentsMenuActionReportExtInfo * _extInfo; // +0x38
    WCMomentsMenuActionReportSession * _reportSession; // +0x40
}
- (void)onMenuItemWillShowWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4;
- (void)onMenuItemWillShowWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4 extInfo:(id)arg5;
- (void)onClickWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4 actionType:(long long)arg5;
- (void)onClickWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4 actionType:(long long)arg5 extInfo:(id)arg6;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)reportCancelActionIfNeeded;
- (BOOL)canResponseOnClickWithDataItem:(id)arg1 comment:(id)arg2 scene:(long long)arg3 contentType:(long long)arg4;
- (id)genMomentsMenuReportSessionWithActionType:(long long)arg1;
- (id)dataItem;
- (id)comment;
- (long long)contentType;
- (long long)scene;
- (long long)clickedActionType;
- (BOOL)isShow;
- (id)extInfo;
- (id)reportSession;
- (void).cxx_destruct;
@end
