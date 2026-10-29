@interface MMResourceCdnDownloaderNotifier : IWebNetTaskCallBack
{
    id <MMResourceCdnDownloaderNotifierDelegate> _delegate; // +0x8
    NSString * _identifier; // +0x10
    MMTimer * _timer; // +0x18
}
- (void)dealloc;
- (void)startWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)stop;
- (void)notifyWithDownloadInfo:(id)arg1;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)scheduleTimer;
- (void)invalidateTimer;
- (void)onTimeout;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

