@interface MonoServiceMsgMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_queue; // +0x8
    MonoServiceMsgHistory * m_msgHistory; // +0x10
    NSMutableArray * m_logicArray; // +0x18
    MonoServiceMsgHistory * _m_localNotificationHistory; // +0x20
    VibrationRepeatObject * _m_vibrationObject; // +0x28
}
- (void)onServiceClearData;
- (id)init;
- (void)inQueueMsg:(id)arg1;
- (void)addMsgLogic:(id)arg1;
- (void)checkMsgQueue;
- (void)addCancelHistory:(id)arg1;
- (void)showLocalNotificationWithMsg:(id)arg1 repeatVibration:(BOOL)arg2 silently:(BOOL)arg3;
- (void)showLocalNotificationWithMsg:(id)arg1 repeatVibration:(BOOL)arg2;
- (void)showLocalNotificationByIlinkWithMsg:(id)arg1 repeatVibration:(BOOL)arg2 isCallkitAvailable:(BOOL)arg3;
- (void)closeLocalNotificationWithMsg:(id)arg1;
- (void)repeatInAppVibration;
- (void)repeatOutAppVibration;
- (void)stopInAppVibration;
- (void)internalCheckMsgQueue;
- (void)processMsg:(id)arg1;
- (void)processCancelMsg:(id)arg1;
- (BOOL)isSimuCallPreCheck:(id)arg1;
- (void)processInviteMsg:(id)arg1;
- (BOOL)isMonoServiceCheckingServer;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (void)didMonoServiceMsgReject;
- (id)historyMsgsWithServiceType:(id)arg1 key:(id)arg2;
- (id)localHistoryMsgsWithServiceType:(id)arg1 key:(id)arg2;
- (id)m_queue;
- (void)setM_queue:(id)arg1;
- (id)m_msgHistory;
- (void)setM_msgHistory:(id)arg1;
- (id)m_logicArray;
- (void)setM_logicArray:(id)arg1;
- (id)m_localNotificationHistory;
- (void)setM_localNotificationHistory:(id)arg1;
- (id)m_vibrationObject;
- (void)setM_vibrationObject:(id)arg1;
- (void).cxx_destruct;
@end

