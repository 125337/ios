@interface MMKSBasicMusicDownloader : LZAudioDataDownloader
{
    LZDownloadTaskItem * _taskItem; // +0x8
    long long _statusCode; // +0x10
    long long _continuousLengh; // +0x18
    double _startTime; // +0x20
    double _downloadSpeed; // +0x28
    double _downloadCostTime; // +0x30
    _NSRange _downloadRange; // +0x38
}
- (BOOL)isErrorCanRetry:(id)arg1;
- (BOOL)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (void)handlerReceiveRespons:(id)arg1 error:(id *)arg2;
- (BOOL)isMineTypeErrorWithHeaders:(id)arg1;
- (BOOL)isStatusCodeSuccess:(int)arg1;
- (id)buildHTTPHeaderFields;
- (void)setupDictionaryIntoTarget:(id)arg1 withSource:(id)arg2;
- (id)buildHTTPHeaderRangeField;
- (id)buildHTTPHeaderQQMusicRelatedField;
- (void)reportDownloadStartWithIsWholeRange:(BOOL)arg1;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportInvalidContantTypeInResponse;
- (void)reportDownloadCompleteWithSuccess:(BOOL)arg1;
- (id)taskItem;
- (void)setTaskItem:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (long long)continuousLengh;
- (void)setContinuousLengh:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)downloadSpeed;
- (void)setDownloadSpeed:(double)arg1;
- (double)downloadCostTime;
- (void)setDownloadCostTime:(double)arg1;
- (_NSRange)downloadRange;
- (void)setDownloadRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end

