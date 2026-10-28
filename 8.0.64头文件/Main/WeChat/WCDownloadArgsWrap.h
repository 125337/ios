@interface WCDownloadArgsWrap : NSObject <WCPlayerMediaExt>
{
    C2CDownloadRequest _request; // +0x8
    BOOL _isHLSVideo; // +0x470
    BOOL _isColdSNSData; // +0x471
    BOOL _isHotSNSVideo; // +0x472
    BOOL _isUseMultithread; // +0x473
    BOOL _isTreatAsVideoFile; // +0x474
    BOOL _isSlientTask; // +0x475
    int _hostResolvePriority; // +0x478
    int _hostResolveFlag; // +0x47c
    int _mode; // +0x480
    unsigned int _cacheMediaType; // +0x484
    int _fileType; // +0x488
    int _appType; // +0x48c
    int _bizType; // +0x490
    int _limitRate; // +0x494
    int _requestVideoFormat; // +0x498
    int _videoFlagPolicy; // +0x49c
    int _chatType; // +0x4a0
    unsigned int _blockSize; // +0x4a4
    unsigned int _maxHttpRedirectCount; // +0x4a8
    unsigned int _concurrentCount; // +0x4ac
    int _predownloadRatio; // +0x4b0
    int _predownloadMinsize; // +0x4b4
    int _bitrate; // +0x4b8
    NSString * _fileKey; // +0x4c0
    unsigned long long _downloadType; // +0x4c8
    unsigned long long _scene; // +0x4d0
    NSString * _formatPath; // +0x4d8
    id _userInfo; // +0x4e0
    NSString * _aggregateName; // +0x4e8
    id /* block */ _progressBlock; // +0x4f0
    id /* block */ _completeBlock; // +0x4f8
    NSString * _savePath; // +0x500
    NSString * _fileMd5; // +0x508
    unsigned long long _fileSize; // +0x510
    NSString * _fileID; // +0x518
    NSString * _aesKey; // +0x520
    NSString * _decryptIV; // +0x528
    NSString * _msgExtra; // +0x530
    NSString * _cdnDebugIP; // +0x538
    NSString * _requestVideoFlag; // +0x540
    NSData * _finderCtrlInfo; // +0x548
    NSString * _hlsVideoFlag; // +0x550
    NSString * _SNSVideoColdRule; // +0x558
    NSString * _url; // +0x560
    NSString * _host; // +0x568
    NSString * _referer; // +0x570
    unsigned long long _snsDecryptKey; // +0x578
    NSString * _customRequestHeader; // +0x580
    unsigned long long _fileSizeMaxLimit; // +0x588
    unsigned long long _statefileKeepHours; // +0x590
    unsigned long long _pcdnAppid; // +0x598
    unsigned long long _maxPcdnConnections; // +0x5a0
    basic_string<char, std::char_traits<char>, std::allocator<char>> _bizReqPayload; // +0x5a8
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setMode:(int)arg1;
- (void)setDownloadType:(unsigned long long)arg1;
- (void)setHostResolvePriority:(int)arg1;
- (void)setHostResolveFlag:(int)arg1;
- (void)setFileType:(int)arg1;
- (void)setAppType:(int)arg1;
- (void)setBizType:(int)arg1;
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
- (void)setBizReqPayload:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (void)setIsSlientTask:(BOOL)arg1;
- (void)setIsTreatAsVideoFile:(BOOL)arg1;
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
- (int)mode;
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
- (int)bizType;
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
- (BOOL)isTreatAsVideoFile;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)bizReqPayload;
- (BOOL)isSlientTask;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
