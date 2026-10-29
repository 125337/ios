@interface FinderCommonReddotSyncBaseLogic : NSObject
{
    unsigned int _cgiNumber; // +0x8
    NSString * _moduleName; // +0x10
    NSData * _syncBuffer; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _syncTaskQueue; // +0x28
    FinderCommonReddotSyncTask * _curSyncingTask; // +0x30
    EntranceReportSwitch * _entranceExposeSwitch; // +0x38
    NSMutableDictionary * _switchSyncTimestampDic; // +0x40
}
- (id)initWithCgiNumber:(unsigned int)arg1 moduleName:(id)arg2;
- (void)addSyncTask:(id)arg1;
- (void)onEndWithContinueFlag;
- (void)updateReddotExpose:(id)arg1 entranceCtrlInfo:(id)arg2 otherRelatedKeyPathList:(id)arg3;
- (void)checkQueue;
- (void)realStartWithTask:(id)arg1;
- (void)onSyncSuccessWithTask:(id)arg1 response:(id)arg2;
- (void)onSyncFailedWithTask:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)getFinderClientStatus;
- (void)triggerSyncWithConfig:(id)arg1 syncScene:(unsigned int)arg2;
- (void)triggerSyncWithConfig:(id)arg1 syncScene:(unsigned int)arg2 syncBlock:(id /* block */)arg3;
- (int)getSafeCacheTimeWithTimestamp:(double)arg1;
- (unsigned int)cgiNumber;
- (void)setCgiNumber:(unsigned int)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)syncTaskQueue;
- (void)setSyncTaskQueue:(id)arg1;
- (id)curSyncingTask;
- (void)setCurSyncingTask:(id)arg1;
- (id)entranceExposeSwitch;
- (void)setEntranceExposeSwitch:(id)arg1;
- (id)switchSyncTimestampDic;
- (void)setSwitchSyncTimestampDic:(id)arg1;
- (void).cxx_destruct;
@end
