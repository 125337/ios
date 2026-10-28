@interface WCScheduleMgr : MMUserService <MessagePageSheetAdapterDelegate, WCSetScheduleCgiDelegate, WCGetScheduleCgiDelegate, WCClearScheduleCgiDelegate, MMKernelExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isXlabEnable; // +0x8
    BOOL _canShowMainFrameEducation; // +0x9
    WCTDatabase * _database; // +0x10
    WCTTable * _scheduleTable; // +0x18
    WCGetScheduleCgi * _scheduleGetCgi; // +0x20
    WCClearScheduleCgi * _deleteAllCgi; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isScheduleEnable;
- (void)handleSyncAction:(long long)arg1 remindId:(id)arg2;
- (void)addScheduleItem:(id)arg1;
- (BOOL)removeItemWithMessage:(id)arg1;
- (BOOL)removeItem:(id)arg1;
- (BOOL)removeAllSchedules;
- (BOOL)hasSchedule:(id)arg1;
- (id)getScheduleItemFrom:(id)arg1;
- (id)getScheduleItemWithRemindId:(id)arg1;
- (long long)scheduleItemCount;
- (id)scheduleItems;
- (id)scheduleItemsWithLimit:(long long)arg1;
- (void)modifyItem:(id)arg1 remindDate:(id)arg2;
- (void)removeRemindForItem:(id)arg1;
- (void)addOnceRemindItem:(id)arg1 remindDate:(id)arg2;
- (void)updateAllSchedules;
- (void)showScheduleSession:(id)arg1 from:(id)arg2 complete:(id /* block */)arg3;
- (void)showScheduleSessionWithContact:(id)arg1 message:(id)arg2 from:(id)arg3;
- (void)showScheduleSessionWithContact:(id)arg1 message:(id)arg2 from:(id)arg3 complete:(id /* block */)arg4;
- (void)initDB;
- (void)onCgiAddSchedule:(id)arg1 success:(BOOL)arg2 errTips:(id)arg3;
- (void)onCgiModSchedule:(id)arg1 success:(BOOL)arg2 errTips:(id)arg3;
- (void)onCgiDeleteSchedule:(id)arg1 success:(BOOL)arg2 errTips:(id)arg3;
- (void)onCgiAddOnceRemind:(id)arg1 success:(BOOL)arg2 errTips:(id)arg3;
- (void)onGetScheduleCgi:(id)arg1 updateFirstPageItems:(id)arg2;
- (void)onGetScheduleCgi:(id)arg1 updateAllItems:(id)arg2;
- (void)onGetScheduleCgiFail:(id)arg1 errMsg:(id)arg2;
- (void)onCgiClearAllSuccess:(BOOL)arg1 errTips:(id)arg2;
- (id)scheduleGetCgi;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)shouldShowMiniTaskSwipeEducation;
- (void)doShowMiniTaskSwipeEducation;
- (BOOL)isXlabEnable;
- (void)setIsXlabEnable:(BOOL)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)scheduleTable;
- (void)setScheduleTable:(id)arg1;
- (void)setScheduleGetCgi:(id)arg1;
- (id)deleteAllCgi;
- (void)setDeleteAllCgi:(id)arg1;
- (BOOL)canShowMainFrameEducation;
- (void)setCanShowMainFrameEducation:(BOOL)arg1;
- (void).cxx_destruct;
@end
