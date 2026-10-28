@interface DownloadVoiceCDNMgr : NSObject
{
    BOOL _bDownloading; // +0x8
    id <DownloadVoiceDelegate> _delegate; // +0x10
    MMTimer * _timerCheck; // +0x18
    MMTimer * _timerCheckTimeout; // +0x20
    NSMutableDictionary * _readyDownloadItems; // +0x28
    NSRecursiveLock * _lock; // +0x30
}
- (id)init;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUpload;
- (void)TimerCheckTimeout;
- (id)getPBPath;
- (void)loadItemFromPB;
- (void)updateItemToPB;
- (void)OnSyncDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5 Voice:(id)arg6;
- (void)startDownload;
- (void)startDownload:(id)arg1;
- (void)downloadVoiceFromCDN:(id)arg1;
- (void)handleDownloadCDNFail:(id)arg1;
- (void)handleDownloadCDNSuccess:(id)arg1;
- (void)reportDownloadCDNFail:(id)arg1;
- (void)reportDownloadCDNSuccess:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timerCheck;
- (void)setTimerCheck:(id)arg1;
- (id)timerCheckTimeout;
- (void)setTimerCheckTimeout:(id)arg1;
- (id)readyDownloadItems;
- (void)setReadyDownloadItems:(id)arg1;
- (BOOL)bDownloading;
- (void)setBDownloading:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
