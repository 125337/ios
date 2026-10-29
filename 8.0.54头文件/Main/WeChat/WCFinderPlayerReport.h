@interface WCFinderPlayerReport : WCPlayerReporter
{
    BOOL _downloadSuccessful; // +0x8
    BOOL _isDownloadH265; // +0x9
    BOOL _isDownloadH266; // +0xa
    BOOL _isSeek; // +0xb
    BOOL _isPause; // +0xc
    BOOL _isPlayUnifiedURL; // +0xd
    BOOL _hasRecordPrecreate; // +0xe
    BOOL _isDownloadFinishBeforPlay; // +0xf
    BOOL _hasFinderDataReported; // +0x10
    unsigned long long _hasDownloadSize; // +0x18
    NSString * _tid; // +0x20
    NSMutableSet * _secondSet; // +0x28
    NSMutableDictionary * _secondBufferDict; // +0x30
    NSMutableSet * _timeIntervalSet; // +0x38
    NSMutableDictionary * _networkStatusDict; // +0x40
    unsigned long long _loopCount; // +0x48
    unsigned long long _completedSizeBeforePlay; // +0x50
    WCFinderPlayBufferingInfo * _bufferingInfo; // +0x58
    NSMutableArray * _bufferingInfoArray; // +0x60
}
- (void)resetReportFlag;
- (void)customReport;
- (void)cachePrecreateData;
- (void)updatePrecreateLoadInfo;
- (id)finderMediaWrap;
- (id)secondSet;
- (id)secondBufferDict;
- (id)timeIntervalSet;
- (id)getReportInfo;
- (id)getAllBufferEvent;
- (id)getWaitDetailJson;
- (id)getAPMInfoStr;
- (id)getReportJsonFormatStringWithDictionary:(id)arg1;
- (id)getJsonFormatStringWithDictionary:(id)arg1;
- (id)replaceCommaToSemicolon:(id)arg1;
- (long long)getPreloadFileSize;
- (id)secondSetString;
- (id)secondBufferString;
- (unsigned long long)getFirstLoadTime;
- (int)getPreCreateExperienceCost;
- (void)startLoading;
- (void)endLoading;
- (void)reportBuffering;
- (unsigned long long)hasDownloadSize;
- (void)setHasDownloadSize:(unsigned long long)arg1;
- (BOOL)downloadSuccessful;
- (void)setDownloadSuccessful:(BOOL)arg1;
- (BOOL)isDownloadH265;
- (void)setIsDownloadH265:(BOOL)arg1;
- (BOOL)isDownloadH266;
- (void)setIsDownloadH266:(BOOL)arg1;
- (BOOL)isSeek;
- (void)setIsSeek:(BOOL)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void)setSecondSet:(id)arg1;
- (void)setSecondBufferDict:(id)arg1;
- (void)setTimeIntervalSet:(id)arg1;
- (id)networkStatusDict;
- (void)setNetworkStatusDict:(id)arg1;
- (BOOL)isPlayUnifiedURL;
- (void)setIsPlayUnifiedURL:(BOOL)arg1;
- (unsigned long long)loopCount;
- (void)setLoopCount:(unsigned long long)arg1;
- (BOOL)hasRecordPrecreate;
- (void)setHasRecordPrecreate:(BOOL)arg1;
- (BOOL)isDownloadFinishBeforPlay;
- (void)setIsDownloadFinishBeforPlay:(BOOL)arg1;
- (unsigned long long)completedSizeBeforePlay;
- (void)setCompletedSizeBeforePlay:(unsigned long long)arg1;
- (BOOL)hasFinderDataReported;
- (void)setHasFinderDataReported:(BOOL)arg1;
- (id)bufferingInfo;
- (void)setBufferingInfo:(id)arg1;
- (id)bufferingInfoArray;
- (void)setBufferingInfoArray:(id)arg1;
- (void).cxx_destruct;
@end

