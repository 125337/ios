@interface WCForeBackFlowMgr : MMObject <WCAccountSwitchProtocol>
{
    NSObject<OS_dispatch_queue> * queue; // +0x8
    unsigned int pid; // +0x10
    NSString * curPage; // +0x18
    unsigned long long curPageHash; // +0x20
    MemoryMappedKV * mapKv; // +0x28
    unsigned long long lastEnterForegroundTime; // +0x30
    unsigned long long lastEnterBackgroundTime; // +0x38
    unsigned int applicaitonSwitchSeq; // +0x40
    unsigned int appSwitchMergeSeq; // +0x44
    unsigned int reportSeq; // +0x48
    NSMutableArray * appSwitchMergeRecords; // +0x50
    NSMutableArray * appStatMergeRecords; // +0x58
    NSString * enterForegroundUnreadMsg; // +0x60
    NSMutableArray * unreadMergeRecords; // +0x68
}
- (void)onInit;
- (void)onClearData;
- (void)loadAppStatData;
- (id)loadAppSwitchRptRecords:(id)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)handleWeixinStatus:(BOOL)arg1 withReport:(BOOL)arg2;
- (void)reportWeixinTime;
- (id)createRptByJsonArray:(id)arg1;
- (void)saveAppSwitchMergeRecords:(id)arg1 withKey:(id)arg2;
- (void)calcSessionUnread:(id)arg1;
- (id)getCalcSessionType:(id)arg1;
- (void).cxx_destruct;
@end
