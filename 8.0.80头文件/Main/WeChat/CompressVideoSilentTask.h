@interface CompressVideoSilentTask : WCSilentTask
{
    BOOL _thisLoopIsHardLinkFileCompress; // +0x8
    BOOL _isBGTaskScene; // +0x9
    BOOL _skipConditionsForDebug; // +0xa
    BOOL _willReportType; // +0xb
    unsigned int _intervalInSeconds; // +0xc
    NSString * _videoPathDataFilePathNow; // +0x10
    NSMutableArray * _videoPathArrayOfCurrentDataFile; // +0x18
    NSMutableArray * _dataFilePathArray; // +0x20
    unsigned long long _compressedVideo; // +0x28
    unsigned long long _sessionId; // +0x30
    unsigned long long _limitCount; // +0x38
    NSMutableArray * _hardLinkVideoInfoPath; // +0x40
    long long _videoBitrateMinThreshold; // +0x48
}
- (id)initWithSessionIdAndLimitAndInterval:(unsigned long long)arg1 limit:(unsigned long long)arg2 intervalInSeconds:(unsigned int)arg3;
- (void)startOperation;
- (void)runLoop;
- (void)compressNormalVideoRunLoop;
- (void)compressHardLinkVideoRunLoop;
- (BOOL)compressVideoFromH264ToH265:(id)arg1 isHardLink:(BOOL)arg2 hardLinkPaths:(id)arg3;
- (void)reportConvertVideoToH265:(int)arg1 compressDuration:(unsigned long long)arg2 totalVideoCount:(unsigned long long)arg3 videoNumber:(unsigned long long)arg4 sessionId:(unsigned long long)arg5 videoFps:(int)arg6 videoDuration:(long long)arg7 h264VideoFileSize:(unsigned long long)arg8 h265VideoFileSize:(unsigned long long)arg9 h264VideoBitrate:(long long)arg10 h265VideoBitrate:(long long)arg11 firstFinishDuration:(unsigned long long)arg12;
- (void)compressStart;
- (void)compressEnd;
- (void)resetLastWholeWechatScanTime;
- (id)compressVideoMMKV;
- (unsigned long long)inodeByFullPath:(id)arg1;
- (id)videoPathDataFilePathNow;
- (void)setVideoPathDataFilePathNow:(id)arg1;
- (id)videoPathArrayOfCurrentDataFile;
- (void)setVideoPathArrayOfCurrentDataFile:(id)arg1;
- (id)dataFilePathArray;
- (void)setDataFilePathArray:(id)arg1;
- (unsigned long long)compressedVideo;
- (void)setCompressedVideo:(unsigned long long)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (unsigned long long)limitCount;
- (void)setLimitCount:(unsigned long long)arg1;
- (unsigned int)intervalInSeconds;
- (void)setIntervalInSeconds:(unsigned int)arg1;
- (BOOL)thisLoopIsHardLinkFileCompress;
- (void)setThisLoopIsHardLinkFileCompress:(BOOL)arg1;
- (id)hardLinkVideoInfoPath;
- (void)setHardLinkVideoInfoPath:(id)arg1;
- (BOOL)isBGTaskScene;
- (void)setIsBGTaskScene:(BOOL)arg1;
- (BOOL)skipConditionsForDebug;
- (void)setSkipConditionsForDebug:(BOOL)arg1;
- (BOOL)willReportType;
- (void)setWillReportType:(BOOL)arg1;
- (long long)videoBitrateMinThreshold;
- (void)setVideoBitrateMinThreshold:(long long)arg1;
- (void).cxx_destruct;
@end
