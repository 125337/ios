@interface GameHaowanVideoUploadTask : GameHaowanUploadTask <ICdnComMgrExt>
{
    NSString * _videoMd5; // +0x38
    long long _videoFileSize; // +0x40
    float _lastPercent; // +0x48
    NSString * _fileKey; // +0x50
    NSString * _videoId; // +0x58
    unsigned long long _startUploadTime; // +0x60
}
- (void)onStart;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)trackEventUploadSucceed;
- (void)trackEventUploadFailed:(long long)arg1;
- (void)trackEventStartUpload;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (float)lastPercent;
- (void)setLastPercent:(float)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (unsigned long long)startUploadTime;
- (void)setStartUploadTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

