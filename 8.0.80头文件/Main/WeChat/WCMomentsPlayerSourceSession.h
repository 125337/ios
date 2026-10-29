@interface WCMomentsPlayerSourceSession : NSObject
{
    WCMomentsPlayerSourceConfigurationContext * _configurationContext; // +0x8
    WCMomentsPlayerSourceDownloadContext * _downloadContextForPreview; // +0x10
    WCMomentsPlayerSourceDownloadContext * _downloadContextForFullScreen; // +0x18
    NSDate * _sourceSwitchStartTime; // +0x20
    NSDate * _sourceSwitchEndTime; // +0x28
    long long _enterFullScreenCount; // +0x30
    long long _loadingCount; // +0x38
}
- (id)downloadContextForFileKey:(id)arg1;
- (void)didStartDownloadForFileKey:(id)arg1;
- (void)didUpdateDownloadMoovForFileKey:(id)arg1 withProgressInfo:(id)arg2;
- (void)didStopDownloadForFileKey:(id)arg1 taskInfo:(id)arg2 isCompleted:(BOOL)arg3;
- (void)didStopPreloadForFileKey:(id)arg1 progressInfo:(id)arg2 isCompleted:(BOOL)arg3;
- (void)willStartSwitchingSource;
- (void)didFinishSwitchingSource;
- (id)configurationContext;
- (void)setConfigurationContext:(id)arg1;
- (id)downloadContextForPreview;
- (void)setDownloadContextForPreview:(id)arg1;
- (id)downloadContextForFullScreen;
- (void)setDownloadContextForFullScreen:(id)arg1;
- (id)sourceSwitchStartTime;
- (void)setSourceSwitchStartTime:(id)arg1;
- (id)sourceSwitchEndTime;
- (void)setSourceSwitchEndTime:(id)arg1;
- (long long)enterFullScreenCount;
- (void)setEnterFullScreenCount:(long long)arg1;
- (long long)loadingCount;
- (void)setLoadingCount:(long long)arg1;
- (void).cxx_destruct;
@end
