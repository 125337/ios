@interface MMTextStateMediaDownloadTaskInfo : MMObject
{
    C2CDownloadResult result; // +0x8
    BOOL _bSourceChanged; // +0x390
    BOOL _bChatRoomPreload; // +0x391
    BOOL _bPreloadTask; // +0x392
    BOOL _bPreloadFinish; // +0x393
    BOOL _bReceiveMoov; // +0x394
    BOOL _bReceivePreData; // +0x395
    BOOL _bUseDCIP; // +0x396
    BOOL _bUseXorEncrypt; // +0x397
    int _downloadMode; // +0x398
    unsigned int _createTime; // +0x39c
    unsigned int _preloadPercent; // +0x3a0
    unsigned int _totalLength; // +0x3a4
    unsigned int _finishedLegth; // +0x3a8
    int _filetype; // +0x3ac
    int _apptype; // +0x3b0
    NSString * _clientId; // +0x3b8
    MMTextStateMediaItem * _mediaItem; // +0x3c0
    NSString * _tmpPath; // +0x3c8
    NSString * _formatPath; // +0x3d0
    NSArray * _arryIP; // +0x3d8
    NSString * _dataUrl; // +0x3e0
    unsigned long long _xorEncryKey; // +0x3e8
    unsigned long long _ui64StartTime; // +0x3f0
}
- (id)getHost;
- (id)getDNSKey;
- (id)description;
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
- (BOOL)bReceiveMoov;
- (void)setBReceiveMoov:(BOOL)arg1;
- (BOOL)bReceivePreData;
- (void)setBReceivePreData:(BOOL)arg1;
- (int)filetype;
- (void)setFiletype:(int)arg1;
- (int)apptype;
- (void)setApptype:(int)arg1;
- (BOOL)bUseDCIP;
- (void)setBUseDCIP:(BOOL)arg1;
- (id)arryIP;
- (void)setArryIP:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (BOOL)bUseXorEncrypt;
- (void)setBUseXorEncrypt:(BOOL)arg1;
- (unsigned long long)xorEncryKey;
- (void)setXorEncryKey:(unsigned long long)arg1;
- (unsigned long long)ui64StartTime;
- (void)setUi64StartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

