@interface MMSafeModeMgr : MMRootService <MMResourceMgrExt, WCUpdateMgrExt, IWCCrashReporterMgrExt, IWCDumpReporterMgrExt, MMServiceProtocol>
{
    NSString * m_crashUsrName; // +0x8
    unsigned long long m_crashUin; // +0x10
    NSMutableArray * m_localUsrNameMd5List; // +0x18
    NSDictionary * m_serverConfig; // +0x20
    NSMutableArray * m_deleteListFromLocalConfig; // +0x28
    NSMutableArray * m_uploadListFromLocalConfig; // +0x30
    NSMutableArray * m_deleteListFromServerConfig; // +0x38
    NSMutableArray * m_uploadListFromServerConfig; // +0x40
    BOOL m_hasBackup; // +0x48
    BOOL m_isUploadTimeout; // +0x49
    unsigned long long m_safeModeScene; // +0x50
    MMSafeModeInfo * m_safeModeInfo; // +0x58
    MMSafeModeReport * m_safeModeReport; // +0x60
    shared_ptr<MMSMUploadFileObserver> m_observer; // +0x68
}
- (void)onServiceInit;
- (void)dealloc;
- (void)initCrashUsrName;
- (BOOL)shouldEnterSafeMode;
- (unsigned long long)safeModeScene;
- (void)didEnterWeChat;
- (void)doSafeModeSceneIDKeyReport;
- (void)doReportAndUpdateConfig;
- (void)onReportAndUpdateConfigTimeout;
- (void)notifyReportAndUpdateConfigFinished;
- (void)clearUnnecessaryFiles;
- (id)currentUploadFiles;
- (long long)getUploadFilesSize;
- (void)uploadLogsAndSpecialFiles;
- (void)cancelUpload;
- (void)backupFilesInUploadList;
- (void)backupLogsFromConfigs;
- (void)clearAllFlags;
- (void)handleResignActiveNotification;
- (void)reportDataWithKey:(int)arg1 value:(int)arg2;
- (void)doCrashReport;
- (void)onCrashReporterUploadResult:(BOOL)arg1;
- (void)onCrashReportFinished;
- (void)doLagReport;
- (void)onDumpReporterUploadResult:(BOOL)arg1;
- (void)onLagReportFinished;
- (void)updateServerConfig;
- (void)updatePRConfig;
- (void)onPCUpdateFinish:(unsigned long long)arg1;
- (void)updateSafeModeConfig;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)setCrashUsrName:(id)arg1;
- (BOOL)isServerConfigValid;
- (void)initDeleteAndUploadListFromLocalConfig;
- (void)initDeleteAndUploadListFromServerConfig;
- (id)deleteListFromConfigs;
- (void)forcedDeleteFilesFromServerConfig;
- (id)uploadListFromConfigs;
- (id)transformPath:(id)arg1;
- (int)uploadLogsDaysFromConfigs;
- (id)rootPath;
- (id)documentsPath;
- (id)documentsUserPaths;
- (id)libraryPath;
- (id)libraryUserPaths;
- (id)uploadFileTempPath;
- (id)uploadFileZipName;
- (void)shieldFOOMEnterSafeMode;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
