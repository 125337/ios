@interface MMUserDataOperateMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSArray * m_arrCombineReportForUserDataType; // +0x8
    unsigned int m_oneHadExecuteNumber; // +0x10
    NSObject<OS_dispatch_queue> * m_taskQueue; // +0x18
}
- (void)initData;
- (void)recordOperateUserData:(unsigned int)arg1 dataType:(unsigned int)arg2;
- (void)batchRecordOperateUserData:(id)arg1;
- (void)insertUserDataOperateItemListToDB:(id)arg1;
- (BOOL)checkHadReportUserDataOperateRecord;
- (void)asynReportUserDataOperateRecord;
- (void)reportUserDataOperateRecord;
- (BOOL)checkUploadUserData;
- (id)getUploadUserDataId;
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)sendUploadUserDataRequest:(id)arg1 timesTamp:(unsigned long long)arg2;
- (void)onUploadUserData:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_taskQueue;
- (void)setM_taskQueue:(id)arg1;
- (void).cxx_destruct;
@end

