@interface WXGBackupImportMessageHelper : NSObject
{
    unsigned long long m_currentSessionCount; // +0x8
    unsigned long long m_totalSessionCount; // +0x10
    BOOL _bImportingData; // +0x18
    unsigned long long _importType; // +0x20
    id <WXGBackupImportMessageHelperDelegate> _delegate; // +0x28
    WXGImportAnalyseInfo * _importInfo; // +0x30
    WXGImportMessageHelper * _importMessageHelper; // +0x38
    WXGBackupIndexDB * _indexDB; // +0x40
    NSObject<OS_dispatch_queue> * _importQueue; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)startImport:(BOOL)arg1;
- (void)importWhenDestination:(BOOL)arg1;
- (void)stopImport;
- (void)finishAndUpdateSession;
- (void)cancelImport;
- (void)finishAndRemoveDBFiles;
- (void)p_importWhenDestinationThread;
- (void)p_recoverThread;
- (unsigned long long)importType;
- (void)setImportType:(unsigned long long)arg1;
- (BOOL)bImportingData;
- (void)setBImportingData:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)importInfo;
- (void)setImportInfo:(id)arg1;
- (id)importMessageHelper;
- (void)setImportMessageHelper:(id)arg1;
- (id)indexDB;
- (void)setIndexDB:(id)arg1;
- (id)importQueue;
- (void)setImportQueue:(id)arg1;
- (void).cxx_destruct;
@end

