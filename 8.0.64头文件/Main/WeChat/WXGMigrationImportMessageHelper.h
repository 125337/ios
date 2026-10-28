@interface WXGMigrationImportMessageHelper : NSObject <WXGImportMessageHelperDelegate>
{
    BOOL m_bImporting; // +0x8
    unsigned long long m_currentProcessCount; // +0x10
    unsigned long long m_totalProcesCount; // +0x18
    unsigned long long m_currentSessionCount; // +0x20
    unsigned long long m_totalSessionCount; // +0x28
    id <WXGMigrationImportMessageHelperDelegate> _delegate; // +0x30
    WXGImportMessageHelper * _importMessageHelper; // +0x38
    WXGMigrationMsgItemDB * _msgItemDB; // +0x40
    NSObject<OS_dispatch_queue> * _importQueue; // +0x48
}
- (id)init;
- (void)startImport;
- (void)stopImport;
- (void)finishAndUpdateSession;
- (void)cancelImport;
- (void)finishAndRemoveDBFiles;
- (void)p_importThread;
- (void)p_oldImportThread;
- (void)onImportOneMsgItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)importMessageHelper;
- (void)setImportMessageHelper:(id)arg1;
- (id)msgItemDB;
- (void)setMsgItemDB:(id)arg1;
- (id)importQueue;
- (void)setImportQueue:(id)arg1;
- (void).cxx_destruct;
@end
