@interface WCFinderTempSaveService : MMUserService <MMServiceProtocol>
{
    WCFinderDataItem * _dataItemModel; // +0x8
    WCFinderPostSessionModel * _postSession; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
- (id)init;
- (void)setDataItem:(id)arg1;
- (id)p_getReportPostStateModel;
- (void)removeOldReportPostStateModel:(id)arg1;
- (void)checkSingleFileDataTransfer;
- (id)dataItemModel;
- (void)setDataItemModel:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
