@interface VideoDownloadStatInfo : NSObject
{
    unsigned int _sessionMember; // +0x8
    unsigned int _downloadStartTime; // +0xc
    unsigned int _preloadSize; // +0x10
    unsigned int _preloadStatus; // +0x14
    NSString * _fromUsername; // +0x18
    NSString * _sessionName; // +0x20
    NSString * _fileId; // +0x28
    NSString * _videoNewMd5; // +0x30
    VideoParamsInfo * _videoParams; // +0x38
    NSString * _cdnIp; // +0x40
    NSString * _snsUrl; // +0x48
    NSString * _snsId; // +0x50
}
- (id)init;
- (void)mergeInfoFromDownloadTaskInfo:(id)arg1;
- (void)mergeInfoFromTaskInfo:(id)arg1;
- (id)getBigVideoStatInfo;
- (void)reportKV;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (unsigned int)sessionMember;
- (void)setSessionMember:(unsigned int)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)videoNewMd5;
- (void)setVideoNewMd5:(id)arg1;
- (unsigned int)downloadStartTime;
- (void)setDownloadStartTime:(unsigned int)arg1;
- (id)videoParams;
- (void)setVideoParams:(id)arg1;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (id)snsUrl;
- (void)setSnsUrl:(id)arg1;
- (unsigned int)preloadSize;
- (void)setPreloadSize:(unsigned int)arg1;
- (unsigned int)preloadStatus;
- (void)setPreloadStatus:(unsigned int)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (void).cxx_destruct;
@end
