@interface WCNewClickStatMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    WCNewClickStatItem * _reportItem; // +0x8
    WCNewClickStatRecordPageItem * curPage; // +0x10
    NSObject<OS_dispatch_queue> * queue; // +0x18
    WCNewClickStatReportConfig * _reportConfig; // +0x20
    unsigned int _eventID; // +0x28
    unsigned int applicaitonSwitchSeq; // +0x2c
    unsigned int pid; // +0x30
    unsigned int reportSeq; // +0x34
    MemoryMappedKV * mapKv; // +0x38
    NSMutableArray * appSwitchMergeRecords; // +0x40
    unsigned int appSwitchMergeSeq; // +0x48
    NSMutableArray * appStatMergeRecords; // +0x50
    unsigned long long lastEnterForegroundTime; // +0x58
    unsigned long long lastEnterBackgroundTime; // +0x60
    NSString * enterForegroundUnreadMsg; // +0x68
    NSMutableArray * unreadMergeRecords; // +0x70
    NSMutableArray * m_pageStack; // +0x78
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onWillSuspend;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)pageAppear:(id)arg1 tag:(id)arg2;
- (void)pageDisappear:(id)arg1 tag:(id)arg2;
- (id)pageIDWithPage:(id)arg1 tag:(id)arg2;
- (void)saveWidgetRecordForRecordPage:(id)arg1;
- (id)getAppNormalAttr:(id)arg1;
- (id)getPageNormalAttr:(id)arg1 withEventConfig:(id)arg2;
- (id)getWidgetNormalAttrOnPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (void)reconstructOneReportItem:(unsigned int)arg1;
- (void)reportAndSaveData;
- (void)checkSeq:(id)arg1;
- (BOOL)isNeedToReport:(id)arg1;
- (void)loadReportConfig;
- (void)saveCurrentReportData:(id)arg1;
- (void)saveRealLastSwitchBackTime;
- (BOOL)isNeedFilter:(id)arg1;
- (BOOL)isNeedPageAction:(id)arg1 pageActionConfig:(id)arg2;
- (BOOL)isNeedCalWidgetStatData:(id)arg1;
- (void)removeWidgetRecordByPageList:(id)arg1;
- (void)notifyPageAppear:(id)arg1;
- (void)saveSnapshot:(id)arg1;
- (void)recordOrReportAppSwitch:(id)arg1 Type:(BOOL)arg2;
- (void)handleWeixinStatus:(BOOL)arg1;
- (void)saveAppSwitchMergeRecords:(id)arg1 andkey:(id)arg2;
- (id)loadAppSwitchRptRecords:(id)arg1;
- (void)saveAppStatTime;
- (void)loadAppStatData;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)reportWeixinTime;
- (id)createRptByJsonArray:(id)arg1;
- (void)calcSessionUnread:(id)arg1;
- (void).cxx_destruct;
@end
