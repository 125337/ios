@interface WCDownloadArgsWrap : NSObject <WCPlayerMediaExt>
{
    C2CDownloadRequest _request; // +0x8
    BOOL _isHLSVideo; // +0x468
    BOOL _isColdSNSData; // +0x469
    BOOL _isHotSNSVideo; // +0x46a
    BOOL _isUseMultithread; // +0x46b
    BOOL _isTreatAsVideoFile; // +0x46c
    BOOL _isSlientTask; // +0x46d
    short _appType; // +0x46e
    int _hostResolvePriority; // +0x470
    int _hostResolveFlag; // +0x474
    int _mode; // +0x478
    unsigned int _cacheMediaType; // +0x47c
    int _fileType; // +0x480
    int _bizType; // +0x484
    int _limitRate; // +0x488
    int _requestVideoFormat; // +0x48c
    int _videoFlagPolicy; // +0x490
    int _chatType; // +0x494
    unsigned int _blockSize; // +0x498
    unsigned int _maxHttpRedirectCount; // +0x49c
    unsigned int _concurrentCount; // +0x4a0
    int _predownloadRatio; // +0x4a4
    int _predownloadMinsize; // +0x4a8
    int _bitrate; // +0x4ac
    NSString * _fileKey; // +0x4b0
    unsigned long long _downloadType; // +0x4b8
    unsigned long long _scene; // +0x4c0
    NSString * _formatPath; // +0x4c8
    id _userInfo; // +0x4d0
    NSString * _aggregateName; // +0x4d8
    id /* block */ _progressBlock; // +0x4e0
    id /* block */ _completeBlock; // +0x4e8
    NSString * _savePath; // +0x4f0
    NSString * _fileMd5; // +0x4f8
    unsigned long long _fileSize; // +0x500
    NSString * _fileID; // +0x508
    NSString * _aesKey; // +0x510
    NSString * _decryptIV; // +0x518
    NSString * _msgExtra; // +0x520
    NSString * _cdnDebugIP; // +0x528
    NSString * _requestVideoFlag; // +0x530
    NSData * _finderCtrlInfo; // +0x538
    NSString * _hlsVideoFlag; // +0x540
    NSString * _SNSVideoColdRule; // +0x548
    NSString * _url; // +0x550
    NSString * _host; // +0x558
    NSString * _referer; // +0x560
    unsigned long long _snsDecryptKey; // +0x568
    NSString * _customRequestHeader; // +0x570
    unsigned long long _fileSizeMaxLimit; // +0x578
    unsigned long long _statefileKeepHours; // +0x580
    unsigned long long _pcdnAppid; // +0x588
    unsigned long long _maxPcdnConnections; // +0x590
    basic_string<char, std::char_traits<char>, std::allocator<char>> _bizReqPayload; // +0x598
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setMode:(int)arg1;
- (void)setDownloadType:(unsigned long long)arg1;
- (void)setHostResolvePriority:(int)arg1;
- (void)setHostResolveFlag:(int)arg1;
- (void)setFileType:(int)arg1;
- (void)setAppType:(short)arg1;
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
- (short)appType;
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
