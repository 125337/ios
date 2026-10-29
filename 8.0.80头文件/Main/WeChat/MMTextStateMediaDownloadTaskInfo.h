@interface MMTextStateMediaDownloadTaskInfo : MMObject
{
    C2CDownloadResult result; // +0x8
    BOOL _bSourceChanged; // +0x3b8
    BOOL _bChatRoomPreload; // +0x3b9
    BOOL _bPreloadTask; // +0x3ba
    BOOL _bPreloadFinish; // +0x3bb
    BOOL _bReceiveMoov; // +0x3bc
    BOOL _bReceivePreData; // +0x3bd
    BOOL _bUseDCIP; // +0x3be
    BOOL _bUseXorEncrypt; // +0x3bf
    int _downloadMode; // +0x3c0
    unsigned int _createTime; // +0x3c4
    unsigned int _preloadPercent; // +0x3c8
    unsigned int _totalLength; // +0x3cc
    unsigned int _finishedLegth; // +0x3d0
    int _filetype; // +0x3d4
    int _apptype; // +0x3d8
    NSString * _clientId; // +0x3e0
    MMTextStateMediaItem * _mediaItem; // +0x3e8
    NSString * _tmpPath; // +0x3f0
    NSString * _formatPath; // +0x3f8
    NSArray * _arryIP; // +0x400
    NSString * _dataUrl; // +0x408
    unsigned long long _xorEncryKey; // +0x410
    unsigned long long _ui64StartTime; // +0x418
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
