@interface TPDownLoadProgressInfo : NSObject
{
    int _playableDurationMS; // +0x8
    int _downloadSpeedKBps; // +0xc
    long long _currentDownloadSize; // +0x10
    long long _totalFileSize; // +0x18
    NSString * _extraInfo; // +0x20
}
- (id)initWithPlayableDuration:(int)arg1 downloadSpeed:(int)arg2 currentDownloadSize:(long long)arg3 totalFileSize:(long long)arg4 extraInfo:(id)arg5;
- (int)playableDurationMS;
- (int)downloadSpeedKBps;
- (long long)currentDownloadSize;
- (long long)totalFileSize;
- (id)extraInfo;
- (void).cxx_destruct;
@end
