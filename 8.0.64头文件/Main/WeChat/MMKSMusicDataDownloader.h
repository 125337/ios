@interface MMKSMusicDataDownloader : LZAudioDataDownloader
{
    NSURLConnection * _urlConnection; // +0x8
    LZDownloadTaskItem * _taskItem; // +0x10
    long long _statusCode; // +0x18
    long long _downloadDataLen; // +0x20
    double _startTime; // +0x28
    double _downloadSpeed; // +0x30
    double _costTime; // +0x38
    _NSRange _downloadRange; // +0x40
}
- (void)dealloc;
- (void)cancel;
- (id)taskItem;
- (_NSRange)downloadRange;
- (long long)continuousLengh;
- (double)downloadSpeed;
- (double)downloadCostTime;
- (BOOL)beginDownload:(id)arg1;
- (BOOL)isErrorCanRetry:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (id)syncReplaceRequestIPIfNeed:(id)arg1;
- (void)reportDownloadStart;
- (void)reportContentTypeError;
- (void)reportContentLengthError;
- (void)reportContentRangeError;
- (id)urlConnection;
- (void)setUrlConnection:(id)arg1;
- (void)setTaskItem:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (void)setDownloadRange:(_NSRange)arg1;
- (long long)downloadDataLen;
- (void)setDownloadDataLen:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void)setDownloadSpeed:(double)arg1;
- (double)costTime;
- (void)setCostTime:(double)arg1;
- (void).cxx_destruct;
@end
