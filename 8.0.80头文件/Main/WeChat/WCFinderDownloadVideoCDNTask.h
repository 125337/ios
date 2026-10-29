@interface WCFinderDownloadVideoCDNTask : NSObject
{
    BOOL _bSourceChanged; // +0x8
    BOOL _bChatRoomPreload; // +0x9
    BOOL _bPreloadTask; // +0xa
    BOOL _bPreloadFinish; // +0xb
    BOOL _bReceiveMoov; // +0xc
    BOOL _bReceivePreData; // +0xd
    BOOL _preloadTaskDownloadTotalFile; // +0xe
    BOOL _needPreloadFirstFrame; // +0xf
    BOOL _hasPreloadFirstFrame; // +0x10
    BOOL _isLowPriorityTask; // +0x11
    BOOL _isTmpHardLinked; // +0x12
    BOOL _isHardLinked; // +0x13
    BOOL _useMulitBitRate; // +0x14
    BOOL _isHLS; // +0x15
    BOOL _hotFlag; // +0x16
    BOOL _isBackendPreloadTask; // +0x17
    BOOL _bUseDCIP; // +0x18
    unsigned int _taskId; // +0x1c
    int _downloadMode; // +0x20
    unsigned int _createTime; // +0x24
    unsigned int _preloadPercent; // +0x28
    unsigned int _totalLength; // +0x2c
    unsigned int _finishedLegth; // +0x30
    int _filetype; // +0x34
    int _apptype; // +0x38
    NSString * _clientId; // +0x40
    WCFinderFeedMediaWrap * _mediaItem; // +0x48
    NSString * _tmpPath; // +0x50
    NSString * _formatPath; // +0x58
    NSString * _tid; // +0x60
    NSString * _dataUrl; // +0x68
    NSString * _realDownLoadURL; // +0x70
    unsigned long long _ui64StartTime; // +0x78
    double _getMoovTime; // +0x80
    unsigned long long _enQueueTime; // +0x88
    unsigned long long _preloadMinSize; // +0x90
    unsigned long long _firstFrameSize; // +0x98
    NSString * _decodeKey; // +0xa0
    NSString * _videoDownloadFlag; // +0xa8
    NSArray * _arryIP; // +0xb0
    NSString * _printClientID; // +0xb8
    NSString * _encryptKey; // +0xc0
    NSString * _encryptIV; // +0xc8
}
- (id)getHost;
- (id)getDNSKey;
- (id)description;
- (id)finderCtrlInfo;
- (id)valueForKey:(id)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (int)downloadMode;
- (void)setDownloadMode:(int)arg1;
- (BOOL)bSourceChanged;
- (void)setBSourceChanged:(BOOL)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)tmpPath;
- (void)setTmpPath:(id)arg1;
- (id)formatPath;
- (void)setFormatPath:(id)arg1;
- (BOOL)bChatRoomPreload;
- (void)setBChatRoomPreload:(BOOL)arg1;
- (BOOL)bPreloadTask;
- (void)setBPreloadTask:(BOOL)arg1;
- (BOOL)bPreloadFinish;
- (void)setBPreloadFinish:(BOOL)arg1;
- (unsigned int)preloadPercent;
- (void)setPreloadPercent:(unsigned int)arg1;
- (unsigned int)totalLength;
- (void)setTotalLength:(unsigned int)arg1;
- (unsigned int)finishedLegth;
- (void)setFinishedLegth:(unsigned int)arg1;
- (int)filetype;
- (void)setFiletype:(int)arg1;
- (int)apptype;
- (void)setApptype:(int)arg1;
- (BOOL)bReceiveMoov;
- (void)setBReceiveMoov:(BOOL)arg1;
- (BOOL)bReceivePreData;
- (void)setBReceivePreData:(BOOL)arg1;
- (BOOL)preloadTaskDownloadTotalFile;
- (void)setPreloadTaskDownloadTotalFile:(BOOL)arg1;
- (BOOL)needPreloadFirstFrame;
- (void)setNeedPreloadFirstFrame:(BOOL)arg1;
- (BOOL)hasPreloadFirstFrame;
- (void)setHasPreloadFirstFrame:(BOOL)arg1;
- (BOOL)isLowPriorityTask;
- (void)setIsLowPriorityTask:(BOOL)arg1;
- (BOOL)isTmpHardLinked;
- (void)setIsTmpHardLinked:(BOOL)arg1;
- (BOOL)isHardLinked;
- (void)setIsHardLinked:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)realDownLoadURL;
- (void)setRealDownLoadURL:(id)arg1;
- (unsigned long long)ui64StartTime;
- (void)setUi64StartTime:(unsigned long long)arg1;
- (double)getMoovTime;
- (void)setGetMoovTime:(double)arg1;
- (unsigned long long)enQueueTime;
- (void)setEnQueueTime:(unsigned long long)arg1;
- (unsigned long long)preloadMinSize;
- (void)setPreloadMinSize:(unsigned long long)arg1;
- (unsigned long long)firstFrameSize;
- (void)setFirstFrameSize:(unsigned long long)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (id)videoDownloadFlag;
- (void)setVideoDownloadFlag:(id)arg1;
- (BOOL)useMulitBitRate;
- (void)setUseMulitBitRate:(BOOL)arg1;
- (BOOL)isHLS;
- (void)setIsHLS:(BOOL)arg1;
- (BOOL)hotFlag;
- (void)setHotFlag:(BOOL)arg1;
- (BOOL)isBackendPreloadTask;
- (void)setIsBackendPreloadTask:(BOOL)arg1;
- (BOOL)bUseDCIP;
- (void)setBUseDCIP:(BOOL)arg1;
- (id)arryIP;
- (void)setArryIP:(id)arg1;
- (id)printClientID;
- (void)setPrintClientID:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)encryptIV;
- (void)setEncryptIV:(id)arg1;
- (void).cxx_destruct;
@end
