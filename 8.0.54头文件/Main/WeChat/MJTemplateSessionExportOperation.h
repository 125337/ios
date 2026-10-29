@interface MJTemplateSessionExportOperation : NSObject
{
    OMJMaasCore * _maasCore; // +0x8
    OMJMovieSession * _maasSession; // +0x10
    NSString * _sessionKey; // +0x18
    NSString * _outputFilePath; // +0x20
    OMJMovieExportSettings * _exportSettings; // +0x28
    OMJTemplateInfo * _templateInfo; // +0x30
    OMJMusicInfo * _musicInfo; // +0x38
    NSError * _error; // +0x40
    long long _status; // +0x48
    id /* block */ _statusChangedHandler; // +0x50
    id /* block */ _progressHandler; // +0x58
    id /* block */ _resultHandler; // +0x60
    UIImage * _coverImage; // +0x68
    struct _timeRange; // +0x70
}
- (id)initWithMaasCore:(id)arg1 maasSession:(id)arg2 sessionKey:(id)arg3 timeRange:(struct)arg4 outputFilePath:(id)arg5 exportSettings:(id)arg6 progressHandler:(id /* block */)arg7 resultHandler:(id /* block */)arg8;
- (void)dealloc;
- (void)start;
- (void)pause;
- (void)resume;
- (void)_loadExportInfo;
- (void)_startExporting;
- (void)_pauseExporting;
- (void)_updateStatus:(long long)arg1;
- (void)_didCompleteWithError:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)exportCreationWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)arg1;
- (id)maasCore;
- (id)maasSession;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (struct)timeRange;
- (id)outputFilePath;
- (id)exportSettings;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id /* block */)statusChangedHandler;
- (void)setStatusChangedHandler:(id /* block */)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (void).cxx_destruct;
@end

