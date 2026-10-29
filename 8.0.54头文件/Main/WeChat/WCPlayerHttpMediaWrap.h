@interface WCPlayerHttpMediaWrap : NSObject <WCPlayerMediaExt>
{
    unsigned int _taskId; // +0x8
    int _bitrate; // +0xc
    unsigned int _preloadPercent; // +0x10
    unsigned int _taskTimeout; // +0x14
    unsigned int _blockSize; // +0x18
    int _apptype; // +0x1c
    int _filetype; // +0x20
    NSString * _nsIdentifier; // +0x28
    NSString * _nsResourceUrl; // +0x30
    NSString * _codingFormat; // +0x38
    unsigned long long _enQueueTime; // +0x40
    unsigned long long _playerScene; // +0x48
    double _startDownloadTime; // +0x50
    double _getMoovTime; // +0x58
    unsigned long long _downloadType; // +0x60
}
- (id)initWithResourceUrl:(id)arg1 bitrate:(int)arg2;
- (unsigned int)blockSize;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (id)getTempDirectory;
- (unsigned int)getPreloadPercent;
- (id)getHTTPReferer;
- (BOOL)isLIFOPreloadTask;
- (id)description;
- (int)getBitrate;
- (id)getCodingFormat;
- (id)generateDownloadArgsWrapWithPlayerScene:(unsigned long long)arg1;
- (int)getFileTypeWithPlayerScene:(unsigned long long)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (id)nsResourceUrl;
- (void)setNsResourceUrl:(id)arg1;
- (int)bitrate;
- (void)setBitrate:(int)arg1;
- (id)codingFormat;
- (void)setCodingFormat:(id)arg1;
- (unsigned int)preloadPercent;
- (void)setPreloadPercent:(unsigned int)arg1;
- (unsigned long long)enQueueTime;
- (void)setEnQueueTime:(unsigned long long)arg1;
- (unsigned int)taskTimeout;
- (void)setTaskTimeout:(unsigned int)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (double)startDownloadTime;
- (void)setStartDownloadTime:(double)arg1;
- (double)getMoovTime;
- (void)setGetMoovTime:(double)arg1;
- (void)setBlockSize:(unsigned int)arg1;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (int)apptype;
- (void)setApptype:(int)arg1;
- (int)filetype;
- (void)setFiletype:(int)arg1;
- (void).cxx_destruct;
@end

