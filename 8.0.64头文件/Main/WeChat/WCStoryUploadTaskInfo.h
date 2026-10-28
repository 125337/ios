@interface WCStoryUploadTaskInfo : NSObject <PBCoding>
{
    BOOL _isRetrying; // +0x8
    BOOL _startCndUpload; // +0x9
    BOOL _isSelectFromAlbum; // +0xa
    BOOL _bCgiPosting; // +0xb
    unsigned int _createTime; // +0xc
    unsigned int _retryCount; // +0x10
    unsigned int _enterQueueTime; // +0x14
    unsigned int _startUploadTime; // +0x18
    unsigned int _finishUploadTime; // +0x1c
    unsigned int _firstFailTime; // +0x20
    unsigned int _lastFailTime; // +0x24
    int _retCode; // +0x28
    int _cgiRetCode; // +0x2c
    unsigned int _audioChannelsPerFrame; // +0x30
    NSString * _tid; // +0x38
    NSString * _clientId; // +0x40
    NSString * _videoPath; // +0x48
    NSString * _thumbPath; // +0x50
    NSString * _localInfo; // +0x58
    unsigned long long _scope; // +0x60
    NSData * _localInfoBuf; // +0x68
    double _duration; // +0x70
    long long _totalsize; // +0x78
    NSMutableArray * _originImageMd5s; // +0x80
    NSString * _videoUrl; // +0x88
    NSString * _md5; // +0x90
    NSString * _videoMd5; // +0x98
    NSString * _thumbUrl; // +0xa0
    NSString * _thumbMd5; // +0xa8
    NSString * _reportXml; // +0xb0
    NSString * _originVideoArgs; // +0xb8
    NSString * _exportVideoPath; // +0xc0
    long long _errorType; // +0xc8
    NSString * _fileId; // +0xd0
    NSString * _nsCdnStatInfo; // +0xd8
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_localInfo;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_isRetrying;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_enterQueueTime;
+ (void)PBArrayAdd_startUploadTime;
+ (void)PBArrayAdd_firstFailTime;
+ (void)PBArrayAdd_lastFailTime;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_videoMd5;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_bCgiPosting;
+ (void)PBArrayAdd_localInfoBuf;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_reportXml;
+ (void)PBArrayAdd_retCode;
+ (void)PBArrayAdd_finishUploadTime;
+ (void)PBArrayAdd_originVideoArgs;
+ (void)PBArrayAdd_exportVideoPath;
+ (void)PBArrayAdd_isSelectFromAlbum;
+ (void)PBArrayAdd_audioChannelsPerFrame;
+ (void)PBArrayAdd_scope;
+ (void)PBArrayAdd_startCndUpload;
+ (void)PBArrayAdd_originImageMd5s;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)getCDNReportInfo;
- (id)videoPath;
- (id)thumbPath;
- (BOOL)isRetryTimeout;
- (id)description;
- (BOOL)isStartUpload;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setThumbPath:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)localInfo;
- (void)setLocalInfo:(id)arg1;
- (unsigned long long)scope;
- (void)setScope:(unsigned long long)arg1;
- (id)localInfoBuf;
- (void)setLocalInfoBuf:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (long long)totalsize;
- (void)setTotalsize:(long long)arg1;
- (BOOL)isRetrying;
- (void)setIsRetrying:(BOOL)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)enterQueueTime;
- (void)setEnterQueueTime:(unsigned int)arg1;
- (unsigned int)startUploadTime;
- (void)setStartUploadTime:(unsigned int)arg1;
- (unsigned int)finishUploadTime;
- (void)setFinishUploadTime:(unsigned int)arg1;
- (unsigned int)firstFailTime;
- (void)setFirstFailTime:(unsigned int)arg1;
- (unsigned int)lastFailTime;
- (void)setLastFailTime:(unsigned int)arg1;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (int)cgiRetCode;
- (void)setCgiRetCode:(int)arg1;
- (BOOL)startCndUpload;
- (void)setStartCndUpload:(BOOL)arg1;
- (id)originImageMd5s;
- (void)setOriginImageMd5s:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)videoMd5;
- (void)setVideoMd5:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (id)reportXml;
- (void)setReportXml:(id)arg1;
- (id)originVideoArgs;
- (void)setOriginVideoArgs:(id)arg1;
- (id)exportVideoPath;
- (void)setExportVideoPath:(id)arg1;
- (unsigned int)audioChannelsPerFrame;
- (void)setAudioChannelsPerFrame:(unsigned int)arg1;
- (BOOL)isSelectFromAlbum;
- (void)setIsSelectFromAlbum:(BOOL)arg1;
- (BOOL)bCgiPosting;
- (void)setBCgiPosting:(BOOL)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)nsCdnStatInfo;
- (void)setNsCdnStatInfo:(id)arg1;
- (void).cxx_destruct;
@end
