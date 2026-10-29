@interface WCDownloadArgsWrap : NSObject <WCPlayerMediaExt>
{
    C2CDownloadRequest _request; // +0x8
    BOOL _isHLSVideo; // +0x458
    BOOL _isColdSNSData; // +0x459
    BOOL _isHotSNSVideo; // +0x45a
    BOOL _isUseMultithread; // +0x45b
    int _hostResolvePriority; // +0x45c
    int _hostResolveFlag; // +0x460
    unsigned int _cacheMediaType; // +0x464
    int _fileType; // +0x468
    int _appType; // +0x46c
    int _limitRate; // +0x470
    int _requestVideoFormat; // +0x474
    int _videoFlagPolicy; // +0x478
    int _chatType; // +0x47c
    unsigned int _blockSize; // +0x480
    unsigned int _maxHttpRedirectCount; // +0x484
    unsigned int _concurrentCount; // +0x488
    int _predownloadRatio; // +0x48c
    int _predownloadMinsize; // +0x490
    int _bitrate; // +0x494
    NSString * _fileKey; // +0x498
    unsigned long long _downloadType; // +0x4a0
    unsigned long long _scene; // +0x4a8
    NSString * _formatPath; // +0x4b0
    id _userInfo; // +0x4b8
    NSString * _aggregateName; // +0x4c0
    id /* block */ _progressBlock; // +0x4c8
    id /* block */ _completeBlock; // +0x4d0
    NSString * _savePath; // +0x4d8
    NSString * _fileMd5; // +0x4e0
    unsigned long long _fileSize; // +0x4e8
    NSString * _fileID; // +0x4f0
    NSString * _aesKey; // +0x4f8
    NSString * _decryptIV; // +0x500
    NSString * _msgExtra; // +0x508
    NSString * _cdnDebugIP; // +0x510
    NSString * _requestVideoFlag; // +0x518
    NSData * _finderCtrlInfo; // +0x520
    NSString * _hlsVideoFlag; // +0x528
    NSString * _SNSVideoColdRule; // +0x530
    NSString * _url; // +0x538
    NSString * _host; // +0x540
    NSString * _referer; // +0x548
    unsigned long long _snsDecryptKey; // +0x550
    NSString * _customRequestHeader; // +0x558
    unsigned long long _fileSizeMaxLimit; // +0x560
    unsigned long long _statefileKeepHours; // +0x568
    unsigned long long _pcdnAppid; // +0x570
    unsigned long long _maxPcdnConnections; // +0x578
}
- (id)init;
- (void)setDownloadType:(unsigned long long)arg1;
- (void)setHostResolvePriority:(int)arg1;
- (void)setHostResolveFlag:(int)arg1;
- (void)setFileType:(int)arg1;
- (void)setAppType:(int)arg1;
- (void)setFileKey:(id)arg1;
- (void)setSavePath:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileID:(id)arg1;
- (void)setAesKey:(id)arg1;
- (void)setDecryptIV:(id)arg1;
- (void)setLimitRate:(int)arg1;
- (void)setMsgExtra:(id)arg1;
- (void)setCdnDebugIP:(id)arg1;
- (void)setRequestVideoFormat:(int)arg1;
- (void)setVideoFlagPolicy:(int)arg1;
- (void)setRequestVideoFlag:(id)arg1;
- (void)setIsHLSVideo:(BOOL)arg1;
- (void)setHlsVideoFlag:(id)arg1;
- (void)setChatType:(int)arg1;
- (void)setIsColdSNSData:(BOOL)arg1;
- (void)setIsHotSNSVideo:(BOOL)arg1;
- (void)setSNSVideoColdRule:(id)arg1;
- (void)setBlockSize:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setReferer:(id)arg1;
- (void)setSnsDecryptKey:(unsigned long long)arg1;
- (void)setCustomRequestHeader:(id)arg1;
- (void)setIsUseMultithread:(BOOL)arg1;
- (void)setConcurrentCount:(unsigned int)arg1;
- (void)setMaxHttpRedirectCount:(unsigned int)arg1;
- (void)setPredownloadRatio:(int)arg1;
- (void)setPredownloadMinsize:(int)arg1;
- (void)setFileSizeMaxLimit:(unsigned long long)arg1;
- (void)setStatefileKeepHours:(unsigned long long)arg1;
- (void)setFinderCtrlInfo:(id)arg1;
- (void)setMaxPcdnConnections:(unsigned long long)arg1;
- (void)setPcdnAppid:(unsigned long long)arg1;
- (C2CDownloadRequest)getMarsRequest;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (int)getBitrate;
- (id)fileKey;
- (unsigned long long)downloadType;
- (int)hostResolvePriority;
- (int)hostResolveFlag;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)formatPath;
- (void)setFormatPath:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)aggregateName;
- (void)setAggregateName:(id)arg1;
- (unsigned int)cacheMediaType;
- (void)setCacheMediaType:(unsigned int)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (int)fileType;
- (int)appType;
- (id)savePath;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (unsigned long long)fileSize;
- (id)fileID;
- (id)aesKey;
- (id)decryptIV;
- (int)limitRate;
- (id)msgExtra;
- (id)cdnDebugIP;
- (int)requestVideoFormat;
- (int)videoFlagPolicy;
- (id)requestVideoFlag;
- (id)finderCtrlInfo;
- (BOOL)isHLSVideo;
- (id)hlsVideoFlag;
- (int)chatType;
- (BOOL)isColdSNSData;
- (BOOL)isHotSNSVideo;
- (id)SNSVideoColdRule;
- (unsigned int)blockSize;
- (id)url;
- (id)host;
- (id)referer;
- (unsigned long long)snsDecryptKey;
- (unsigned int)maxHttpRedirectCount;
- (id)customRequestHeader;
- (BOOL)isUseMultithread;
- (unsigned int)concurrentCount;
- (unsigned long long)fileSizeMaxLimit;
- (unsigned long long)statefileKeepHours;
- (unsigned long long)pcdnAppid;
- (unsigned long long)maxPcdnConnections;
- (int)predownloadRatio;
- (int)predownloadMinsize;
- (int)bitrate;
- (void)setBitrate:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

