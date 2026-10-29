@interface KSHttpAudioDataDownload : LZAudioDataDownloader
{
    NSURLRequest * _urlRequest; // +0x10
    NSURLConnection * _urlConnection; // +0x18
    LZDownloadTaskItem * _taskItem; // +0x20
    long long _statusCode; // +0x28
    _NSRange _downloadRange; // +0x30
    long long _downloadDataLen; // +0x40
    double _startTime; // +0x48
    double _downloadSpeed; // +0x50
    double _costTime; // +0x58
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
- (id)createURLRequest;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (id)urlRequest;
- (id)urlConnection;
- (void).cxx_destruct;
@end
