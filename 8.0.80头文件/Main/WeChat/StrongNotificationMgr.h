@interface StrongNotificationMgr : MMUserService <IStrongNotificationMgrExt, IMMNewSessionMgrExt, MMKernelExt, StrongNotificationExclusiveMsgLogicDelegate, IRecordControllerExt, IOplogExt, MMKernelExt, IContactMgrExt, MMSightCameraExtention, WCFinderAppPushExt, WCFinderUnreadMsgExt, IRoamBackupPackageServiceExt, MMServiceProtocol, IMsgExt, PBMessageObserverDelegate>
{
    StrongNotificationDataPB * m_strongNotificationData; // +0x8
    StrongNotificationExclusiveMsgLogic * m_exclusiveMsgLogic; // +0x10
    BOOL m_currentIsRecord; // +0x18
    BOOL m_currentIsVideo; // +0x19
    MMTimer * m_expiredStrongNotificationTimer; // +0x20
    NSMutableDictionary * m_executeStrongNotificationTaskDic; // +0x28
    BOOL _meetTheRequirementsOfStayTime; // +0x30
    StrongNotificationItemAndMessagePB * _lastFinderMsg; // +0x38
}
+ (BOOL)isCBTReminderForcePushId:(id)arg1;
+ (id)cbtReminderTopViewTitle;
+ (BOOL)isFinderLiveStrongNotification:(id)arg1;
- (void)processNewXMLInAddStrongNotificationScene:(id)arg1;
- (void)processNewXMLInDeleteStrongNotificationScene:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)isStrongNotificationCustomizationMsgWrap:(id)arg1;
- (void)handleNewStrongNotificationMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getStrongNotificationCustomizationTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateStrongNotificationCustomizationTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemAndMessag:(id)arg3 cellHeightDic:(id)arg4;
- (void)jumpStrongNotificationCustomizationWrap:(id)arg1;
- (void)jumpMsgContentViewController:(id)arg1;
- (void)handleH5CustomizationWithItemAndMessage:(id)arg1;
- (void)handleScheduleCustomizationWithItemAndMessage:(id)arg1;
- (id)getGameCenterWebViewEntryScene:(id)arg1;
- (unsigned long long)getMessageTypeWithForcePushId:(id)arg1;
- (void)setCbtReminderDelegate:(id)arg1;
- (id)cbtReminderDelegate;
- (void)onDeleteStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(BOOL)arg3;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)addCBTReminderWithForcePushId:(id)arg1 text:(id)arg2;
- (void)removeCBTReminderWithForcePushId:(id)arg1;
- (id)getCBTReminderTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateCBTReminderTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemAndMessag:(id)arg3 cellHeightDic:(id)arg4;
- (void)jumpCBTReminderWrap:(id)arg1;
- (id)init;
- (void)initData;
- (void)onServiceClearData;
- (void)dealloc;
- (BOOL)isHadStrongNotificationWithForcePushId:(id)arg1;
- (BOOL)isHadValidStrongNotificationWithForcePushId:(id)arg1;
- (BOOL)isHadValidStrongNotificationWithContactUserName:(id)arg1;
- (void)clearExpiredStrongNotification;
- (id)parseForcePushInfoToStrongNotificationItem:(id)arg1;
- (void)copyForcePushInfoItem:(id)arg1 toStrongNotificationItem:(id)arg2;
- (id)getSuffixFromForcePushId:(id)arg1;
- (void)reportStrongNotificationStateChangeLog:(id)arg1 actionCode:(long long)arg2;
- (void)reportStrongNotificationListOperateLog:(id)arg1 actionCode:(long long)arg2;
- (void)reportStrongNotificationReceiveLogWithForcePushId:(id)arg1 fromUserName:(id)arg2 msgType:(unsigned int)arg3 noticeId:(id)arg4;
- (void)reportStrongNotificationCloseWindowOperateLogWithForcePushId:(id)arg1 fromUserName:(id)arg2 actionCode:(long long)arg3 windowMessageCount:(unsigned long long)arg4;
- (BOOL)isValidStrongNotificationId:(id)arg1;
- (id)getStrongNotificationList;
- (id)getStrongNotificationItemAndMessageList;
- (id)getStrongNotificationWithcontactUserName:(id)arg1;
- (id)getStrongNotificationWithForcePushId:(id)arg1;
- (void)addStrongNotificationItemInLocalAndNewWork:(id)arg1;
- (void)addStrongNotificationItemInLocalAndNewWork:(id)arg1 createTime:(unsigned int)arg2 operateTime:(unsigned int)arg3;
- (void)saveStrongNotificationItem:(id)arg1;
- (void)deleteStrongNotificationInLocalAndNewWork:(id)arg1;
- (void)deleteStrongNotificationInLocalAndNewWorkWithForcePushId:(id)arg1;
- (void)removeStrongNotificationWithForcePushId:(id)arg1;
- (void)removeStrongNotificationInNewSysCmdWithForcePushId:(id)arg1;
- (BOOL)sendAddStrongNotificationItemRequest:(id)arg1;
- (BOOL)sendDeleteStrongNotificationItemRequest:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onAddStrongNotificationItem:(id)arg1 resultFlag:(BOOL)arg2;
- (void)onDeleteStrongNotificationItem:(id)arg1 resultFlag:(BOOL)arg2;
- (BOOL)synchronizeStrongNotificationList;
- (void)OnSynchronizeStrongNotificationListResp:(id)arg1;
- (BOOL)acceptWeAppStrongNotificationWithQrcode:(id)arg1;
- (void)OnAcceptWeAppStrongNotificationResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)p_getStrongNotificationDataFilePath;
- (void)p_saveStrongNotificationToDataFileInternal;
- (void)p_loadStrongNotificationInternal;
- (id)p_getStrongNotificationReceiveMsg:(id)arg1;
- (void)p_removeItemAndMessageWithForcePushId:(id)arg1;
- (void)p_notifyModifyStrongNotificationWithForcePushId:(id)arg1 contactUserName:(id)arg2;
- (id)getStrongNotificationData;
- (id)getExclusiveMsgLogic;
- (BOOL)isNeedInterruptStrongNotification;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getExclusiveMsgQueue;
- (void)closeStrongNotificationWithItemWithForcePushId:(id)arg1;
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (void)onFromBackgroundToForeground;
- (void)onFromForegroundToBackground;
- (void)tryShowFinderLocalPushFromBackgroundToForeground;
- (id)allFinderPushArray;
- (void)onStartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2;
- (void)onStopOrCancelRecording;
- (void)MMSightCameraWillBePresent;
- (void)MMSightCameraWillBeDismissed;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onModifyContact:(id)arg1;
- (void)onRoamBackupPackageServicePushStrongNotify:(id)arg1 title:(id)arg2 packageId:(unsigned long long)arg3;
- (void)onHandlerFinderLocalPush:(id)arg1 globalPushInfo:(id)arg2;
- (void)onFinderReceiveMsg:(id)arg1;
- (void)onFinderStopReceiveMsg;
- (void)removeLastFinderUnreadMsgNotify;
- (void)onBaseMsgContentViewControllerViewDidDisappear;
- (void)onWCPayMainViewControllerV2ViewDidBePoped;
- (void)onVoIPOrMultiTalkViewDisappear;
- (void)onTabBarItemSelectedIndexFromNewMainFrameToOthers;
- (void)tryShowFinderLocalPushImmediatelyByTabBarItemSelectedIndexChanged:(BOOL)arg1;
- (void)showFinderLocalPushWith:(id)arg1;
- (void)closeStrongNotification:(id)arg1;
- (BOOL)canShowFinderLocalPushImmediately;
- (BOOL)meetTheRequirementsOfStayTime;
- (void)setMeetTheRequirementsOfStayTime:(BOOL)arg1;
- (id)lastFinderMsg;
- (void)setLastFinderMsg:(id)arg1;
- (void).cxx_destruct;
@end
